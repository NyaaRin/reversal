// DumpAll - resumable reverse-engineering dump for m64.dll (mayrrX64).
//
// Modes:
//   inventory  -> inventory.tsv, strings_by_function.tsv, memory_map.tsv,
//                 datatypes.tsv, imports.tsv, exports.tsv, summary.txt
//   decompile  -> decompile/<addr>_<name>.c per function + decompile/_INDEX.tsv
//
// Both modes append rather than rewrite, and decompile mode skips any function
// whose output file already exists, so an interrupted run can be restarted with
// the same command and will continue where it stopped.

import java.io.*;
import java.util.*;

import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

public class DumpAll extends GhidraScript {

    private String outDir;
    private PrintWriter log;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: DumpAll.java <outdir> <inventory|decompile> [startAddr]");
            return;
        }
        outDir = args[0];
        String mode = args[1];
        new File(outDir).mkdirs();

        log = new PrintWriter(new FileWriter(new File(outDir, "run.log"), true), true);
        log.println("=== " + new Date() + " mode=" + mode + " program=" + currentProgram.getName() + " ===");

        try {
            if (mode.equals("inventory")) {
                dumpInventory();
            }
            else if (mode.equals("decompile")) {
                dumpDecompile(args.length > 2 ? args[2] : null);
            }
            else {
                println("unknown mode " + mode);
            }
        }
        finally {
            log.close();
        }
    }

    private void say(String s) {
        println(s);
        log.println(s);
    }

    private String hex(Address a) {
        return "0x" + a.toString();
    }

    // ---------------------------------------------------------------- inventory

    private void dumpInventory() throws Exception {
        // Memory map
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "memory_map.tsv")))) {
            w.println("name\tstart\tend\tinitialized\tperm");
            for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
                String perm = (b.isRead() ? "r" : "-") + (b.isWrite() ? "w" : "-") +
                    (b.isExecute() ? "x" : "-");
                w.println(b.getName() + "\t" + hex(b.getStart()) + "\t" + hex(b.getEnd()) +
                    "\t" + b.isInitialized() + "\t" + perm);
            }
        }

        // Imports / exports
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "imports.tsv")))) {
            w.println("library\tname\taddress");
            SymbolTable st = currentProgram.getSymbolTable();
            for (Symbol s : st.getExternalSymbols()) {
                Namespace ns = s.getParentNamespace();
                w.println((ns == null ? "?" : ns.getName()) + "\t" + s.getName() + "\t" + hex(s.getAddress()));
            }
        }
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "exports.tsv")))) {
            w.println("name\taddress");
            for (Symbol s : currentProgram.getSymbolTable().getAllSymbols(true)) {
                if (s.isExternalEntryPoint()) {
                    w.println(s.getName(true) + "\t" + hex(s.getAddress()));
                }
            }
        }

        // Data types (recovered classes/structs; MSVC RTTI arrives here demangled)
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "datatypes.tsv")))) {
            w.println("kind\tname\tlength\tpath");
            Iterator<DataType> it = currentProgram.getDataTypeManager().getAllDataTypes();
            while (it.hasNext()) {
                DataType dt = it.next();
                String kind = dt.getClass().getSimpleName();
                String path = dt.getCategoryPath() == null ? "" : dt.getCategoryPath().getPath();
                w.println(kind + "\t" + dt.getName() + "\t" + dt.getLength() + "\t" + path);
            }
        }

        // String -> function map. One pass over defined data, then map each
        // referring instruction back to its containing function.
        Map<Function, List<String>> byFunction = new HashMap<>();
        int stringCount = 0;
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "strings_by_function.tsv")))) {
            w.println("function\taddress\tstring");
            DataIterator di = currentProgram.getListing().getDefinedData(true);
            while (di.hasNext() && !monitor.isCancelled()) {
                Data d = di.next();
                if (!d.hasStringValue()) {
                    continue;
                }
                String value = d.getValue() == null ? "" : d.getValue().toString();
                if (value.length() < 4) {
                    continue;
                }
                stringCount++;
                Reference[] refs = getReferencesTo(d.getAddress());
                Set<Function> seen = new LinkedHashSet<>();
                for (Reference r : refs) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f != null && seen.add(f)) {
                        byFunction.computeIfAbsent(f, k -> new ArrayList<>()).add(value);
                        w.println(f.getName(true) + "\t" + hex(f.getEntryPoint()) + "\t" + clean(value));
                    }
                }
            }
        }

        // Function inventory, with the strings each function references. Those
        // references are what let later stages name a sub_140xxxxxx in one look.
        int functions = 0;
        int thunks = 0;
        int withStrings = 0;
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "inventory.tsv")))) {
            w.println("address\tsize\tcallers\tisThunk\tname\tstringHits\tsampleStrings");
            FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
            while (it.hasNext() && !monitor.isCancelled()) {
                Function f = it.next();
                functions++;
                if (f.isThunk()) {
                    thunks++;
                }
                List<String> strings = byFunction.get(f);
                if (strings != null && !strings.isEmpty()) {
                    withStrings++;
                }
                int callers = 0;
                try {
                    callers = f.getCallingFunctions(monitor).size();
                }
                catch (Exception ignored) {
                    // A malformed reference can abort the caller walk; the count
                    // is diagnostic only, so keep going.
                }
                StringBuilder sample = new StringBuilder();
                if (strings != null) {
                    for (int i = 0; i < Math.min(8, strings.size()); i++) {
                        if (i > 0) {
                            sample.append(" | ");
                        }
                        sample.append(clean(strings.get(i)));
                    }
                    if (strings.size() > 8) {
                        sample.append(" | +").append(strings.size() - 8);
                    }
                }
                w.println(hex(f.getEntryPoint()) + "\t" + f.getBody().getNumAddresses() +
                    "\t" + callers + "\t" + f.isThunk() + "\t" + f.getName(true) +
                    "\t" + (strings == null ? 0 : strings.size()) + "\t" + sample);
            }
        }

        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "summary.txt")))) {
            Memory mem = currentProgram.getMemory();
            w.println("program       : " + currentProgram.getName());
            w.println("executable    : " + currentProgram.getExecutablePath());
            w.println("md5           : " + currentProgram.getExecutableMD5());
            w.println("language      : " + currentProgram.getLanguageID());
            w.println("compiler      : " + currentProgram.getCompilerSpec().getCompilerSpecID());
            w.println("imageBase     : " + hex(currentProgram.getImageBase()));
            w.println("functions     : " + functions);
            w.println("thunks        : " + thunks);
            w.println("with strings  : " + withStrings);
            w.println("defined strings: " + stringCount);
            w.println("image size    : " + mem.getMaxAddress().subtract(mem.getMinAddress()) + 1);
        }
        say("inventory complete: functions=" + functions + " strings=" + stringCount +
            " withStrings=" + withStrings);
    }

    // ---------------------------------------------------------------- decompile

    private void dumpDecompile(String startAddr) throws Exception {
        File dir = new File(outDir, "decompile");
        dir.mkdirs();
        File indexFile = new File(dir, "_INDEX.tsv");
        boolean fresh = !indexFile.exists();
        PrintWriter index = new PrintWriter(new FileWriter(indexFile, true), true);
        if (fresh) {
            index.println("address\tsize\tname\tfile\tstatus");
        }

        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(false);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) {
            say("decompiler failed to open program: " + decomp.getLastMessage());
            index.close();
            return;
        }

        long start = System.currentTimeMillis();
        Address startAt = null;
        if (startAddr != null && !startAddr.isEmpty()) {
            startAt = currentProgram.getAddressFactory().getAddress(startAddr);
        }

        int done = 0, skipped = 0, failed = 0, total = 0;
        FunctionIterator counter = currentProgram.getFunctionManager().getFunctions(true);
        while (counter.hasNext()) {
            counter.next();
            total++;
        }

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            if (startAt != null && f.getEntryPoint().compareTo(startAt) < 0) {
                continue;
            }
            String addr = hex(f.getEntryPoint());
            String safeName = sanitize(f.getName(true));
            String base = addr + "_" + safeName;
            if (base.length() > 180) {
                base = base.substring(0, 180);
            }
            File target = new File(dir, base + ".c");
            if (target.exists() && target.length() > 0) {
                skipped++;
                continue;
            }

            String status = "ok";
            String code = null;
            try {
                DecompileResults res = decomp.decompileFunction(f, 45, monitor);
                if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    code = res.getDecompiledFunction().getC();
                }
                else {
                    status = "incomplete:" + (res == null ? "null" : res.getErrorMessage());
                    failed++;
                }
            }
            catch (Exception e) {
                status = "error:" + e.getClass().getSimpleName();
                failed++;
            }

            try (PrintWriter w = new PrintWriter(new FileWriter(target))) {
                w.println("// " + addr + "  " + f.getName(true));
                w.println("// size=" + f.getBody().getNumAddresses() + " thunk=" + f.isThunk());
                w.println("// signature: " + f.getPrototypeString(true, true));
                w.println("// status: " + status);
                w.println();
                w.println(code == null ? "// <decompilation unavailable>" : code);
            }
            index.println(addr + "\t" + f.getBody().getNumAddresses() + "\t" + f.getName(true) +
                "\t" + target.getName() + "\t" + status);
            done++;

            if ((done % 100) == 0) {
                long elapsed = System.currentTimeMillis() - start;
                say("decompiled " + done + " (skipped " + skipped + ", failed " + failed + " of " +
                    total + ") elapsed=" + (elapsed / 1000) + "s");
            }
        }

        decomp.dispose();
        index.close();
        say("decompile complete: done=" + done + " skipped=" + skipped + " failed=" + failed +
            " total=" + total);
    }

    private String sanitize(String name) {
        StringBuilder sb = new StringBuilder();
        for (char c : name.toCharArray()) {
            sb.append(Character.isLetterOrDigit(c) || c == '_' ? c : '_');
        }
        return sb.toString();
    }

    private String clean(String s) {
        return s.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
}

// ApplyRTTI - give m64.dll's virtual methods their real names.
//
// Reads the class/vtable map produced by rtti.js, walks each vtable's function
// pointers, and names every slot Class_vfuncNN. It also emits vtable_methods.tsv
// so the reconstruction has a stable class -> method table to work from.
//
// Run against the saved project, before the decompile dump:
//   analyzeHeadless <projdir> <proj> -process m64.dll -noanalysis \
//     -scriptPath <tools> -postScript ApplyRTTI.java <rtti_classes.tsv> <outdir> \
//     -saveProject

import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

public class ApplyRTTI extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: ApplyRTTI.java <rtti_classes.tsv> <outdir>");
            return;
        }
        File tsv = new File(args[0]);
        File outDir = new File(args[1]);
        outDir.mkdirs();
        if (!tsv.exists()) {
            println("rtti tsv not found: " + tsv);
            return;
        }

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        long imageBase = currentProgram.getImageBase().getOffset();

        // First pass: collect every vtable start so slot walking can stop at the
        // next table instead of running into unrelated .rdata.
        List<String[]> rows = new ArrayList<>();
        Set<Long> vtableStarts = new HashSet<>();
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line = r.readLine();
            while ((line = r.readLine()) != null) {
                String[] f = line.split("\t", -1);
                if (f.length < 2 || f[1].isEmpty()) continue;
                long rva = Long.parseLong(f[1].replace("0x", ""), 16);
                vtableStarts.add(imageBase + rva);
                rows.add(f);
            }
        }

        int named = 0, slotsTotal = 0, classes = 0;
        StringBuilder tsvOut = new StringBuilder("class\tslot\taddress\tcurrentName\tapplied\n");

        for (String[] row : rows) {
            String className = row[0];
            long vtableVa = imageBase + Long.parseLong(row[1].replace("0x", ""), 16);
            String flat = className.replace("::", "_").replace("<", "_").replace(">", "_")
                .replace(",", "_").replace(" ", "");
            classes++;

            Address vtableAddr = toAddr(vtableVa);
            try {
                createLabel(vtableAddr, "vftable_" + flat, true, SourceType.USER_DEFINED);
            }
            catch (Exception ignored) {
            }

            int slot = 0;
            Address slotAddr = vtableAddr;
            while (slot < 256) {
                // Stop when this slot is itself another class's vtable start:
                // walking past the end of a table would otherwise collect the
                // next class's methods as if they belonged here.
                if (slot > 0 && vtableStarts.contains(slotAddr.getOffset())) {
                    break;
                }
                MemoryBlock slotBlock = mem.getBlock(slotAddr);
                if (slotBlock == null) {
                    break;
                }
                long target;
                try {
                    target = mem.getLong(slotAddr);
                }
                catch (Exception e) {
                    break;
                }
                if (target <= 0) {
                    break;
                }
                Address fnAddr = toAddr(target);
                if (slot > 0 && vtableStarts.contains(target)) {
                    break;                     // next class's vtable begins here
                }
                Function fn = fm.getFunctionAt(fnAddr);
                MemoryBlock fnBlock = mem.getBlock(fnAddr);
                boolean executable = fnBlock != null && fnBlock.isExecute();
                String currentName = fn != null ? fn.getName() : (getSymbolAt(fnAddr) != null ? getSymbolAt(fnAddr).getName() : "");
                String applied = "";

                if (executable) {
                    String wanted = flat + "_vfunc" + String.format("%02d", slot);
                    if (fn == null) {
                        try {
                            fn = createFunction(fnAddr, wanted);
                        }
                        catch (Exception e) {
                            fn = null;
                        }
                    }
                    if (fn != null && !fn.getName().startsWith(flat + "_vfunc")) {
                        try {
                            fn.setName(wanted, SourceType.USER_DEFINED);
                            applied = wanted;
                            named++;
                        }
                        catch (Exception e) {
                            applied = "name-failed";
                        }
                    }
                }

                tsvOut.append(className).append('\t').append(slot).append('\t')
                      .append("0x").append(Long.toHexString(target)).append('\t')
                      .append(currentName.replace('\t', ' ')).append('\t')
                      .append(applied).append('\n');
                slotsTotal++;
                slot++;
                slotAddr = slotAddr.add(8);
            }
        }

        try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, "vtable_methods.tsv")))) {
            w.print(tsvOut);
        }
        println("ApplyRTTI: classes=" + classes + " slots=" + slotsTotal + " named=" + named);
    }
}

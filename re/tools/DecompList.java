// DecompList - decompile a specific list of addresses, immediately.
//
// Used to pull one subsystem out of m64.dll without waiting for the full
// corpus. Reads addresses (one per line, 0x-prefixed, optional trailing comment)
// from a file and writes <outdir>/<addr>_<name>.c for each, including the
// functions it calls up to a configurable depth so the reconstruction has its
// helpers in the same place.
//
// usage: DecompList.java <addrFile> <outdir> [depth] [timeoutSeconds]

import java.io.*;
import java.util.*;

import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class DecompList extends GhidraScript {

    private DecompInterface decomp;
    private File outDir;
    private int timeoutSeconds = 120;
    private Set<Long> written = new HashSet<>();

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: DecompList.java <addrFile> <outdir> [depth]");
            return;
        }
        File list = new File(args[0]);
        outDir = new File(args[1]);
        outDir.mkdirs();
        int depth = args.length > 2 ? Integer.parseInt(args[2]) : 0;
        timeoutSeconds = args.length > 3 ? Integer.parseInt(args[3]) : 120;

        decomp = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        options.setMaxPayloadMBytes(512);
        decomp.setOptions(options);
        decomp.toggleCCode(true);
        decomp.openProgram(currentProgram);

        List<Long> seeds = new ArrayList<>();
        try (BufferedReader r = new BufferedReader(new FileReader(list))) {
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty() || line.startsWith("#")) continue;
                String token = line.split("\\s+")[0].replace("0x", "");
                try {
                    seeds.add(Long.parseLong(token, 16));
                }
                catch (NumberFormatException ignored) {
                }
            }
        }
        println("DecompList: " + seeds.size() + " seeds, depth=" + depth);

        for (long seed : seeds) {
            dump(toAddr(seed), depth);
        }
        decomp.dispose();
        println("DecompList: wrote " + written.size() + " functions to " + outDir);
    }

    private void dump(Address addr, int depth) {
        if (addr == null || depth < 0) return;
        Function f = getFunctionAt(addr);
        if (f == null) f = getFunctionContaining(addr);
        if (f == null) {
            println("  no function at " + addr);
            return;
        }
        long key = f.getEntryPoint().getOffset();
        if (!written.add(key)) return;

        String flat = f.getName(true).replace("::", "_").replaceAll("[^A-Za-z0-9_]", "_");
        File out = new File(outDir, "0x" + Long.toHexString(key) + "_" + flat + ".c");
        String status = "ok";
        String code = null;
        try {
            DecompileResults res = decomp.decompileFunction(f, timeoutSeconds, monitor);
            if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                code = res.getDecompiledFunction().getC();
            }
            else {
                status = "incomplete:" + (res == null ? "null" : res.getErrorMessage());
            }
        }
        catch (Exception e) {
            status = "error:" + e;
        }

        try (PrintWriter w = new PrintWriter(new FileWriter(out))) {
            w.println("// " + f.getEntryPoint() + "  " + f.getName(true));
            w.println("// signature: " + f.getPrototypeString(true, true));
            w.println("// status: " + status);
            w.println();
            w.println(code == null ? "// <unavailable>" : code);
        }
        catch (IOException e) {
            println("  write failed: " + e.getMessage());
        }

        if (depth > 0) {
            InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                for (Reference r : ins.getReferencesFrom()) {
                    Address to = r.getToAddress();
                    Function callee = getFunctionAt(to);
                    if (callee != null && !callee.isThunk() && !callee.isExternal()) {
                        dump(to, depth - 1);
                    }
                }
            }
        }
    }
}

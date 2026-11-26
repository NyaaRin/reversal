// FixNames - correct vtable naming collisions.
//
// ApplyRTTI names a slot by the class that owns the vtable, but MSVC folds
// identical functions (empty stubs, shared overrides) into one address, so the
// last class processed ended up owning the name. This pass reads the full claim
// table and rewrites each address once:
//
//   exactly one claimant  -> <Class>_vfuncNN
//   several claimants     -> vfunc_shared_<addr>
//
// A shared stub is then honestly anonymous instead of being attributed to a
// feature that may not own it.

import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

public class FixNames extends GhidraScript {

    private static final class Claim {
        final String className;
        final int slot;
        Claim(String c, int s) { className = c; slot = s; }
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: FixNames.java <vtable_methods.tsv>");
            return;
        }
        File tsv = new File(args[0]);
        if (!tsv.exists()) {
            println("no claim table at " + tsv);
            return;
        }

        Map<Long, List<Claim>> claims = new LinkedHashMap<>();
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            r.readLine();                                   // header
            String line;
            while ((line = r.readLine()) != null) {
                String[] f = line.split("\t", -1);
                if (f.length < 3) continue;
                long addr;
                try {
                    addr = Long.parseLong(f[2].replace("0x", ""), 16);
                }
                catch (NumberFormatException e) {
                    continue;
                }
                int slot = 0;
                try {
                    slot = Integer.parseInt(f[1]);
                }
                catch (NumberFormatException ignored) {
                }
                claims.computeIfAbsent(addr, k -> new ArrayList<>()).add(new Claim(f[0], slot));
            }
        }

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        int unique = 0, shared = 0, skipped = 0;

        for (Map.Entry<Long, List<Claim>> e : claims.entrySet()) {
            long addr = e.getKey();
            Address a = toAddr(addr);
            MemoryBlock block = mem.getBlock(a);
            if (block == null || !block.isExecute()) {
                skipped++;
                continue;
            }
            Function fn = fm.getFunctionAt(a);
            if (fn == null) {
                skipped++;
                continue;
            }

            List<Claim> list = e.getValue();
            String wanted;
            if (list.size() == 1) {
                Claim c = list.get(0);
                wanted = c.className.replace("::", "_") + "_vfunc" + String.format("%02d", c.slot);
                unique++;
            }
            else {
                wanted = "vfunc_shared_" + Long.toHexString(addr);
                shared++;
            }

            try {
                if (!fn.getName().equals(wanted)) {
                    fn.setName(wanted, SourceType.USER_DEFINED);
                }
            }
            catch (Exception ex) {
                skipped++;
            }
        }
        println("FixNames: unique=" + unique + " shared=" + shared + " skipped=" + skipped);
    }
}

// 0x1802fac32  FUN_1802fac32
// size=68 thunk=false
// signature: undefined FUN_1802fac32()
// status: ok


undefined8 FUN_1802fac32(void)

{
  DAT_1803ffcf0 = DAT_1803ffcf0 + 1;
  if (DAT_1803ffcf0 < 0xb) {
    FUN_180014410("[SAFE] CreateMove feature exception #%d in %s\n",DAT_1803ffcf0,
                  "Hooks::CreateMove");
  }
  return 0;
}



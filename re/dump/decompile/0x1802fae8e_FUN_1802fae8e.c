// 0x1802fae8e  FUN_1802fae8e
// size=68 thunk=false
// signature: undefined FUN_1802fae8e()
// status: ok


undefined8 FUN_1802fae8e(void)

{
  DAT_180423ad8 = DAT_180423ad8 + 1;
  if (DAT_180423ad8 < 0xb) {
    FUN_180014410("[SAFE] RenderView feature exception #%d in %s\n",DAT_180423ad8,
                  "Hooks::RenderView");
  }
  return 0;
}



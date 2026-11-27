// 0x1802fa161  FUN_1802fa161
// size=115 thunk=false
// signature: undefined FUN_1802fa161()
// status: ok


undefined8 FUN_1802fa161(undefined8 param_1,longlong param_2)

{
  DAT_1803fa566 = 0;
  DAT_1803feb1c = 0;
  DAT_180425390 = DAT_180425390 + 1;
  if ((DAT_180425390 < 0xb) || (DAT_180425390 == (DAT_180425390 / 300) * 300)) {
    FUN_180014410("[SAFE] ESP render SEH 0x%x #%d\n",
                  *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x18));
  }
  return 0;
}



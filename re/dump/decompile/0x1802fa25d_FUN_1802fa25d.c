// 0x1802fa25d  FUN_1802fa25d
// size=101 thunk=false
// signature: undefined FUN_1802fa25d()
// status: ok


undefined8 FUN_1802fa25d(undefined8 param_1,longlong param_2)

{
  DAT_180425fcc = DAT_180425fcc + 1;
  if ((DAT_180425fcc < 0xb) || (DAT_180425fcc == (DAT_180425fcc / 300) * 300)) {
    FUN_180014410("[SAFE] menu frame SEH 0x%x #%d\n",
                  *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18));
  }
  return 0;
}



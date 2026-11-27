// 0x1800170c0  FUN_1800170c0
// size=37 thunk=false
// signature: undefined FUN_1800170c0()
// status: ok


undefined1 FUN_1800170c0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180017070();
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  return 1;
}



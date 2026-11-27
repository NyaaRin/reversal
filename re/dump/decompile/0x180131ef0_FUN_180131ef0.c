// 0x180131ef0  FUN_180131ef0
// size=98 thunk=false
// signature: undefined FUN_180131ef0()
// status: ok


ulonglong FUN_180131ef0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180131c20();
  if ((int)uVar1 < 0) {
    uVar1 = FUN_1801318c0(param_1);
    if ((int)uVar1 < 0) {
      return uVar1 & 0xffffffffffffff00;
    }
  }
  uVar1 = (**(code **)(*param_1 + (longlong)(int)uVar1 * 8))(param_1,param_2,0x80);
  return uVar1;
}



// 0x180114db0  FUN_180114db0
// size=44 thunk=false
// signature: undefined FUN_180114db0()
// status: ok


ulonglong FUN_180114db0(longlong *param_1,undefined8 *param_2)

{
  byte extraout_var;
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (undefined8 *)0x0)) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    (**(code **)(*param_1 + 0x60))();
    uVar1 = (ulonglong)(extraout_var >> 7) ^ 1;
  }
  return uVar1;
}



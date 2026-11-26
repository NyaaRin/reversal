// 0x18006d9c0  FUN_18006d9c0
// size=37 thunk=false
// signature: undefined FUN_18006d9c0()
// status: ok


ulonglong FUN_18006d9c0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((param_1 == (longlong *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x18))();
  }
  return uVar1;
}



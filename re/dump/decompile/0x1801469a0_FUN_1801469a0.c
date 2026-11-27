// 0x1801469a0  FUN_1801469a0
// size=42 thunk=false
// signature: undefined FUN_1801469a0()
// status: ok


ulonglong FUN_1801469a0(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (DAT_1803fa358 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(*DAT_1803fa358 + 0x108))(DAT_1803fa358,param_1);
  return uVar1;
}



// 0x1801153d0  FUN_1801153d0
// size=27 thunk=false
// signature: undefined FUN_1801153d0()
// status: ok


ulonglong FUN_1801153d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    lVar1 = *param_1;
    *param_2 = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
  }
  return uVar2;
}



// 0x1800e36d0  FUN_1800e36d0
// size=45 thunk=false
// signature: undefined FUN_1800e36d0()
// status: ok


ulonglong FUN_1800e36d0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x78))();
    if ((lVar2 == 0) || (uVar1 = *(ulonglong *)(lVar2 + 0x10), uVar1 < 0x10000)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



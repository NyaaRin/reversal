// 0x1800aa2f0  FUN_1800aa2f0
// size=79 thunk=false
// signature: undefined FUN_1800aa2f0()
// status: ok


ulonglong FUN_1800aa2f0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))();
    uVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
      uVar3 = (ulonglong)uVar1;
      if ((int)uVar1 < 1) {
        uVar3 = 0;
      }
      else if (*(int *)(DAT_1803fa608 + 0x1c) < (int)uVar1) {
        uVar3 = FUN_180071b00();
      }
    }
  }
  return uVar3;
}



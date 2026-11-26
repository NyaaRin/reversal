// 0x1800acb00  FUN_1800acb00
// size=70 thunk=false
// signature: undefined FUN_1800acb00()
// status: ok


undefined8 FUN_1800acb00(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))();
    uVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
      if ((iVar1 < 1) || (*(int *)(DAT_1803fa608 + 0x1c) < iVar1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



// 0x1800a2b30  FUN_1800a2b30
// size=101 thunk=false
// signature: undefined FUN_1800a2b30()
// status: ok


undefined8 FUN_1800a2b30(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
    uVar4 = 1;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
    if (plVar3 == (longlong *)0x0) {
      uVar4 = 1;
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if ((iVar1 < 1) ||
         (iVar1 = *(int *)(DAT_1803fa608 + 0x1c), iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3),
         iVar1 < iVar2)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



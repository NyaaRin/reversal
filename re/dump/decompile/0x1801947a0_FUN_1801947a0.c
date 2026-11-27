// 0x1801947a0  FUN_1801947a0
// size=303 thunk=false
// signature: undefined FUN_1801947a0()
// status: ok


int FUN_1801947a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == (longlong *)0x0) || (cVar1 = (**(code **)(*param_1 + 0x420))(), cVar1 == '\0')) {
    return 0;
  }
  if ((DAT_1803fa608 == 0) ||
     ((iVar5 = *(int *)(DAT_1803fa608 + 0x1c), iVar5 < 1 || (0x80 < iVar5)))) {
    iVar2 = 0;
    if (DAT_1803fa668 != (longlong *)0x0) {
      iVar2 = (**(code **)(*DAT_1803fa668 + 0xa8))();
    }
    iVar5 = 0x80;
    if (iVar2 - 1U < 0x80) {
      iVar5 = iVar2;
    }
  }
  iVar2 = 0;
  if (DAT_1803fa360 != (longlong *)0x0) {
    for (iVar4 = 1; iVar4 <= iVar5; iVar4 = iVar4 + 1) {
      plVar3 = (longlong *)
               (**(code **)(*DAT_1803fa360 + 0x18))
                         (DAT_1803fa360,iVar4,*DAT_1803fa360,param_4,cVar1);
      if (plVar3 == param_1) {
        return iVar4;
      }
    }
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  if ((0 < iVar2) && (iVar2 <= iVar5)) {
    return iVar2;
  }
  iVar5 = -1;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  return iVar5;
}



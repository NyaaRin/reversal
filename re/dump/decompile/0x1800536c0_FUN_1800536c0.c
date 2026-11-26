// 0x1800536c0  FUN_1800536c0
// size=183 thunk=false
// signature: undefined FUN_1800536c0()
// status: ok


int FUN_1800536c0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((param_1 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) || (DAT_1803fa608 == 0))
  {
    iVar1 = -1;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
    if (plVar3 == (longlong *)0x0) {
      iVar1 = -1;
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if ((iVar1 < 1) || (*(int *)(DAT_1803fa608 + 0x1c) < iVar1)) {
        iVar1 = -1;
      }
      else {
        iVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
        if (iVar1 == iVar2) {
          iVar1 = -1;
        }
        else if (DAT_1803fa360 == (longlong *)0x0) {
          iVar1 = -1;
        }
        else {
          plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar1);
          if (plVar3 != param_1) {
            iVar1 = -1;
          }
        }
      }
    }
  }
  return iVar1;
}



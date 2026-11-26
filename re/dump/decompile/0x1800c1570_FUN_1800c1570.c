// 0x1800c1570  FUN_1800c1570
// size=111 thunk=false
// signature: undefined FUN_1800c1570()
// status: ok


int FUN_1800c1570(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar2 == (longlong *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
    if (iVar1 - 1U < 0x80) {
      if (DAT_1803fa360 == (longlong *)0x0) {
        iVar1 = -1;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar1);
        if (plVar2 != param_1) {
          iVar1 = -1;
        }
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



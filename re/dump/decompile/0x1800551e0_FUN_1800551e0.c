// 0x1800551e0  FUN_1800551e0
// size=131 thunk=false
// signature: undefined FUN_1800551e0()
// status: ok


undefined8 FUN_1800551e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    else {
      iVar1 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar3 = *plVar2;
      if (0 < iVar1) {
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}



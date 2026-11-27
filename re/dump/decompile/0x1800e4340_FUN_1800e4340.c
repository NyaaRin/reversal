// 0x1800e4340  FUN_1800e4340
// size=120 thunk=false
// signature: undefined FUN_1800e4340()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e4340(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  iVar1 = 0;
  if (DAT_1803fa608 != 0) {
    iVar1 = *(int *)(DAT_1803fa608 + 4);
  }
  if ((0 < DAT_18040a408) && (iVar1 - _DAT_1803e9080 < 2)) {
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_18040a408);
    return 1;
  }
  (**(code **)(*plVar2 + 0xe0))();
  return 1;
}



// 0x180055370  FUN_180055370
// size=140 thunk=false
// signature: undefined FUN_180055370()
// status: ok


undefined8 FUN_180055370(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    puVar2 = (undefined1 *)(**(code **)(*DAT_1803fa668 + 0x118))();
    puVar3 = &DAT_18033e5ea;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);
    return 1;
  }
  return 0;
}



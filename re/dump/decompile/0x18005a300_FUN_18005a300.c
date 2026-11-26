// 0x18005a300  FUN_18005a300
// size=154 thunk=false
// signature: undefined FUN_18005a300()
// status: ok


undefined8 FUN_18005a300(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      if (plVar2 != (longlong *)0x0) {
        puVar3 = (undefined1 *)(**(code **)(*plVar2 + 8))(plVar2);
        puVar4 = &DAT_18033e5ea;
        if (puVar3 != (undefined1 *)0x0) {
          puVar4 = puVar3;
        }
        (**(code **)(*plVar1 + 0xe8))(plVar1,puVar4,0);
        return 1;
      }
    }
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}



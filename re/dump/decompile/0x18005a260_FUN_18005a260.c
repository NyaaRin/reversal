// 0x18005a260  FUN_18005a260
// size=153 thunk=false
// signature: undefined FUN_18005a260()
// status: ok


undefined8 FUN_18005a260(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*DAT_1803fa668 + 0x240))();
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined1 *)(**(code **)*puVar2)(puVar2);
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



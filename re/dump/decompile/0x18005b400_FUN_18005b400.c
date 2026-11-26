// 0x18005b400  FUN_18005b400
// size=136 thunk=false
// signature: undefined FUN_18005b400()
// status: ok


undefined8 FUN_18005b400(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    else {
      lVar2 = (**(code **)(*DAT_1803fa668 + 0x240))();
      lVar3 = *plVar1;
      if (lVar2 != 0) {
        (**(code **)(lVar3 + 0xf0))(plVar1,(double)*(int *)(lVar2 + 0xc));
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}



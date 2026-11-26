// 0x18005b7f0  FUN_18005b7f0
// size=149 thunk=false
// signature: undefined FUN_18005b7f0()
// status: ok


undefined8 FUN_18005b7f0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar4 = *plVar2;
      if (plVar3 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar3 + 0x1a0))(plVar3);
        (**(code **)(lVar4 + 0xf0))(plVar2,(double)uVar1);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}



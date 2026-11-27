// 0x18005ba60  FUN_18005ba60
// size=142 thunk=false
// signature: undefined FUN_18005ba60()
// status: ok


undefined8 FUN_18005ba60(longlong param_1)

{
  undefined1 uVar1;
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
        uVar1 = (**(code **)(*plVar3 + 0x1c0))(plVar3);
        (**(code **)(lVar4 + 0xf8))(plVar2,uVar1);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}



// 0x180055480  FUN_180055480
// size=119 thunk=false
// signature: undefined FUN_180055480()
// status: ok


undefined8 FUN_180055480(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    lVar1 = *plVar2;
    if (DAT_1803fa668 == (longlong *)0x0) {
      (**(code **)(lVar1 + 0xe0))(plVar2);
      return 1;
    }
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x78))();
    (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);
    return 1;
  }
  return 0;
}



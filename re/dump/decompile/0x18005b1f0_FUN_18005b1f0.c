// 0x18005b1f0  FUN_18005b1f0
// size=228 thunk=false
// signature: undefined FUN_18005b1f0()
// status: ok


undefined8 FUN_18005b1f0(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar6 = *plVar4;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar6 = *plVar4;
      if (plVar5 != (longlong *)0x0) {
        pcVar1 = *(code **)(*plVar5 + 0x90);
        dVar2 = (double)(**(code **)(lVar6 + 0x160))(plVar4,2);
        dVar3 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
        fVar7 = (float)(*pcVar1)(plVar5,(int)dVar3,(int)dVar2);
        (**(code **)(lVar6 + 0xf0))(plVar4,(double)fVar7);
        return 1;
      }
    }
    (**(code **)(lVar6 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}



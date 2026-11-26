// 0x18005adb0  FUN_18005adb0
// size=181 thunk=false
// signature: undefined FUN_18005adb0()
// status: ok


undefined8 FUN_18005adb0(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar5 = *plVar3;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar5 = *plVar3;
      if (plVar4 != (longlong *)0x0) {
        pcVar1 = *(code **)(*plVar4 + 0x70);
        dVar2 = (double)(**(code **)(lVar5 + 0x160))(plVar3,1);
        fVar6 = (float)(*pcVar1)(plVar4,(int)dVar2);
        (**(code **)(lVar5 + 0xf0))(plVar3,(double)fVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}



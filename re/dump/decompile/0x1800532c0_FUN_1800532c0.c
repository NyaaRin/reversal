// 0x1800532c0  FUN_1800532c0
// size=174 thunk=false
// signature: undefined FUN_1800532c0()
// status: ok


undefined8 FUN_1800532c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar2 + 0xe0))(plVar2);
      return 1;
    }
    lVar1 = *plVar2;
    fVar3 = DAT_1803eb4e8 * DAT_1803eb4e8 + DAT_1803eb4e4 * DAT_1803eb4e4;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    (**(code **)(lVar1 + 0xf0))(plVar2,(double)fVar3);
    return 1;
  }
  return 0;
}



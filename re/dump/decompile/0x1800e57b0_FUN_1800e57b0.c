// 0x1800e57b0  FUN_1800e57b0
// size=219 thunk=false
// signature: undefined FUN_1800e57b0()
// status: ok


undefined8 FUN_1800e57b0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar3 != 0) {
        pfVar4 = (float *)FUN_18001d530(lVar3);
        lVar3 = *plVar2;
        fVar5 = pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4;
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)fVar5);
        return 1;
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}



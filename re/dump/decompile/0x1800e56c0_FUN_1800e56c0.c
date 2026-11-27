// 0x1800e56c0  FUN_1800e56c0
// size=233 thunk=false
// signature: undefined FUN_1800e56c0()
// status: ok


undefined8 FUN_1800e56c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if ((0 < (int)dVar6) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar4 != 0) {
        pfVar5 = (float *)FUN_18001d530(lVar4);
        fVar1 = pfVar5[1];
        fVar2 = pfVar5[2];
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*pfVar5);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar2);
        return 3;
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}



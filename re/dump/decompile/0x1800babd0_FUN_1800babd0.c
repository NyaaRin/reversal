// 0x1800babd0  FUN_1800babd0
// size=257 thunk=false
// signature: undefined FUN_1800babd0()
// status: ok


float FUN_1800babd0(void)

{
  code *pcVar1;
  double dVar2;
  short sVar3;
  longlong *plVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double local_res8 [3];
  
  dVar2 = DAT_180380c80;
  local_res8[0] = DAT_180380c80;
  dVar9 = dVar2;
  if (DAT_1803fa668 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    if (plVar4 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x48);
      fVar7 = (float)(*pcVar1)(plVar4,1);
      fVar8 = (float)(*pcVar1)(plVar4,0);
      dVar9 = (double)(fVar7 + fVar8);
      local_res8[0] = dVar9;
    }
  }
  sVar3 = _dclass(dVar9);
  if (0 < sVar3) {
    local_res8[0] = dVar2;
    dVar9 = dVar2;
  }
  local_res8[2] = DAT_180380d08;
  local_res8[1] = dVar2;
  pdVar6 = local_res8 + 1;
  if (dVar2 <= dVar9) {
    pdVar6 = local_res8;
  }
  pdVar5 = local_res8 + 2;
  if (dVar9 <= DAT_180380d08) {
    pdVar5 = pdVar6;
  }
  if ((DAT_1803fa608 == 0) ||
     (dVar9 = *(double *)(DAT_1803fa608 + 0x28), *(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
    dVar9 = DAT_180380be0;
  }
  return (float)dVar9 + (float)dVar9 + (float)*pdVar5;
}



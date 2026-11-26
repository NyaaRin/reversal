// 0x1800a3ad0  FUN_1800a3ad0
// size=233 thunk=false
// signature: undefined FUN_1800a3ad0()
// status: ok


float FUN_1800a3ad0(void)

{
  short sVar1;
  longlong *plVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar5 = (float)FUN_1800c5790();
  local_res8[0] = fVar5;
  if (DAT_1803fa668 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    if (plVar2 != (longlong *)0x0) {
      fVar6 = (float)(**(code **)(*plVar2 + 0x50))(plVar2,0);
      if (((((uint)fVar6 & 0x7f800000) != 0x7f800000) && (0.0 < fVar6)) && (fVar6 < DAT_180380bb0))
      {
        fVar5 = fVar6 + fVar5;
        local_res8[0] = fVar5;
      }
    }
  }
  sVar1 = _fdclass(fVar5);
  if (sVar1 < 1) {
    local_res8[4] = 0.5;
    local_res8[2] = 0.0;
    pfVar4 = local_res8 + 2;
    if (0.0 <= fVar5) {
      pfVar4 = local_res8;
    }
    pfVar3 = local_res8 + 4;
    if (fVar5 <= DAT_180380ac0) {
      pfVar3 = pfVar4;
    }
    return *pfVar3;
  }
  return 0.0;
}



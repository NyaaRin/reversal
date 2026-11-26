// 0x1800ca770  FUN_1800ca770
// size=209 thunk=false
// signature: undefined FUN_1800ca770()
// status: ok


float FUN_1800ca770(void)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_res8 [8];
  
  local_res8[0] = (float)FUN_1800c5790();
  if (NAN(local_res8[0])) {
    local_res8[0] = 0.0;
  }
  else if (local_res8[0] < 0.0) {
    local_res8[0] = 0.0;
  }
  fVar5 = local_res8[0];
  if ((((DAT_1803fa668 != (longlong *)0x0) &&
       (plVar1 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), plVar1 != (longlong *)0x0)) &&
      (fVar4 = (float)(**(code **)(*plVar1 + 0x50))(plVar1,0), 0.0 < fVar4)) &&
     (fVar4 < DAT_180380bb0)) {
    fVar5 = fVar5 + fVar4;
    local_res8[0] = fVar5;
  }
  local_res8[4] = 0.5;
  local_res8[2] = 0.0;
  pfVar3 = local_res8 + 2;
  if (0.0 <= fVar5) {
    pfVar3 = local_res8;
  }
  pfVar2 = local_res8 + 4;
  if (fVar5 <= DAT_180380ac0) {
    pfVar2 = pfVar3;
  }
  return *pfVar2;
}



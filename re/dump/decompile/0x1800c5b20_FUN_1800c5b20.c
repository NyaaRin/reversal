// 0x1800c5b20  FUN_1800c5b20
// size=217 thunk=false
// signature: undefined FUN_1800c5b20()
// status: ok


double FUN_1800c5b20(double param_1)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double local_res8 [4];
  
  fVar3 = (float)FUN_1800c5790();
  dVar5 = (double)FUN_1800c5aa0();
  if (DAT_1803ffc58 == 0) {
    if (DAT_1803fa340 != 0) {
      DAT_1803ffc58 = FUN_180016fb0("sv_maxunlag");
      if (DAT_1803ffc58 != 0) goto LAB_1800c5b7d;
    }
  }
  else {
LAB_1800c5b7d:
    fVar4 = (float)FUN_180019700(DAT_1803ffc58);
    if (0.0 < fVar4) goto LAB_1800c5b95;
  }
  fVar4 = DAT_180380bb0;
LAB_1800c5b95:
  local_res8[0] = 0.0;
  local_res8[1] = dVar5 + (double)fVar3 + param_1;
  local_res8[2] = (double)fVar4;
  pdVar2 = local_res8;
  if (0.0 <= local_res8[1]) {
    pdVar2 = local_res8 + 1;
  }
  pdVar1 = local_res8 + 2;
  if (local_res8[1] <= (double)fVar4) {
    pdVar1 = pdVar2;
  }
  dVar5 = *pdVar1 - (dVar5 + (double)fVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  return dVar5;
}



// 0x1800c5790  FUN_1800c5790
// size=773 thunk=false
// signature: undefined FUN_1800c5790()
// status: ok


float FUN_1800c5790(void)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [8];
  
  if ((DAT_1803ff2b8 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803ff2b8 = FUN_180016fb0("sv_minupdaterate");
  }
  if ((DAT_180425908 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180425908 = FUN_180016fb0("sv_maxupdaterate");
  }
  if ((DAT_1803fe658 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803fe658 = FUN_180016fb0("cl_updaterate");
  }
  if ((DAT_1803fd048 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803fd048 = FUN_180016fb0("cl_interpolate");
  }
  if ((DAT_1803fd340 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803fd340 = FUN_180016fb0("cl_interp_ratio");
  }
  if ((DAT_180426118 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180426118 = FUN_180016fb0("cl_interp");
  }
  if ((DAT_1803ff0a0 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803ff0a0 = FUN_180016fb0("sv_client_min_interp_ratio");
  }
  if ((DAT_180425ab0 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180425ab0 = FUN_180016fb0("sv_client_max_interp_ratio");
  }
  if (((DAT_1803fe658 != 0) && (DAT_1803fd340 != 0)) && (DAT_180426118 != 0)) {
    if (((DAT_1803fd048 != 0) && (iVar2 = FUN_1800197a0(), iVar2 == 0)) &&
       (cVar1 = FUN_1800b8290(), cVar1 == '\0')) {
      return 0.0;
    }
    local_res8[0] = (float)FUN_180019700(DAT_1803fe658);
    fVar7 = local_res8[0];
    if (local_res8[0] <= 0.0) {
      local_res8[0] = 66.0;
      fVar7 = DAT_1803810d4;
    }
    if ((DAT_1803ff2b8 != 0) && (DAT_180425908 != 0)) {
      fVar5 = (float)FUN_180019700();
      local_res8[2] = fVar5;
      local_res8[4] = (float)FUN_180019700(DAT_180425908);
      if ((fVar5 <= local_res8[4]) && (0.0 < local_res8[4])) {
        pfVar4 = local_res8 + 2;
        if (fVar5 <= fVar7) {
          pfVar4 = local_res8;
        }
        pfVar3 = local_res8 + 4;
        if (fVar7 <= local_res8[4]) {
          pfVar3 = pfVar4;
        }
        fVar7 = *pfVar3;
      }
    }
    local_res8[0] = (float)FUN_180019700(DAT_1803fd340);
    fVar5 = local_res8[0];
    if (local_res8[0] == 0.0) {
      local_res8[0] = 1.0;
      fVar5 = DAT_180380bb0;
    }
    if (((DAT_1803ff0a0 != 0) && (DAT_180425ab0 != 0)) &&
       (fVar6 = (float)FUN_180019700(), fVar6 != DAT_180381384)) {
      fVar6 = (float)FUN_180019700(DAT_180425ab0);
      local_res8[4] = fVar6;
      local_res8[2] = (float)FUN_180019700(DAT_1803ff0a0);
      pfVar4 = local_res8 + 2;
      if (local_res8[2] <= fVar5) {
        pfVar4 = local_res8;
      }
      pfVar3 = local_res8 + 4;
      if (fVar5 <= fVar6) {
        pfVar3 = pfVar4;
      }
      fVar5 = *pfVar3;
    }
    fVar6 = (float)FUN_180019700(DAT_180426118);
    if (fVar6 <= fVar5 / fVar7) {
      fVar6 = fVar5 / fVar7;
    }
    return fVar6;
  }
  return DAT_1803809ec;
}



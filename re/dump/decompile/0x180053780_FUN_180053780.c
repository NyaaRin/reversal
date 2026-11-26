// 0x180053780  FUN_180053780
// size=944 thunk=false
// signature: undefined FUN_180053780()
// status: ok


longlong * FUN_180053780(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  float *pfVar7;
  code *pcVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 **ppuVar14;
  double *pdVar15;
  double local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 *local_60;
  double local_58;
  
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  cVar6 = FUN_18003a090("Pre_BuildBones");
  if (cVar6 == '\0') {
    return param_1;
  }
  local_68 = FUN_1800536c0(param_2);
  if (local_68 < 1) {
    return param_1;
  }
  pfVar7 = (float *)FUN_18001d620(param_2);
  fVar1 = pfVar7[1];
  local_res20 = (undefined8 *)(double)fVar1;
  fVar2 = *pfVar7;
  local_f8 = (double)fVar2;
  local_res18 = (undefined8 *)((ulonglong)local_res18 & 0xffffffffffffff00);
  pdVar15 = &local_f8;
  ppuVar14 = &local_res18;
  local_60 = local_res20;
  local_58 = local_f8;
  cVar6 = FUN_1801fea40();
  if (cVar6 == '\0') {
    return param_1;
  }
  fVar12 = (float)FUN_1802d3e00((float)(double)local_res20);
  fVar13 = fVar2;
  if ((char)local_res18 != '\0') {
    fVar13 = (float)local_f8;
  }
  if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
    return param_1;
  }
  if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
    return param_1;
  }
  if ((fVar12 == fVar1) && (fVar13 == fVar2)) {
    return param_1;
  }
  *(float *)(param_1 + 1) = *pfVar7;
  *(float *)((longlong)param_1 + 0xc) = pfVar7[1];
  *(float *)(param_1 + 2) = pfVar7[2];
  pfVar7[1] = fVar12;
  *pfVar7 = fVar13;
  *param_1 = param_2;
  if (param_2 == 0) {
    return param_1;
  }
  if (DAT_1803ff11c == '\0') {
    DAT_1803ff11c = '\x01';
    local_res18 = &local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_18001d080(&local_e8,
                  "8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
                  ,0x53,fVar2,ppuVar14,pdVar15);
    local_res20 = &local_c8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"client.dll",10);
    pcVar8 = (code *)FUN_180015f40(&local_c8,&local_e8);
    if (pcVar8 == (code *)0x0) {
      local_res18 = &local_a8;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_f0 = pcVar8;
      FUN_18001d080(&local_a8,
                    "FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3",0x45);
      local_res20 = &local_88;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_18001d080(&local_88,"client.dll",10);
      lVar9 = FUN_180015f40(&local_88,&local_a8);
      if ((lVar9 == 0) || (pcVar8 = (code *)(lVar9 + -6), local_f0 = pcVar8, pcVar8 == (code *)0x0))
      {
        FUN_180014410(&DAT_18033fcf0);
        goto LAB_180053a61;
      }
    }
    iVar3 = *(int *)(pcVar8 + 10);
    iVar4 = *(int *)(pcVar8 + 0x1b);
    if (((iVar3 - 0x101U < 0x3eff) && (iVar4 - 0x101U < 0x3eff)) && (iVar4 != iVar3)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((iVar3 == 0x1718) && (iVar4 == 0x1a88)) {
      pcVar11 = " [matches the documented layout]";
    }
    else {
      pcVar11 = "";
    }
    pcVar10 = "REJECTED (offsets outside the bone block)";
    if (bVar5) {
      pcVar10 = "accepted";
    }
    local_f0 = pcVar8;
    FUN_180014410(&DAT_18033fde0,pcVar8,iVar3,iVar4,pcVar10,pcVar11);
    if (bVar5) {
      DAT_1803fead8 = pcVar8;
    }
  }
LAB_180053a61:
  if (DAT_1803fead8 != (code *)0x0) {
    (*DAT_1803fead8)(param_2);
  }
  return param_1;
}



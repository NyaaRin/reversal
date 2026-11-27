// 0x1800d0b60  FUN_1800d0b60
// size=1478 thunk=false
// signature: undefined FUN_1800d0b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800d0b60(float *param_1,float *param_2,float param_3,float param_4,char param_5)

{
  float fVar1;
  float *pfVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong *plVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_158 [32];
  char local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114 [3];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float *local_e8;
  float *local_e0;
  longlong local_d8 [2];
  float *local_c8 [2];
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_c8[0] = param_1;
  FUN_180014300(local_d8);
  if (DAT_1803fe3d0 != 0) {
    param_4 = (float)(local_d8[0] - DAT_1803fe3d0) / DAT_1803812fc;
  }
  DAT_1803fe3d0 = local_d8[0];
  local_12c = 0.0005;
  pfVar2 = &local_12c;
  if (DAT_180380958 <= param_4) {
    pfVar2 = &local_134;
  }
  if (DAT_1803809c4 < param_4) {
    pfVar2 = (float *)&DAT_18033c670;
  }
  fVar15 = *pfVar2;
  if (param_5 != '\0') {
    DAT_180425abc = 0.0;
  }
  DAT_180425abc = DAT_180425abc + fVar15;
  local_134 = fVar15;
  fVar11 = (float)FUN_180022110(*param_2,*param_1);
  pfVar2 = param_1 + 1;
  pfVar9 = param_2 + 1;
  local_124 = fVar11;
  local_e8 = pfVar9;
  local_e0 = pfVar2;
  fVar12 = (float)FUN_180022110(*pfVar9,*pfVar2);
  local_d8[0] = CONCAT44(local_d8[0]._4_4_,fVar12);
  fVar13 = fVar12 * fVar12 + fVar11 * fVar11;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
    uVar18 = extraout_XMM0_Db;
  }
  else {
    uVar18 = 0;
    fVar13 = SQRT(fVar13);
  }
  fVar19 = DAT_1803809a0;
  local_128 = DAT_1803809a0;
  local_138 = 0;
  local_130 = fVar13;
  uVar3 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar3 = FUN_180241610(uVar3,0xb180266dc2efa3d2);
  pcVar4 = (char *)FUN_1801fcfc0(uVar3);
  local_138 = *pcVar4;
  fVar16 = fVar19;
  if (local_138 != '\0') {
    local_11c = 45.0;
    local_120 = 0.0;
    local_e8 = (float *)0xf7521f28977a3033;
    local_e0 = (float *)0xc7aca84756c0deaa;
    plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_e8);
    plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_d8,&local_e0);
    pfVar6 = (float *)FUN_180202dc0(*plVar5 + 0x28);
    pfVar8 = &local_120;
    if (0.0 <= *pfVar6) {
      pfVar8 = pfVar6;
    }
    pfVar7 = &local_11c;
    if (*pfVar6 <= DAT_180381094) {
      pfVar7 = pfVar8;
    }
    fVar16 = *pfVar7;
    if (*pfVar7 <= fVar19) {
      fVar16 = fVar19;
    }
  }
  if (fVar13 <= fVar16) {
    *param_1 = *param_2;
    *pfVar2 = *pfVar9;
    DAT_1804258a0 = 0.0;
    uVar18 = 0;
    fVar19 = DAT_180380bb0;
  }
  else {
    fVar19 = DAT_180380980;
    if (DAT_180380980 <= param_3) {
      fVar19 = param_3;
    }
    fVar19 = fVar19 / DAT_1803810d4;
    local_e8 = (float *)0xf7521f28977a3033;
    local_e0 = (float *)0xdc8f15f640c36b21;
    local_c8[0] = (float *)0x3203b4acc51e8a98;
    local_d8[0] = -0x16b8c441e119cc7a;
    plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_108,&local_e8);
    plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_f8,&local_e0);
    plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_108,local_c8);
    plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_f8,local_d8);
    lVar10 = *plVar5 + 0x28;
    pcVar4 = (char *)FUN_1801fcfc0(lVar10);
    if (*pcVar4 != '\0') {
      local_e8 = (float *)0x46d7ec514677a08b;
      plVar5 = (longlong *)FUN_180241a30(lVar10,local_108,&local_e8);
      pfVar8 = (float *)FUN_180202dc0(*plVar5 + 0x28);
      local_e8 = (float *)0x46bd02514660fe35;
      plVar5 = (longlong *)FUN_180241a30(lVar10,local_108,&local_e8);
      pfVar6 = (float *)FUN_180202dc0(*plVar5 + 0x28);
      local_e8 = (float *)0x1b82d4fa2b9cb358;
      plVar5 = (longlong *)FUN_180241a30(lVar10,local_108,&local_e8);
      pfVar9 = (float *)FUN_180202dc0(*plVar5 + 0x28);
      local_118 = *pfVar9 * DAT_1803809ec * DAT_180425abc;
      pfVar9 = &local_118;
      if (local_118 < *pfVar6) {
        pfVar9 = pfVar6;
      }
      if (*pfVar8 <= local_118 && local_118 != *pfVar8) {
        pfVar9 = pfVar8;
      }
      local_114[1] = *pfVar9;
      local_114[2] = 0.9;
      local_114[0] = 0.0;
      pfVar9 = local_114;
      if (0.0 <= local_114[1]) {
        pfVar9 = local_114 + 1;
      }
      pfVar8 = local_114 + 2;
      if (local_114[1] <= DAT_180380b68) {
        pfVar8 = pfVar9;
      }
      fVar19 = (DAT_180380bb0 - *pfVar8) * fVar19;
    }
    fVar1 = DAT_1804258a0;
    fVar16 = DAT_180380bb0;
    fVar14 = DAT_180380948;
    if (DAT_180380948 <= fVar19) {
      fVar14 = fVar19;
    }
    fVar17 = DAT_180380c00;
    if (DAT_180380c00 <= fVar13) {
      fVar17 = fVar13;
    }
    fVar17 = fVar17 / fVar14;
    if (DAT_1804258a0 < fVar17) {
      local_d8[0] = CONCAT44(local_d8[0]._4_4_,fVar14 * DAT_180380ab0);
      pfVar9 = (float *)local_d8;
      if (DAT_180380a1c < fVar14 * DAT_180380ab0) {
        pfVar9 = (float *)&DAT_18033c674;
      }
      fVar19 = DAT_180380948;
      if (DAT_180380948 <= *pfVar9) {
        fVar19 = *pfVar9;
      }
      fVar19 = expf((float)((uint)fVar15 ^ DAT_1803817f0) / fVar19);
      fVar17 = (fVar16 - fVar19) * (fVar17 - fVar1) + fVar1;
    }
    fVar19 = fVar13;
    if (fVar17 * fVar15 <= fVar13) {
      fVar19 = fVar17 * fVar15;
    }
    fVar19 = fVar19 / fVar13;
    DAT_1804258a0 = fVar17;
    *param_1 = fVar19 * fVar11 + *param_1;
    fVar15 = fVar19 * fVar12 + *pfVar2;
    *pfVar2 = fVar15;
    if (fVar15 <= DAT_180381188) {
      if (DAT_180381420 <= fVar15) goto LAB_1800d1132;
      fVar15 = fVar15 + DAT_18038120c;
    }
    else {
      fVar15 = fVar15 - DAT_18038120c;
    }
    *pfVar2 = fVar15;
  }
LAB_1800d1132:
  return CONCAT44(uVar18,fVar19);
}



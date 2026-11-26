// 0x180072ba0  FUN_180072ba0
// size=1369 thunk=false
// signature: undefined FUN_180072ba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180072ba0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  float local_128 [3];
  float local_11c;
  float local_118;
  float local_114 [4];
  float local_104;
  float local_100;
  float *local_f8;
  undefined1 *local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d8 [8];
  float local_d0;
  undefined8 local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float *local_b0;
  
  fVar6 = DAT_180381450;
  fVar5 = DAT_180381424;
  fVar4 = DAT_180381420;
  fVar3 = DAT_180381304;
  fVar2 = DAT_18038120c;
  fVar1 = DAT_180381188;
  local_b0 = (float *)(DAT_1803da4c0 ^ (ulonglong)auStack_148);
  DAT_1803e91f0 = -1.0;
  pfVar10 = local_b0;
  if (((((DAT_180423985 != '\0') && (DAT_180423984 != '\0')) && (0.0 <= DAT_1803e9210)) &&
      (((pfVar10 = DAT_1803fa608, DAT_1803fa608 != (float *)0x0 &&
        (0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210)) &&
       (((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90 &&
        ((pfVar10 = (float *)(ulonglong)((uint)*param_1 & 0x7f800000),
         ((uint)*param_1 & 0x7f800000) != 0x7f800000 &&
         (pfVar10 = (float *)(ulonglong)((uint)param_1[1] & 0x7f800000),
         ((uint)param_1[1] & 0x7f800000) != 0x7f800000)))))))) &&
     (pfVar10 = (float *)(ulonglong)((uint)param_1[2] & 0x7f800000),
     ((uint)param_1[2] & 0x7f800000) != 0x7f800000)) {
    local_f0 = local_d8;
    fVar16 = 0.0;
    iVar11 = 0;
    local_e8 = DAT_1803e9ad8;
    local_e4 = DAT_1803e9adc;
    local_128[0] = 90.0;
    local_e0 = 0.0;
    fVar13 = DAT_180381304;
    fVar14 = DAT_1803e9ad8;
    fVar15 = DAT_1803e9adc;
    local_f8 = param_1;
    do {
      fVar12 = (float)FUN_180073100(&local_f8,&local_e8);
      if (DAT_180380910 <= fVar12) {
        if (fVar12 < fVar13) {
          fVar13 = fVar12;
          fVar14 = local_e8;
          fVar15 = local_e4;
          fVar16 = local_e0;
        }
        if (fVar12 < DAT_180380974) goto LAB_180072feb;
      }
      cVar7 = FUN_180072860(&local_e8,local_114 + 3);
      if (cVar7 == '\0') goto LAB_180072feb;
      local_c0 = *param_1 - local_114[3];
      local_bc = param_1[1] - local_104;
      local_b8 = param_1[2] - local_100;
      if ((((((uint)local_c0 & 0x7f800000) == 0x7f800000) ||
           (((uint)local_bc & 0x7f800000) == 0x7f800000)) ||
          (((uint)local_b8 & 0x7f800000) == 0x7f800000)) ||
         (local_bc * local_bc + local_c0 * local_c0 + local_b8 * local_b8 <= DAT_180380938))
      goto LAB_180072feb;
      local_cc = 0;
      local_d0 = 0.0;
      FUN_1802d4540(&local_c0,&local_d0);
      if (((fVar3 <= local_d0) || (local_d0 <= fVar6)) ||
         ((fVar3 <= (float)local_cc || ((float)local_cc <= fVar6)))) goto LAB_180072feb;
      local_128[1] = -90.0;
      for (local_128[2] = local_d0 - local_e8; fVar1 < local_128[2];
          local_128[2] = local_128[2] + fVar5) {
      }
      for (; local_128[2] < fVar4; local_128[2] = local_128[2] + fVar2) {
      }
      local_11c = -90.0;
      local_118 = (float)local_cc - local_e4;
      pfVar10 = local_128 + 1;
      if (DAT_180381414 <= local_128[2]) {
        pfVar10 = local_128 + 2;
      }
      pfVar9 = local_128;
      if (local_128[2] <= DAT_18038110c) {
        pfVar9 = pfVar10;
      }
      for (; fVar1 < local_118; local_118 = local_118 + fVar5) {
      }
      for (; local_118 < fVar4; local_118 = local_118 + fVar2) {
      }
      local_114[1] = local_e8 + *pfVar9;
      local_114[2] = 89.0;
      local_114[0] = -89.0;
      pfVar10 = &local_11c;
      if (DAT_180381414 <= local_118) {
        pfVar10 = &local_118;
      }
      pfVar9 = local_128;
      if (local_118 <= DAT_18038110c) {
        pfVar9 = pfVar10;
      }
      for (; fVar1 < local_114[1]; local_114[1] = local_114[1] + fVar5) {
      }
      for (; local_114[1] < fVar4; local_114[1] = local_114[1] + fVar2) {
      }
      local_e4 = local_e4 + *pfVar9;
      pfVar10 = local_114;
      if (DAT_180381410 <= local_114[1]) {
        pfVar10 = local_114 + 1;
      }
      pfVar9 = local_114 + 2;
      if (local_114[1] <= DAT_180381108) {
        pfVar9 = pfVar10;
      }
      local_e8 = *pfVar9;
      for (; fVar1 < local_e4; local_e4 = local_e4 + fVar5) {
      }
      for (; local_e4 < fVar4; local_e4 = local_e4 + fVar2) {
      }
      iVar11 = iVar11 + 1;
      if (3 < iVar11) goto LAB_180072feb;
    } while( true );
  }
LAB_1800730bf:
  return (ulonglong)pfVar10 & 0xffffffffffffff00;
LAB_180072feb:
  pfVar10 = (float *)FUN_180073100(&local_f8,&local_e8);
  if ((DAT_180380910 <= extraout_XMM0_Da) && (extraout_XMM0_Da < fVar13)) {
    fVar13 = extraout_XMM0_Da;
    fVar14 = local_e8;
    fVar15 = local_e4;
    fVar16 = local_e0;
  }
  if ((((fVar13 < fVar3) && (fVar13 <= DAT_180380d30)) &&
      (pfVar10 = (float *)(ulonglong)((uint)fVar14 & 0x7f800000),
      ((uint)fVar14 & 0x7f800000) != 0x7f800000)) &&
     (pfVar10 = (float *)(ulonglong)((uint)fVar15 & 0x7f800000),
     ((uint)fVar15 & 0x7f800000) != 0x7f800000)) {
    uVar8 = (uint)fVar16 & 0x7f800000;
    pfVar10 = (float *)(ulonglong)uVar8;
    if (uVar8 != 0x7f800000) {
      DAT_1803e91f0 = fVar13;
      *param_2 = fVar14;
      param_2[1] = fVar15;
      param_2[2] = fVar16;
      return CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
    }
  }
  goto LAB_1800730bf;
}



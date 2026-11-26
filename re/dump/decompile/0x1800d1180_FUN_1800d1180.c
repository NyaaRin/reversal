// 0x1800d1180  FUN_1800d1180
// size=1394 thunk=false
// signature: undefined FUN_1800d1180()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d1180(float *param_1,undefined4 *param_2,float param_3,float param_4,float param_5,
                  byte param_6,byte param_7)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  float *pfVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  float *pfVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_248 [32];
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  uint local_1e8;
  uint local_1e0;
  uint local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined1 *local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  longlong local_198;
  float local_190 [2];
  undefined1 local_188 [192];
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  FUN_180014300(&local_198);
  if ((local_198 != DAT_180426178) && (local_198 < DAT_180426178)) {
    return;
  }
  DAT_180426178 = local_198 + 500000000;
  fVar18 = *param_1;
  fVar16 = (float)FUN_180022110(*param_2,fVar18);
  fVar20 = DAT_180381410;
  fVar4 = DAT_180381108;
  local_198 = CONCAT44(local_198._4_4_,0x42b20000);
  local_190[0] = -89.0;
  fVar17 = (float)FUN_180022110(param_2[1],param_1[1]);
  fVar19 = DAT_180380994;
  pfVar12 = local_190;
  if (fVar20 <= fVar18) {
    pfVar12 = param_1;
  }
  pfVar9 = (float *)&local_198;
  if (fVar18 <= fVar4) {
    pfVar9 = pfVar12;
  }
  fVar18 = cosf(*pfVar9 * DAT_180380994);
  fVar17 = fVar17 * fVar18;
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16;
  if (fVar18 < 0.0) {
    fVar18 = sqrtf(fVar18);
  }
  else {
    fVar18 = SQRT(fVar18);
  }
  fVar20 = DAT_180381384;
  if ((fVar18 < fVar4) && (0.0 < param_3)) {
    fVar19 = tanf(fVar18 * fVar19);
    fVar20 = fVar19 * param_3;
  }
  fVar19 = DAT_1803e907c;
  pcVar15 = "?";
  switch(DAT_1803e8a50) {
  case 3:
    pcVar15 = "stomach";
    break;
  case 5:
    pcVar15 = "chest";
    break;
  case 6:
    pcVar15 = "HEAD";
    break;
  case 9:
  case 0xd:
    pcVar15 = "arm";
    break;
  case 0x11:
  case 0x15:
    pcVar15 = "leg";
    break;
  case 0x17:
    pcVar15 = "center";
  }
  if (DAT_1803e907c < 0.0) {
    local_188[0] = 0;
    goto LAB_1800d14e4;
  }
  if ((DAT_180423988 == '\0') || (cVar8 = FUN_180071c60(), cVar8 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((DAT_180423985 == '\0') || (DAT_180423984 == '\0')) || (DAT_1803e9210 < 0.0)) ||
     (DAT_1803fa608 == (float *)0x0)) {
LAB_1800d1484:
    pcVar14 = "eye";
    if (bVar3) {
      pcVar14 = "muz";
    }
  }
  else {
    if (((double)*DAT_1803fa608 - DAT_1803e9210 < 0.0) ||
       (DAT_180380c90 < (double)*DAT_1803fa608 - DAT_1803e9210)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1800d1484;
    pcVar14 = "hgeye";
  }
  local_220 = (double)DAT_1803e9088;
  local_218 = (double)DAT_180423970;
  local_210 = (double)DAT_180423990;
  local_208 = (double)DAT_18040a404;
  local_228 = (double)fVar19;
  FUN_180012ac0(local_188,0xc0,
                " org=%s muzErr=%.3fdeg sentErr=%.3fdeg drift=%.1fu lead=%.1fu tgtLead=%.1fu",
                pcVar14);
LAB_1800d14e4:
  uVar7 = DAT_180423a24;
  uVar6 = DAT_18040a408;
  uVar5 = DAT_1803e8a50;
  uVar13 = (uint)DAT_1803db438;
  local_198 = -0x8ade0d76885cfcd;
  local_190[0] = -4.1217008e-32;
  local_190[1] = 4.8287784e-30;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_198);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1a8,local_190);
  puVar11 = (undefined4 *)FUN_1802029c0(*plVar10 + 0x28);
  local_198 = -0x8ade0d76885cfcd;
  uVar1 = *puVar11;
  local_190[0] = -189.9025;
  local_190[1] = 3.5775783;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_198);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1b8,local_190);
  puVar11 = (undefined4 *)FUN_1802029c0(*plVar10 + 0x28);
  local_1c0 = local_188;
  local_1c8 = uVar7;
  local_1d0 = uVar6;
  local_1e0 = (uint)param_7;
  local_1e8 = (uint)param_6;
  local_1f8 = (double)fVar18;
  local_1f0 = (double)fVar20;
  local_200 = (double)fVar17;
  local_208 = (double)fVar16;
  local_210 = (double)param_3;
  local_218 = (double)param_5;
  local_220 = (double)param_4;
  local_228 = (double)CONCAT44(local_228._4_4_,uVar5);
  local_1d8 = uVar13;
  FUN_180014410("[AIM] mode=%d hbmode=%d joint=%s(%d) smooth=%.0f k=%.3f dist=%.0f d=(%.2f,%.2f)=%.2fdeg miss=%.1fu onTarget=%d fires=%d autoshoot=%d tgt=%d solveTgt=%d%s\n"
                ,*puVar11,uVar1,pcVar15);
  return;
}



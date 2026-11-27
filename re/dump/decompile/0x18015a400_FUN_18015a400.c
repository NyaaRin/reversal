// 0x18015a400  FUN_18015a400
// size=2443 thunk=false
// signature: undefined FUN_18015a400()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015a400(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  BOOL BVar13;
  longlong *plVar14;
  longlong *plVar15;
  void **ppvVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  size_t sVar19;
  longlong lVar20;
  void *pvVar21;
  undefined1 *puVar22;
  uint uVar23;
  char *_Str;
  undefined1 *puVar24;
  int iVar25;
  char cVar26;
  float fVar27;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  float *local_1e8;
  float *local_1e0;
  void **local_1d8;
  undefined4 local_1c8;
  undefined1 local_1c4;
  float local_1c0;
  float local_1bc;
  int local_1b8;
  int local_1b4;
  float local_1b0;
  int local_1ac;
  int local_1a8;
  longlong *local_1a0;
  longlong local_198 [2];
  undefined1 local_188 [192];
  int local_c8 [2];
  void *local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  ulonglong local_40;
  
  lVar7 = DAT_1804099d8;
  if (param_2 == 0) {
    return;
  }
  puVar22 = auStack_208;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  cVar26 = '\0';
  iVar25 = 0;
  local_1c8 = 0;
  puVar24 = auStack_208;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (puVar24 = auStack_208, DAT_1803fa360 == (longlong *)0x0)) goto LAB_18015ad75;
  local_198[0] = DAT_1804099d8;
  if ((DAT_18042586c == '\0') && (DAT_18042586b == '\0')) {
    local_1c4 = 0;
    cVar9 = FUN_1801596b0();
    puVar24 = auStack_208;
    if (cVar9 == '\0') goto LAB_18015ad75;
  }
  else {
    local_1c4 = 1;
  }
  iVar10 = FUN_18006da40(param_2,"userid",0);
  puVar24 = auStack_208;
  if (iVar10 < 1) goto LAB_18015ad75;
  local_1a8 = iVar10;
  iVar11 = FUN_18006da40(param_2,"attacker",0);
  local_1b4 = FUN_18006da40(param_2,"health",0xffffffff);
  local_c8[0] = -1;
  local_1b0 = -NAN;
  local_c8[0] = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar10);
  if (0 < iVar11) {
    local_1b0 = (float)(**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar11);
  }
  puVar24 = auStack_208;
  if (0x80 < local_c8[0] - 1U) goto LAB_18015ad75;
  if (DAT_180409850 == '\0') {
    DAT_180409850 = '\x01';
    FUN_180014410("[KILLSAY] player_hurt DELIVERED -- watching for lethal hits\n");
  }
  if (DAT_1803fa608 == (float *)0x0) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = *DAT_1803fa608;
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_1bc = fVar27;
  uVar12 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar14 = (longlong *)(*pcVar1)(DAT_1803fa360,uVar12);
  local_1a0 = plVar14;
  if ((((plVar14 == (longlong *)0x0) || (BVar13 = IsBadReadPtr(plVar14,8), BVar13 != 0)) ||
      (BVar13 = IsBadReadPtr((void *)*plVar14,8), BVar13 != 0)) ||
     (plVar14 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14), plVar14 == (longlong *)0x0)) {
    local_1c0 = -NAN;
  }
  else {
    local_1c0 = (float)(**(code **)(*plVar14 + 0x48))(plVar14);
  }
  fVar8 = local_1c0;
  iVar10 = -1;
  local_1b8 = -1;
  plVar14 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_c8[0]);
  if (((plVar14 != (longlong *)0x0) && (BVar13 = IsBadReadPtr(plVar14,8), BVar13 == 0)) &&
     ((BVar13 = IsBadReadPtr((void *)*plVar14,8), BVar13 == 0 &&
      ((plVar15 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14), plVar15 != (longlong *)0x0 &&
       (cVar9 = (**(code **)(*plVar15 + 0x40))(plVar15), cVar9 == '\0')))))) {
    iVar10 = FUN_18001c680(plVar14);
    local_1b8 = iVar10;
    local_1ac = iVar10;
  }
  plVar14 = (longlong *)FUN_180216850(lVar7 + 0x30,local_198,local_c8);
  lVar2 = *plVar14;
  lVar20 = (longlong)local_c8[0];
  if (local_1b4 < 0) {
LAB_18015a733:
    iVar11 = iVar25;
    if (((-1 < iVar10) && (iVar10 < *(int *)(lVar2 + 0x28))) &&
       (iVar10 = *(int *)(lVar2 + 0x28) - iVar10, iVar10 < 0x186a1)) {
      iVar11 = iVar10;
    }
  }
  else {
    uVar23 = *(uint *)(&DAT_1803e7d00 + lVar20);
    if (((int)uVar23 < 0) ||
       (DAT_180380d30 <= fVar27 - *(float *)((longlong)&DAT_1803e7d00 + lVar20 * 8 + 4))) {
      if ((int)*(uint *)(lVar2 + 0x28) < 0) {
        *(int *)(&DAT_1803e7d00 + lVar20) = local_1b4;
        goto LAB_18015a733;
      }
      uVar23 = *(uint *)(lVar2 + 0x28) & 0xff;
    }
    iVar11 = uVar23 - local_1b4;
    if (iVar11 < -0x80) {
      iVar11 = iVar11 + 0x100;
    }
    else if (0x80 < iVar11) {
      iVar11 = iVar11 + -0x100;
    }
    *(int *)(&DAT_1803e7d00 + lVar20) = local_1b4;
    if (iVar11 < 1) goto LAB_18015a733;
  }
  *(float *)((longlong)&DAT_1803e7d00 + lVar20 * 8 + 4) = fVar27;
  local_1bc = -NAN;
  local_1c0 = -NAN;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = (void *)0x0;
  local_1d8 = &local_c0;
  local_1e0 = &local_1c0;
  local_1e8 = &local_1bc;
  FUN_180159dc0(lVar7,local_c8[0],fVar8,fVar27);
  fVar3 = local_1b0;
  if ((int)local_1b0 < 1) {
    fVar3 = local_1bc;
  }
  puVar24 = auStack_208;
  if (local_b0 == 0) {
    ppvVar16 = (void **)FUN_180159980(local_188 + 0x60,fVar3);
    puVar24 = auStack_208;
    if (&local_c0 != ppvVar16) {
      if (0xf < uStack_a8) {
        pvVar21 = local_c0;
        puVar22 = auStack_208;
        if ((0xfff < uStack_a8 + 1) &&
           (pvVar21 = *(void **)((longlong)local_c0 + -8), puVar22 = auStack_208,
           0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pvVar21)))) {
          pvVar21 = (void *)0x5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar22 = auStack_200;
        }
        *(undefined8 *)(puVar22 + -8) = 0x18015a860;
        free(pvVar21);
      }
      *(undefined8 *)(puVar22 + 0x158) = 0;
      *(undefined8 *)(puVar22 + 0x160) = 0xf;
      puVar22[0x148] = 0;
      uVar12 = *(undefined4 *)((longlong)ppvVar16 + 4);
      uVar4 = *(undefined4 *)(ppvVar16 + 1);
      uVar5 = *(undefined4 *)((longlong)ppvVar16 + 0xc);
      *(undefined4 *)(puVar22 + 0x148) = *(undefined4 *)ppvVar16;
      *(undefined4 *)(puVar22 + 0x14c) = uVar12;
      *(undefined4 *)(puVar22 + 0x150) = uVar4;
      *(undefined4 *)(puVar22 + 0x154) = uVar5;
      pvVar21 = ppvVar16[3];
      *(void **)(puVar22 + 0x158) = ppvVar16[2];
      *(void **)(puVar22 + 0x160) = pvVar21;
      ppvVar16[2] = (void *)0x0;
      ppvVar16[3] = (void *)0xf;
      *(undefined1 *)ppvVar16 = 0;
      puVar24 = puVar22;
    }
    *(undefined8 *)(puVar24 + -8) = 0x18015a8af;
    FUN_18020e450(puVar24 + 0xe0);
  }
  if (((int)fVar3 < 1) || (fVar3 != fVar8)) {
    cVar26 = (*(float *)(puVar24 + 0x140) != fVar8) + '\x01';
  }
  if ((int)fVar3 < 1) {
    *(undefined8 *)(puVar24 + 0xa0) = 0;
    *(undefined8 *)(puVar24 + 0xa8) = 0;
    *(undefined8 *)(puVar24 + 0xb0) = 0;
    *(undefined8 *)(puVar24 + 0xb8) = 0;
    *(undefined8 *)(puVar24 + -8) = 0x18015a973;
    FUN_18001d080(puVar24 + 0xa0,&DAT_18033e9cc,1);
    puVar17 = (undefined8 *)(puVar24 + 0xa0);
    uVar23 = 4;
LAB_18015a980:
    *(uint *)(puVar24 + 0x40) = uVar23;
    *(undefined8 *)(puVar24 + 0x90) = 0;
    *(undefined8 *)(puVar24 + 0x98) = 0;
    uVar6 = puVar17[1];
    *(undefined8 *)(puVar24 + 0x80) = *puVar17;
    *(undefined8 *)(puVar24 + 0x88) = uVar6;
    uVar6 = puVar17[3];
    *(undefined8 *)(puVar24 + 0x90) = puVar17[2];
    *(undefined8 *)(puVar24 + 0x98) = uVar6;
    puVar17[2] = 0;
    puVar17[3] = 0xf;
    *(undefined1 *)puVar17 = 0;
    puVar18 = (undefined4 *)(puVar24 + 0x80);
    uVar23 = uVar23 | 8;
  }
  else {
    if (fVar3 != fVar8) {
      *(undefined8 *)(puVar24 + -8) = 0x18015a936;
      puVar17 = (undefined8 *)FUN_180159c00(puVar24 + 0x100,fVar3,*(undefined8 *)(puVar24 + 0x68));
      uVar23 = 2;
      goto LAB_18015a980;
    }
    *(undefined8 *)(puVar24 + 0x188) = 0;
    *(undefined8 *)(puVar24 + 400) = 0;
    *(undefined8 *)(puVar24 + 0x198) = 0;
    *(undefined8 *)(puVar24 + 0x1a0) = 0;
    *(undefined8 *)(puVar24 + -8) = 0x18015a90f;
    FUN_18001d080(puVar24 + 0x188,&DAT_1803601d8,3);
    puVar18 = (undefined4 *)(puVar24 + 0x188);
    uVar23 = 1;
  }
  *(uint *)(puVar24 + 0x40) = uVar23;
  *(undefined8 *)(puVar24 + 0x1b8) = 0;
  *(undefined8 *)(puVar24 + 0x1c0) = 0;
  uVar12 = puVar18[1];
  uVar4 = puVar18[2];
  uVar5 = puVar18[3];
  *(undefined4 *)(puVar24 + 0x1a8) = *puVar18;
  *(undefined4 *)(puVar24 + 0x1ac) = uVar12;
  *(undefined4 *)(puVar24 + 0x1b0) = uVar4;
  *(undefined4 *)(puVar24 + 0x1b4) = uVar5;
  uVar12 = puVar18[5];
  uVar4 = puVar18[6];
  uVar5 = puVar18[7];
  *(undefined4 *)(puVar24 + 0x1b8) = puVar18[4];
  *(undefined4 *)(puVar24 + 0x1bc) = uVar12;
  *(undefined4 *)(puVar24 + 0x1c0) = uVar4;
  *(undefined4 *)(puVar24 + 0x1c4) = uVar5;
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  if ((uVar23 & 8) != 0) {
    uVar23 = uVar23 & 0xfffffff7;
    *(uint *)(puVar24 + 0x40) = uVar23;
    *(undefined8 *)(puVar24 + -8) = 0x18015aa18;
    FUN_18020e450(puVar24 + 0x80);
  }
  if ((uVar23 & 4) != 0) {
    uVar23 = uVar23 & 0xfffffffb;
    *(uint *)(puVar24 + 0x40) = uVar23;
    *(undefined8 *)(puVar24 + -8) = 0x18015aa32;
    FUN_18020e450(puVar24 + 0xa0);
  }
  if ((uVar23 & 2) != 0) {
    uVar23 = uVar23 & 0xfffffffd;
    *(uint *)(puVar24 + 0x40) = uVar23;
    *(undefined8 *)(puVar24 + -8) = 0x18015aa4c;
    FUN_18020e450(puVar24 + 0x100);
  }
  if ((uVar23 & 1) != 0) {
    uVar23 = uVar23 & 0xfffffffe;
    *(uint *)(puVar24 + 0x40) = uVar23;
    *(undefined8 *)(puVar24 + -8) = 0x18015aa66;
    FUN_18020e450(puVar24 + 0x188);
  }
  if (*(float *)(puVar24 + 0x140) == fVar8) {
    *(undefined8 *)(puVar24 + 0xc0) = 0;
    *(undefined8 *)(puVar24 + 200) = 0;
    *(undefined8 *)(puVar24 + 0xd0) = 0;
    *(undefined8 *)(puVar24 + 0xd8) = 0;
    *(undefined8 *)(puVar24 + -8) = 0x18015aaa7;
    FUN_18001d080(puVar24 + 0xc0,&DAT_1803601d8,3);
    puVar18 = (undefined4 *)(puVar24 + 0xc0);
    uVar23 = uVar23 | 0x10;
  }
  else {
    *(undefined8 *)(puVar24 + -8) = 0x18015aac6;
    puVar18 = (undefined4 *)
              FUN_180159c00(puVar24 + 0x120,*(float *)(puVar24 + 0x140),
                            *(undefined8 *)(puVar24 + 0x68));
    uVar23 = uVar23 | 0x20;
  }
  *(uint *)(puVar24 + 0x40) = uVar23;
  *(undefined8 *)(puVar24 + 0x178) = 0;
  *(undefined8 *)(puVar24 + 0x180) = 0;
  uVar12 = puVar18[1];
  uVar4 = puVar18[2];
  uVar5 = puVar18[3];
  *(undefined4 *)(puVar24 + 0x168) = *puVar18;
  *(undefined4 *)(puVar24 + 0x16c) = uVar12;
  *(undefined4 *)(puVar24 + 0x170) = uVar4;
  *(undefined4 *)(puVar24 + 0x174) = uVar5;
  uVar12 = puVar18[5];
  uVar4 = puVar18[6];
  uVar5 = puVar18[7];
  *(undefined4 *)(puVar24 + 0x178) = puVar18[4];
  *(undefined4 *)(puVar24 + 0x17c) = uVar12;
  *(undefined4 *)(puVar24 + 0x180) = uVar4;
  *(undefined4 *)(puVar24 + 0x184) = uVar5;
  *(undefined8 *)(puVar18 + 4) = 0;
  *(undefined8 *)(puVar18 + 6) = 0xf;
  *(undefined1 *)puVar18 = 0;
  if ((uVar23 & 0x20) != 0) {
    uVar23 = uVar23 & 0xffffffdf;
    *(uint *)(puVar24 + 0x40) = uVar23;
    *(undefined8 *)(puVar24 + -8) = 0x18015ab1d;
    FUN_18020e450(puVar24 + 0x120);
  }
  if ((uVar23 & 0x10) != 0) {
    *(uint *)(puVar24 + 0x40) = uVar23 & 0xffffffef;
    *(undefined8 *)(puVar24 + -8) = 0x18015ab37;
    FUN_18020e450(puVar24 + 0xc0);
  }
  if ((*(longlong *)(lVar2 + 0x70) == 0) && ((undefined1 *)(lVar2 + 0x60) != puVar24 + 0x168)) {
    puVar22 = puVar24 + 0x168;
    if (0xf < *(ulonglong *)(puVar24 + 0x180)) {
      puVar22 = *(undefined1 **)(puVar24 + 0x168);
    }
    *(undefined8 *)(puVar24 + -8) = 0x18015ab76;
    FUN_180212700((undefined1 *)(lVar2 + 0x60),puVar22,*(undefined8 *)(puVar24 + 0x178));
  }
  if (*(int *)(puVar24 + 0x48) < 0) {
    _Str = "";
  }
  else {
    switch(*(int *)(puVar24 + 0x48)) {
    case 0:
      _Str = "generic";
      break;
    case 1:
      _Str = "head";
      break;
    case 2:
      _Str = "chest";
      break;
    case 3:
      _Str = "stomach";
      break;
    case 4:
      _Str = "left arm";
      break;
    case 5:
      _Str = "right arm";
      break;
    case 6:
      _Str = "left leg";
      break;
    case 7:
      _Str = "right leg";
      break;
    default:
      _Str = "body";
      break;
    case 10:
      _Str = "gear";
    }
  }
  *(undefined8 *)(puVar24 + 0x188) = 0;
  *(undefined8 *)(puVar24 + 400) = 0;
  *(undefined8 *)(puVar24 + 0x198) = 0;
  *(undefined8 *)(puVar24 + 0x1a0) = 0;
  *(undefined8 *)(puVar24 + -8) = 0x18015ac1b;
  sVar19 = strlen(_Str);
  *(undefined8 *)(puVar24 + -8) = 0x18015ac2e;
  FUN_18001d080(puVar24 + 0x188,_Str,sVar19);
  iVar25 = *(int *)(puVar24 + 0x50);
  iVar10 = iVar25;
  if (iVar25 < 0) {
    iVar10 = 0;
    if (-1 < *(int *)(puVar24 + 0x54)) {
      iVar10 = *(int *)(puVar24 + 0x54);
    }
  }
  if (puVar24[0x44] != '\0') {
    puVar24[0x38] = 0;
    *(int *)(puVar24 + 0x30) = iVar10;
    *(undefined1 **)(puVar24 + 0x28) = puVar24 + 0x188;
    *(undefined1 **)(puVar24 + 0x20) = puVar24 + 0x148;
    *(undefined8 *)(puVar24 + -8) = 0x18015ac89;
    FUN_18006b200(cVar26,puVar24 + 0x1a8,puVar24 + 0x168,iVar11);
  }
  *(float *)(lVar2 + 0x30) = fVar27;
  if (0 < (int)fVar3) {
    *(float *)(lVar2 + 0x38) = fVar3;
  }
  if ((*(longlong *)(puVar24 + 0x158) != 0) && ((undefined1 *)(lVar2 + 0x40) != puVar24 + 0x148)) {
    puVar22 = puVar24 + 0x148;
    if (0xf < *(ulonglong *)(puVar24 + 0x160)) {
      puVar22 = *(undefined1 **)(puVar24 + 0x148);
    }
    *(undefined8 *)(puVar24 + -8) = 0x18015acd5;
    FUN_180212700((undefined1 *)(lVar2 + 0x40),puVar22);
  }
  if (((((*(int *)(puVar24 + 0x54) == 0) && (0 < (int)*(float *)(puVar24 + 0x58))) &&
       (*(float *)(puVar24 + 0x58) == fVar8)) && (*(float *)(puVar24 + 0x140) != fVar8)) &&
     ((iVar25 < 1 || (*(int *)(lVar2 + 0x28) < 0x100)))) {
    uVar12 = *(undefined4 *)(puVar24 + 0x140);
    if (DAT_180409840 == '\0') {
      DAT_180409840 = '\x01';
      *(undefined8 *)(puVar24 + -8) = 0x18015ad24;
      FUN_180014410(
                   "[KILLSAY] lethal player_hurt seen -- kills are exact now, the guessing poll is off for this map\n"
                   );
    }
    *(undefined8 *)(puVar24 + -8) = 0x18015ad3b;
    FUN_180142670(puVar24 + 0x168,*(undefined4 *)(puVar24 + 0x60),uVar12,1);
  }
  *(undefined8 *)(puVar24 + -8) = 0x18015ad49;
  FUN_18020e450(puVar24 + 0x188);
  *(undefined8 *)(puVar24 + -8) = 0x18015ad57;
  FUN_18020e450(puVar24 + 0x168);
  *(undefined8 *)(puVar24 + -8) = 0x18015ad65;
  FUN_18020e450(puVar24 + 0x1a8);
  *(undefined8 *)(puVar24 + -8) = 0x18015ad73;
  FUN_18020e450(puVar24 + 0x148);
LAB_18015ad75:
  *(undefined8 *)(puVar24 + -8) = 0x18015ad85;
  return;
}



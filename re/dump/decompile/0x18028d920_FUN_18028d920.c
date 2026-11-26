// 0x18028d920  FUN_18028d920
// size=3973 thunk=false
// signature: undefined FUN_18028d920()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018028de34) */
/* WARNING: Removing unreachable block (ram,0x00018028db1e) */
/* WARNING: Removing unreachable block (ram,0x00018028db39) */
/* WARNING: Removing unreachable block (ram,0x00018028db5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18028d920(longlong param_1,undefined4 param_2,longlong param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  short sVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int local_2e8;
  float local_2e4;
  float local_2e0;
  ulonglong local_2d8;
  float local_2c8;
  undefined1 local_2b8 [16];
  int local_2a8;
  float local_2a4;
  int local_2a0;
  float local_29c;
  int local_298;
  ulonglong local_288;
  undefined8 uStack_280;
  int iStack_27c;
  byte *local_278;
  undefined8 uStack_270;
  float local_268 [4];
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190 [8];
  undefined1 auStack_188 [16];
  undefined8 auStack_178 [40];
  
  iVar17 = 0;
  bVar2 = true;
  uVar18 = 0;
  bVar3 = true;
  local_298 = 0;
  local_2a8 = 0;
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_2a0 = 0;
  local_278 = *(byte **)(param_1 + 0x50);
  uStack_270 = *(undefined8 *)(param_1 + 0x58);
  pauVar12 = (undefined1 (*) [16])FUN_18028b790(&local_288,&local_278,param_2);
  local_2b8._0_8_ = SUB168(*pauVar12,0);
  local_2e8 = SUB164(*pauVar12,0xc);
  local_2b8._8_8_ = *(undefined8 *)(*pauVar12 + 8);
  local_2e0 = local_244;
  local_2e4 = local_240;
  local_2a4 = local_248;
  local_2c8 = local_24c;
  local_29c = local_250;
  uVar20 = local_2b8._0_8_;
  fVar24 = local_24c;
  fVar30 = local_250;
  fVar28 = local_248;
  fVar31 = local_268[0];
  fVar32 = local_268[2];
  fVar33 = local_268[1];
  fVar34 = local_268[3];
  fVar35 = local_258;
  fVar36 = local_254;
  iVar11 = *(int *)(*pauVar12 + 8);
  fVar26 = local_244;
  fVar23 = local_240;
  local_2d8 = local_2b8._0_8_;
  iVar19 = local_2e8;
LAB_18028da64:
  if ((int)local_2b8._12_4_ <= iVar11) {
    return 0;
  }
  iVar21 = iVar11 + 1;
  local_2b8._8_4_ = iVar21;
  bVar4 = *(byte *)((longlong)iVar11 + uVar20);
  iVar22 = 0;
  switch(bVar4) {
  case 1:
  case 3:
  case 0x12:
  case 0x17:
    local_2a8 = local_2a8 + (int)uVar18 / 2;
    uVar18 = 0;
    iVar11 = iVar21;
    iVar19 = local_2e8;
    goto LAB_18028da64;
  default:
    if (bVar4 == 0xff) {
      if (iVar21 < iVar19) {
        lVar14 = (longlong)iVar21;
        iVar21 = iVar11 + 2;
        local_2b8._8_4_ = iVar21;
        uVar6 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar6 = 0;
      }
      if (iVar21 < iVar19) {
        lVar14 = (longlong)iVar21;
        iVar21 = iVar21 + 1;
        local_2b8._8_4_ = iVar21;
        uVar7 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar7 = 0;
      }
      if (iVar21 < iVar19) {
        lVar14 = (longlong)iVar21;
        iVar21 = iVar21 + 1;
        local_2b8._8_4_ = iVar21;
        uVar8 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar8 = 0;
      }
      if (iVar21 < iVar19) {
        lVar14 = (longlong)iVar21;
        iVar21 = iVar21 + 1;
        local_2b8._8_4_ = iVar21;
        uVar9 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar9 = 0;
      }
      fVar24 = (float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9) * DAT_180380940;
    }
    else {
      if (((bVar4 & 0xe0) == 0) && (bVar4 != 0x1c)) {
        return 0;
      }
      if (iVar19 < iVar11) {
LAB_18028e746:
        local_2b8._8_4_ = iVar19;
      }
      else {
        local_2b8._8_4_ = iVar11;
        if (iVar11 < 0) goto LAB_18028e746;
      }
      sVar10 = FUN_18028b470(local_2b8);
      local_2e8 = local_2b8._12_4_;
      local_2d8 = local_2b8._0_8_;
      fVar24 = (float)(int)sVar10;
      uVar20 = local_2b8._0_8_;
      iVar21 = local_2b8._8_4_;
      iVar19 = local_2b8._12_4_;
    }
    if (0x2f < (int)uVar18) {
      return 0;
    }
    lVar14 = (longlong)(int)uVar18;
    uVar18 = uVar18 + 1;
    local_268[lVar14] = fVar24;
    local_2e4 = local_240;
    local_2e0 = local_244;
    local_2a4 = local_248;
    local_2c8 = local_24c;
    local_29c = local_250;
    fVar24 = local_24c;
    fVar30 = local_250;
    fVar28 = local_248;
    fVar31 = local_268[0];
    fVar32 = local_268[2];
    fVar33 = local_268[1];
    fVar34 = local_268[3];
    fVar35 = local_258;
    fVar36 = local_254;
    iVar11 = iVar21;
    fVar26 = local_244;
    fVar23 = local_240;
    goto LAB_18028da64;
  case 4:
    if ((int)uVar18 < 1) {
      return 0;
    }
    goto LAB_18028db77;
  case 5:
    if ((int)uVar18 < 2) {
      return 0;
    }
    do {
      fVar26 = (float)FUN_18028d6c0(param_3);
      iVar11 = iVar22 + 3;
      uVar20 = local_2d8;
      fVar23 = local_2e4;
      iVar19 = local_2e8;
      iVar22 = iVar22 + 2;
    } while (iVar11 < (int)uVar18);
    break;
  case 6:
    if ((int)uVar18 < 1) {
      return 0;
    }
    do {
      fVar26 = (float)FUN_18028d6c0(param_3);
      iVar22 = iVar22 + 1;
LAB_18028dc6b:
      uVar20 = local_2d8;
      fVar23 = local_2e4;
      iVar19 = local_2e8;
      if ((int)uVar18 <= iVar22) break;
      fVar26 = (float)FUN_18028d6c0(param_3);
      iVar22 = iVar22 + 1;
    } while (iVar22 < (int)uVar18);
    break;
  case 7:
    if (0 < (int)uVar18) goto LAB_18028dc6b;
    return 0;
  case 8:
    if ((int)uVar18 < 6) {
      return 0;
    }
    do {
      fVar27 = local_268[iVar22] + *(float *)(param_3 + 0x10);
      fVar26 = local_268[(longlong)iVar22 + 1] + *(float *)(param_3 + 0x14);
      fVar29 = fVar27 + local_268[(longlong)iVar22 + 2];
      iVar11 = (int)fVar26;
      fVar25 = fVar29 + local_268[(longlong)iVar22 + 4];
      fVar26 = fVar26 + local_268[(longlong)iVar22 + 3];
      *(float *)(param_3 + 0x10) = fVar25;
      fVar23 = fVar26 + local_268[(longlong)iVar22 + 5];
      *(float *)(param_3 + 0x14) = fVar23;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar25,(int)fVar23,
                    (int)fVar27,iVar11,(int)fVar29,(int)fVar26);
      iVar11 = iVar22 + 0xb;
      uVar20 = local_2d8;
      fVar26 = local_2e0;
      fVar23 = local_2e4;
      iVar19 = local_2e8;
      iVar22 = iVar22 + 6;
    } while (iVar11 < (int)uVar18);
    break;
  case 10:
    if (local_298 == 0) {
      if (*(int *)(param_1 + 0x9c) != 0) {
        puVar13 = (undefined8 *)FUN_18028d760(local_190,param_1);
        local_1a0 = *puVar13;
        uStack_198 = puVar13[1];
        fVar23 = local_2e4;
      }
      local_298 = 1;
    }
    goto LAB_18028e1b0;
  case 0xb:
    if (iVar17 < 1) {
      return 0;
    }
    lVar14 = (longlong)iVar17;
    iVar17 = iVar17 + -1;
    local_2b8 = *(undefined1 (*) [16])(auStack_188 + lVar14 * 0x10);
    local_2e8 = local_2b8._12_4_;
    uVar20 = local_2b8._0_8_;
    iVar11 = local_2b8._8_4_;
    fVar26 = local_2e0;
    fVar23 = local_2e4;
    local_2d8 = uVar20;
    local_2a0 = iVar17;
    iVar19 = local_2e8;
    goto LAB_18028da64;
  case 0xc:
    if (iVar21 < (int)local_2b8._12_4_) {
      lVar14 = (longlong)iVar21;
      iVar21 = iVar11 + 2;
      local_2b8._8_4_ = iVar21;
      cVar5 = *(char *)(lVar14 + uVar20);
    }
    else {
      cVar5 = '\0';
    }
    if (cVar5 == '\"') {
      if ((int)uVar18 < 7) {
        return 0;
      }
      fVar23 = *(float *)(param_3 + 0x14) + 0.0;
      fVar29 = fVar31 + *(float *)(param_3 + 0x10);
      iVar11 = (int)fVar23;
      fVar25 = fVar33 + fVar29;
      fVar23 = fVar23 + fVar32;
      fVar30 = fVar23 + 0.0;
      fVar26 = fVar25 + fVar34;
      *(float *)(param_3 + 0x10) = fVar26;
      *(float *)(param_3 + 0x14) = fVar30;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar26,(int)fVar30,
                    (int)fVar29,iVar11,(int)fVar25,(int)fVar23);
      fVar26 = fVar35 + *(float *)(param_3 + 0x10);
      fVar29 = *(float *)(param_3 + 0x14) + 0.0;
      fVar30 = fVar26 + fVar36;
      fVar27 = fVar29 - fVar32;
      fVar25 = fVar30 + local_29c;
      fVar23 = fVar27 + 0.0;
    }
    else if (cVar5 == '#') {
      if ((int)uVar18 < 0xd) {
        return 0;
      }
      fVar26 = fVar33 + *(float *)(param_3 + 0x14);
      fVar27 = fVar31 + *(float *)(param_3 + 0x10);
      iVar11 = (int)fVar26;
      fVar29 = fVar32 + fVar27;
      fVar26 = fVar26 + fVar34;
      fVar23 = fVar26 + fVar36;
      fVar25 = fVar29 + fVar35;
      *(float *)(param_3 + 0x10) = fVar25;
      *(float *)(param_3 + 0x14) = fVar23;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar25,(int)fVar23,
                    (int)fVar27,iVar11,(int)fVar29,(int)fVar26);
      fVar26 = fVar30 + *(float *)(param_3 + 0x10);
      fVar29 = fVar24 + *(float *)(param_3 + 0x14);
      fVar30 = fVar28 + fVar26;
      fVar27 = local_2e0 + fVar29;
      fVar25 = local_2e4 + fVar30;
      fVar23 = local_23c + fVar27;
    }
    else if (cVar5 == '$') {
      if ((int)uVar18 < 9) {
        return 0;
      }
      fVar26 = fVar33 + *(float *)(param_3 + 0x14);
      fVar27 = fVar31 + *(float *)(param_3 + 0x10);
      iVar11 = (int)fVar26;
      fVar29 = fVar32 + fVar27;
      fVar26 = fVar26 + fVar34;
      fVar25 = fVar35 + fVar29;
      fVar23 = fVar26 + 0.0;
      *(float *)(param_3 + 0x10) = fVar25;
      *(float *)(param_3 + 0x14) = fVar23;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar25,(int)fVar23,
                    (int)fVar27,iVar11,(int)fVar29,(int)fVar26);
      fVar26 = fVar36 + *(float *)(param_3 + 0x10);
      fVar29 = *(float *)(param_3 + 0x14) + 0.0;
      fVar30 = fVar26 + fVar30;
      fVar27 = fVar29 + fVar24;
      fVar25 = fVar28 + fVar30;
      fVar23 = fVar27 - (fVar33 + fVar34 + fVar24);
    }
    else {
      if (cVar5 != '%') {
        return 0;
      }
      if ((int)uVar18 < 0xb) {
        return 0;
      }
      fVar25 = fVar32 + fVar31 + fVar35 + fVar30 + local_2a4;
      fVar26 = fVar33 + fVar34 + fVar36 + local_2c8 + fVar26;
      if ((float)((uint)fVar25 & _DAT_1803817c0) <= (float)((uint)fVar26 & _DAT_1803817c0)) {
        fVar25 = (float)((uint)fVar25 ^ DAT_1803817f0);
      }
      else {
        fVar25 = fVar23;
        fVar23 = (float)((uint)fVar26 ^ DAT_1803817f0);
      }
      fVar27 = fVar31 + *(float *)(param_3 + 0x10);
      fVar28 = fVar33 + *(float *)(param_3 + 0x14);
      iVar11 = (int)fVar28;
      fVar29 = fVar27 + fVar32;
      fVar28 = fVar28 + fVar34;
      fVar26 = fVar29 + fVar35;
      fVar24 = fVar28 + fVar36;
      *(float *)(param_3 + 0x10) = fVar26;
      *(float *)(param_3 + 0x14) = fVar24;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar26,(int)fVar24,
                    (int)fVar27,iVar11,(int)fVar29,(int)fVar28);
      fVar26 = fVar30 + *(float *)(param_3 + 0x10);
      fVar29 = local_2c8 + *(float *)(param_3 + 0x14);
      fVar30 = fVar26 + local_2a4;
      fVar27 = fVar29 + local_2e0;
      fVar25 = fVar30 + fVar25;
      fVar23 = fVar27 + fVar23;
      fVar24 = local_2c8;
      fVar28 = local_2a4;
    }
    *(float *)(param_3 + 0x10) = fVar25;
    *(float *)(param_3 + 0x14) = fVar23;
    FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)(int)fVar29 >> 8),4),(int)fVar25,(int)fVar23
                  ,(int)fVar26,(int)fVar29,(int)fVar30,(int)fVar27);
    uVar20 = local_2d8;
    fVar30 = local_29c;
    fVar26 = local_2e0;
    fVar23 = local_2e4;
    iVar19 = local_2e8;
    break;
  case 0xe:
    FUN_18028d540(param_3);
    return 1;
  case 0x13:
  case 0x14:
    goto switchD_18028dad3_caseD_13;
  case 0x15:
    if ((int)uVar18 < 2) {
      return 0;
    }
LAB_18028db77:
    bVar3 = false;
    FUN_18028d5f0(param_3,iVar19,
                  *(undefined4 *)((longlong)&uStack_270 + (longlong)(int)uVar18 * 4 + 4));
    uVar20 = local_2d8;
    fVar26 = local_2e0;
    fVar23 = local_2e4;
    iVar19 = local_2e8;
    bVar2 = false;
    break;
  case 0x16:
    if ((int)uVar18 < 1) {
      return 0;
    }
    bVar3 = false;
    FUN_18028d5f0(param_3,iVar19,0);
    uVar20 = local_2d8;
    fVar26 = local_2e0;
    fVar23 = local_2e4;
    iVar19 = local_2e8;
    bVar2 = false;
    break;
  case 0x18:
    if ((int)uVar18 < 8) {
      return 0;
    }
    if (5 < (int)(uVar18 - 2)) {
      do {
        iVar19 = iVar22;
        fVar27 = local_268[iVar19] + *(float *)(param_3 + 0x10);
        fVar26 = local_268[(longlong)iVar19 + 1] + *(float *)(param_3 + 0x14);
        fVar29 = fVar27 + local_268[(longlong)iVar19 + 2];
        iVar11 = (int)fVar26;
        fVar25 = fVar29 + local_268[(longlong)iVar19 + 4];
        fVar26 = fVar26 + local_268[(longlong)iVar19 + 3];
        *(float *)(param_3 + 0x10) = fVar25;
        fVar23 = fVar26 + local_268[(longlong)iVar19 + 5];
        *(float *)(param_3 + 0x14) = fVar23;
        FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar25,(int)fVar23,
                      (int)fVar27,iVar11,(int)fVar29,(int)fVar26);
        iVar22 = iVar19 + 6;
      } while (iVar19 + 0xb < (int)(uVar18 - 2));
      if ((int)uVar18 <= iVar19 + 7) {
        return 0;
      }
    }
    fVar26 = (float)FUN_18028d6c0(param_3);
    uVar20 = local_2d8;
    fVar23 = local_2e4;
    iVar19 = local_2e8;
    break;
  case 0x19:
    if ((int)uVar18 < 8) {
      return 0;
    }
    uVar20 = (ulonglong)(uVar18 - 6);
    if (1 < (int)(uVar18 - 6)) {
      do {
        iVar11 = iVar22;
        FUN_18028d6c0(param_3);
        iVar22 = iVar11 + 2;
      } while (iVar11 + 3 < (int)uVar20);
      if ((int)uVar18 <= iVar11 + 7) {
        return 0;
      }
    }
    lVar14 = (longlong)iVar22;
    fVar27 = local_268[lVar14] + *(float *)(param_3 + 0x10);
    fVar26 = local_268[lVar14 + 1] + *(float *)(param_3 + 0x14);
    fVar29 = fVar27 + local_268[lVar14 + 2];
    iVar11 = (int)fVar26;
    fVar25 = fVar29 + local_268[lVar14 + 4];
    fVar26 = fVar26 + local_268[lVar14 + 3];
    *(float *)(param_3 + 0x10) = fVar25;
    fVar23 = fVar26 + local_268[lVar14 + 5];
    *(float *)(param_3 + 0x14) = fVar23;
    FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),4),(int)fVar25,(int)fVar23,
                  (int)fVar27,iVar11,(int)fVar29,(int)fVar26);
    uVar20 = local_2d8;
    fVar26 = local_2e0;
    fVar23 = local_2e4;
    iVar19 = local_2e8;
    break;
  case 0x1a:
  case 0x1b:
    if ((int)uVar18 < 4) {
      return 0;
    }
    uVar16 = uVar18 & 1;
    if (uVar16 == 0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = fVar31;
      if ((int)uVar18 <= (int)(uVar16 + 3)) break;
    }
    do {
      if (bVar4 == 0x1b) {
        fVar26 = *(float *)(param_3 + 0x10) + local_268[(int)uVar16];
        fVar29 = *(float *)(param_3 + 0x14) + fVar25;
        fVar25 = local_268[(longlong)(int)uVar16 + 1] + fVar26;
        fVar27 = local_268[(longlong)(int)uVar16 + 2] + fVar29;
        fVar24 = local_268[(longlong)(int)uVar16 + 3] + fVar25;
        fVar23 = fVar27 + 0.0;
      }
      else {
        fVar29 = *(float *)(param_3 + 0x14) + local_268[(int)uVar16];
        fVar26 = *(float *)(param_3 + 0x10) + fVar25;
        fVar27 = local_268[(longlong)(int)uVar16 + 2] + fVar29;
        fVar25 = local_268[(longlong)(int)uVar16 + 1] + fVar26;
        fVar23 = local_268[(longlong)(int)uVar16 + 3] + fVar27;
        fVar24 = fVar25 + 0.0;
      }
      *(float *)(param_3 + 0x10) = fVar24;
      *(float *)(param_3 + 0x14) = fVar23;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)(int)fVar29 >> 8),4),(int)fVar24,
                    (int)fVar23,(int)fVar26,(int)fVar29,(int)fVar25,(int)fVar27);
      iVar11 = uVar16 + 7;
      uVar20 = local_2d8;
      fVar25 = 0.0;
      fVar24 = local_2c8;
      fVar26 = local_2e0;
      fVar23 = local_2e4;
      iVar19 = local_2e8;
      uVar16 = uVar16 + 4;
    } while (iVar11 < (int)uVar18);
    break;
  case 0x1d:
LAB_18028e1b0:
    if ((int)uVar18 < 1) {
      return 0;
    }
    if (9 < iVar17) {
      return 0;
    }
    puVar13 = &local_1a0;
    auStack_178[(longlong)iVar17 * 2] = local_2b8._0_8_;
    auStack_178[(longlong)iVar17 * 2 + 1] = local_2b8._8_8_;
    if (bVar4 != 10) {
      puVar13 = (undefined8 *)(param_1 + 0x60);
    }
    pbVar1 = (byte *)*puVar13;
    iVar11 = *(int *)((longlong)puVar13 + 0xc);
    iVar19 = iVar11;
    if ((iVar11 < 0) || (iVar19 = 0, iVar11 < 1)) {
      uVar16 = 0;
LAB_18028e223:
      uVar15 = uVar16;
      bVar4 = 0;
    }
    else {
      uVar15 = (uint)*pbVar1;
      iVar19 = 1;
      uVar16 = (uint)*pbVar1;
      if (iVar11 < 2) goto LAB_18028e223;
      bVar4 = pbVar1[1];
      iVar19 = 2;
    }
    uVar16 = uVar15 << 8 | (uint)bVar4;
    if (uVar16 < 0x846c) {
      iVar21 = 0x46b;
      if (uVar16 < 0x4d8) {
        iVar21 = 0x6b;
      }
    }
    else {
      iVar21 = 0x8000;
    }
    iVar21 = (int)*(float *)((longlong)&uStack_270 + (longlong)(int)uVar18 * 4 + 4) + iVar21;
    if ((iVar21 < 0) || ((int)uVar16 <= iVar21)) {
      local_288 = 0;
      uStack_280 = 0;
    }
    else {
      uStack_270 = CONCAT44(iVar11,iVar19);
      local_278 = pbVar1;
      FUN_18028b790(&local_288,&local_278,iVar21);
    }
    if (iStack_27c == 0) {
      return 0;
    }
    uVar18 = uVar18 - 1;
    iVar17 = iVar17 + 1;
    local_2b8._8_4_ = 0;
    local_2b8._0_8_ = local_288;
    local_2b8._12_4_ = iStack_27c;
    local_2e8 = iStack_27c;
    local_2d8 = local_288;
    uVar20 = local_288;
    iVar11 = 0;
    fVar26 = local_2e0;
    local_2a0 = iVar17;
    iVar19 = iStack_27c;
    goto LAB_18028da64;
  case 0x1e:
    if ((int)uVar18 < 4) {
      return 0;
    }
    do {
      if (uVar18 - iVar22 == 5) {
        fVar24 = local_268[iVar22 + 4];
      }
      else {
        fVar24 = 0.0;
      }
      fVar29 = *(float *)(param_3 + 0x10) + 0.0;
      fVar23 = local_268[iVar22] + *(float *)(param_3 + 0x14);
      fVar25 = fVar29 + local_268[(longlong)iVar22 + 1];
      iVar17 = (int)fVar23;
      fVar26 = fVar25 + local_268[(longlong)iVar22 + 3];
      fVar23 = fVar23 + local_268[(longlong)iVar22 + 2];
      *(float *)(param_3 + 0x10) = fVar26;
      fVar24 = fVar23 + fVar24;
      *(float *)(param_3 + 0x14) = fVar24;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar17 >> 8),4),(int)fVar26,(int)fVar24,
                    (int)fVar29,iVar17,(int)fVar25,(int)fVar23);
      iVar11 = iVar22 + 4;
LAB_18028dd54:
      uVar20 = local_2d8;
      fVar24 = local_2c8;
      iVar17 = local_2a0;
      fVar26 = local_2e0;
      fVar23 = local_2e4;
      iVar19 = local_2e8;
      bVar2 = bVar3;
      if ((int)uVar18 <= iVar11 + 3) break;
      iVar22 = iVar11 + 4;
      if (uVar18 - iVar11 == 5) {
        fVar24 = local_268[iVar22];
      }
      else {
        fVar24 = 0.0;
      }
      fVar29 = local_268[iVar11] + *(float *)(param_3 + 0x10);
      fVar26 = *(float *)(param_3 + 0x14) + 0.0;
      fVar25 = fVar29 + local_268[(longlong)iVar11 + 1];
      iVar17 = (int)fVar26;
      fVar26 = fVar26 + local_268[(longlong)iVar11 + 2];
      fVar24 = fVar25 + fVar24;
      *(float *)(param_3 + 0x10) = fVar24;
      fVar23 = fVar26 + local_268[(longlong)iVar11 + 3];
      *(float *)(param_3 + 0x14) = fVar23;
      FUN_18028d410(param_3,CONCAT71((uint7)(uint3)((uint)iVar17 >> 8),4),(int)fVar24,(int)fVar23,
                    (int)fVar29,iVar17,(int)fVar25,(int)fVar26);
      fVar24 = local_2c8;
      iVar17 = local_2a0;
      fVar26 = local_2e0;
      fVar23 = local_2e4;
    } while (iVar11 + 7 < (int)uVar18);
    break;
  case 0x1f:
    iVar11 = iVar22;
    if (3 < (int)uVar18) goto LAB_18028dd54;
    return 0;
  }
  uVar18 = 0;
  iVar11 = iVar21;
  goto LAB_18028da64;
switchD_18028dad3_caseD_13:
  if (bVar2) {
    local_2a8 = local_2a8 + (int)uVar18 / 2;
    iVar19 = local_2e8;
  }
  bVar2 = false;
  iVar11 = local_2a8 + 7;
  bVar3 = false;
  if (iVar11 < 0) {
    iVar11 = local_2a8 + 0xe;
  }
  local_2b8._8_4_ = iVar21 + (iVar11 >> 3);
  if ((iVar19 < (int)local_2b8._8_4_) || ((int)local_2b8._8_4_ < 0)) {
    local_2b8._8_4_ = iVar19;
    uVar18 = 0;
    iVar11 = iVar19;
  }
  else {
    uVar18 = 0;
    iVar11 = local_2b8._8_4_;
  }
  goto LAB_18028da64;
}



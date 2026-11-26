// 0x1800b9590  FUN_1800b9590
// size=1883 thunk=false
// signature: undefined FUN_1800b9590()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b9590(int param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  
  uVar35 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar34 = (float)param_2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  if (0x7f < param_1 - 1U) {
    return;
  }
  lVar6 = (longlong)param_1;
  lVar9 = lVar6 * 0x168;
  if (DAT_1803fa608 == 0) {
    fVar31 = 0.0;
  }
  else {
    fVar31 = (float)*(double *)(DAT_1803fa608 + 0x10);
  }
  if ((&DAT_180561158)[lVar9] != '\0') {
    fVar34 = *(float *)((longlong)&DAT_180561150 + lVar9 + 4);
    uVar35 = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  if (((&DAT_18056110c)[lVar9] != '\0') && (fVar31 < *(float *)(&DAT_180561110 + lVar6 * 0x2d))) {
    auVar15._4_4_ = uVar35;
    auVar15._0_4_ = fVar34;
    auVar15._8_4_ = in_XMM1_Dc;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = fVar34 + *(float *)((longlong)&DAT_180561104 + lVar9 + 4);
    uVar11 = FUN_1802d3e00(auVar16._0_8_);
    *(undefined4 *)param_3 = uVar11;
    *(undefined1 *)(param_3 + 0xb) = 1;
    *(undefined1 *)((longlong)param_3 + 0x6e) = 1;
  }
  if (((&DAT_180561210)[lVar9] != '\0') && (*(char *)(&DAT_180561228 + lVar6 * 0xb4) == '\0')) {
    fVar31 = *(float *)((longlong)&DAT_1805611c8 + lVar9 + 4);
    lVar8 = 0;
    fVar32 = DAT_18038144c;
    fVar33 = DAT_1803812fc;
    do {
      fVar12 = (float)FUN_1800b1d70(*(float *)(lVar9 + 0x1805611cc + lVar8 * 0xc) - fVar31);
      lVar8 = lVar8 + 1;
      fVar1 = fVar12;
      if (fVar33 <= fVar12) {
        fVar1 = fVar33;
      }
      fVar33 = fVar1;
      if (fVar12 <= fVar32) {
        fVar12 = fVar32;
      }
      fVar32 = fVar12;
    } while (lVar8 != 6);
    if (DAT_180380d30 < fVar32 - fVar33) {
      uVar11 = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 8) = uVar11;
      *(undefined1 *)(param_3 + 0xd) = 1;
      *(undefined1 *)((longlong)param_3 + 0x7e) = 1;
      uVar11 = FUN_1802d3e00();
      *(undefined4 *)((longlong)param_3 + 0x44) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x69) = 1;
      *(undefined1 *)((longlong)param_3 + 0x7f) = 1;
      uVar11 = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 9) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x6a) = 1;
      *(undefined1 *)(param_3 + 0x10) = 1;
      uVar11 = FUN_1802d3e00();
      *(undefined4 *)((longlong)param_3 + 0x4c) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x6b) = 1;
      *(undefined1 *)((longlong)param_3 + 0x81) = 1;
      uVar11 = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 10) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x6c) = 1;
      *(undefined1 *)((longlong)param_3 + 0x82) = 1;
      if (*(char *)((longlong)&DAT_180561228 + lVar9 + 1) != '\0') {
        uVar11 = FUN_1802d3e00();
        *(undefined4 *)((longlong)param_3 + 0x54) = uVar11;
        *(undefined1 *)((longlong)param_3 + 0x6d) = 1;
        *(undefined1 *)((longlong)param_3 + 0x83) = 1;
      }
    }
  }
  cVar5 = FUN_1800b8320();
  uVar4 = _DAT_1803817c0;
  fVar33 = DAT_180381188;
  fVar32 = DAT_180381094;
  fVar31 = DAT_180380fcc;
  if (cVar5 != '\0') {
    if ((&DAT_1805611ac)[lVar9] != '\0') {
      uVar11 = FUN_1802d3e00();
      *(undefined4 *)((longlong)param_3 + 4) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x59) = 1;
      *(undefined1 *)((longlong)param_3 + 0x6f) = 1;
      uVar11 = FUN_1802d3e00((float)(&DAT_1805611a8)[lVar6 * 0x5a] + fVar33);
      *(undefined4 *)(param_3 + 1) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x5a) = 1;
      *(undefined1 *)(param_3 + 0xe) = 1;
    }
    cVar5 = FUN_1800b86f0();
    if (cVar5 == '\0') {
      if ((&DAT_18056119c)[lVar9] != '\0') {
        if ((&DAT_180561194)[lVar9] == '\0') goto LAB_1800b9a03;
        uVar13 = FUN_180022110();
        if (fVar31 < (float)(uVar13 & uVar4)) {
          uVar11 = FUN_1802d3e00();
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar11;
          *(undefined1 *)((longlong)param_3 + 0x5b) = 1;
          *(undefined1 *)((longlong)param_3 + 0x71) = 1;
        }
      }
      if ((&DAT_180561194)[lVar9] != '\0') {
        if ((&DAT_1805611a4)[lVar9] != '\0') {
          fVar12 = DAT_180381404;
          if (0.0 < (float)(&DAT_1805611a0)[lVar6 * 0x5a]) {
            fVar12 = fVar32;
          }
          uVar11 = FUN_1802d3e00(*(float *)((longlong)&DAT_18056118c + lVar9 + 4) - fVar12);
          *(undefined4 *)(param_3 + 2) = uVar11;
          *(undefined1 *)((longlong)param_3 + 0x5c) = 1;
          *(undefined1 *)((longlong)param_3 + 0x72) = 1;
        }
        if (((&DAT_180561194)[lVar9] != '\0') &&
           (uVar13 = FUN_180022110(), fVar31 < (float)(uVar13 & uVar4))) {
          uVar11 = FUN_1802d3e00();
          *(undefined4 *)((longlong)param_3 + 0x14) = uVar11;
          *(undefined1 *)((longlong)param_3 + 0x5d) = 1;
          *(undefined1 *)((longlong)param_3 + 0x73) = 1;
        }
      }
    }
  }
LAB_1800b9a03:
  uVar11 = FUN_1802d3e00();
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar11;
  *(undefined1 *)((longlong)param_3 + 0x5f) = 1;
  *(undefined1 *)((longlong)param_3 + 0x75) = 1;
  fVar1 = DAT_18038110c;
  fVar12 = (float)(&DAT_18056115c)[lVar6 * 0x5a];
  if ((float)(&DAT_18056115c)[lVar6 * 0x5a] <= 0.0) {
    fVar12 = fVar32;
  }
  fVar14 = DAT_180381024;
  if (DAT_180381024 <= fVar12) {
    fVar14 = fVar12;
  }
  fVar12 = DAT_18038110c;
  if (fVar14 <= DAT_18038110c) {
    fVar12 = fVar14;
  }
  uVar11 = FUN_1802d3e00(fVar12 + fVar34);
  *(undefined4 *)(param_3 + 4) = uVar11;
  auVar17._4_4_ = uVar35;
  auVar17._0_4_ = fVar34;
  auVar17._8_4_ = in_XMM1_Dc;
  auVar17._12_4_ = in_XMM1_Dd;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar34 - fVar12;
  *(undefined1 *)(param_3 + 0xc) = 1;
  *(undefined1 *)((longlong)param_3 + 0x76) = 1;
  uVar11 = FUN_1802d3e00(auVar18._0_8_);
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar11;
  auVar19._4_4_ = uVar35;
  auVar19._0_4_ = fVar34;
  auVar19._8_4_ = in_XMM1_Dc;
  auVar19._12_4_ = in_XMM1_Dd;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = fVar34 + fVar33;
  *(undefined1 *)((longlong)param_3 + 0x61) = 1;
  *(undefined1 *)((longlong)param_3 + 0x77) = 1;
  uVar11 = FUN_1802d3e00(auVar20._0_8_);
  *(undefined4 *)(param_3 + 3) = uVar11;
  auVar21._4_4_ = uVar35;
  auVar21._0_4_ = fVar34;
  auVar21._8_4_ = in_XMM1_Dc;
  auVar21._12_4_ = in_XMM1_Dd;
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = fVar34 + fVar32;
  *(undefined1 *)((longlong)param_3 + 0x5e) = 1;
  *(undefined1 *)((longlong)param_3 + 0x74) = 1;
  uVar11 = FUN_1802d3e00(auVar22._0_8_);
  *(undefined4 *)(param_3 + 5) = uVar11;
  auVar23._4_4_ = uVar35;
  auVar23._0_4_ = fVar34;
  auVar23._8_4_ = in_XMM1_Dc;
  auVar23._12_4_ = in_XMM1_Dd;
  auVar24._4_12_ = auVar23._4_12_;
  auVar24._0_4_ = fVar34 - fVar32;
  *(undefined1 *)((longlong)param_3 + 0x62) = 1;
  *(undefined1 *)(param_3 + 0xf) = 1;
  uVar11 = FUN_1802d3e00(auVar24._0_8_);
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar11;
  auVar25._4_4_ = uVar35;
  auVar25._0_4_ = fVar34;
  auVar25._8_4_ = in_XMM1_Dc;
  auVar25._12_4_ = in_XMM1_Dd;
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = fVar34 + fVar1;
  *(undefined1 *)((longlong)param_3 + 99) = 1;
  *(undefined1 *)((longlong)param_3 + 0x79) = 1;
  uVar11 = FUN_1802d3e00(auVar26._0_8_);
  *(undefined4 *)(param_3 + 6) = uVar11;
  auVar27._4_4_ = uVar35;
  auVar27._0_4_ = fVar34;
  auVar27._8_4_ = in_XMM1_Dc;
  auVar27._12_4_ = in_XMM1_Dd;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = fVar34 - fVar1;
  *(undefined1 *)((longlong)param_3 + 100) = 1;
  *(undefined1 *)((longlong)param_3 + 0x7a) = 1;
  uVar11 = FUN_1802d3e00(auVar28._0_8_);
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar11;
  auVar29._4_4_ = uVar35;
  auVar29._0_4_ = fVar34;
  auVar29._8_4_ = in_XMM1_Dc;
  auVar29._12_4_ = in_XMM1_Dd;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = fVar34 + _DAT_180381150;
  *(undefined1 *)((longlong)param_3 + 0x65) = 1;
  *(undefined1 *)((longlong)param_3 + 0x7b) = 1;
  uVar35 = FUN_1802d3e00(auVar30._0_8_);
  *(undefined4 *)(param_3 + 7) = uVar35;
  *(undefined1 *)((longlong)param_3 + 0x66) = 1;
  *(undefined1 *)((longlong)param_3 + 0x7c) = 1;
  uVar35 = FUN_1802d3e00();
  uStack_f0 = _UNK_180381548;
  local_f8 = _DAT_180381540;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar35;
  uStack_100 = _UNK_180381558;
  local_108 = _DAT_180381550;
  puVar7 = &DAT_18033baf0;
  *(undefined1 *)((longlong)param_3 + 0x67) = 1;
  *(undefined1 *)((longlong)param_3 + 0x7d) = 1;
  fVar32 = DAT_180381420;
  fVar34 = DAT_18038120c;
  local_e8 = _DAT_180381520;
  uStack_e0 = _UNK_180381528;
  if (DAT_18038103c <= *(float *)(&DAT_180561180 + lVar6 * 0x2d)) {
    puVar7 = &DAT_180339000;
  }
  local_d8 = _DAT_180381530;
  local_c8 = *puVar7;
  local_c4 = puVar7[1];
  local_c0 = puVar7[2];
  local_bc = puVar7[3];
  lVar6 = 0;
  local_b8 = puVar7[4];
  local_b4 = puVar7[5];
  do {
    iVar2 = *(int *)((longlong)&local_108 + lVar6 * 4);
    lVar9 = (longlong)iVar2;
    if (*(char *)((longlong)param_3 + lVar9 + 0x58) != '\0') {
      iVar3 = *(int *)((longlong)param_3 + 0xdc);
      if (0 < iVar3) {
        fVar12 = *(float *)((longlong)param_3 + lVar9 * 4);
        uVar10 = 0;
        do {
          fVar1 = *(float *)((longlong)param_3 +
                            (longlong)*(int *)((longlong)param_3 + uVar10 * 4 + 0x84) * 4);
          fVar14 = fmodf(fVar12 - fVar1,fVar34);
          if (fVar12 <= fVar1) {
            if (fVar14 <= fVar32) {
              fVar14 = fVar14 + fVar34;
            }
          }
          else if (fVar33 <= fVar14) {
            fVar14 = fVar14 - fVar34;
          }
          if ((float)((uint)fVar14 & uVar4) < fVar31) {
            *(undefined1 *)(lVar9 + 0x58 + (longlong)param_3) = 0;
            goto LAB_1800b9c5b;
          }
          uVar13 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar3);
      }
      *(int *)((longlong)param_3 + (longlong)iVar3 * 4 + 0x84) = iVar2;
      *(int *)((longlong)param_3 + 0xdc) = *(int *)((longlong)param_3 + 0xdc) + 1;
    }
LAB_1800b9c5b:
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x16) {
      return;
    }
  } while( true );
}



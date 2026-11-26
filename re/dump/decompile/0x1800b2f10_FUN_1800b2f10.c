// 0x1800b2f10  FUN_1800b2f10
// size=1282 thunk=false
// signature: undefined FUN_1800b2f10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b2f10(int param_1,float param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 extraout_var [12];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined4 local_54;
  
  if (0x7f < param_1 - 1U) {
    return;
  }
  lVar11 = (longlong)param_1 * 0x318;
  sVar2 = _fdclass();
  fVar20 = 0.0;
  if (sVar2 < 1) {
    fVar16 = fmodf(param_2,DAT_18038120c);
    auVar19._4_4_ = extraout_var._0_4_;
    auVar19._0_4_ = fVar16;
    auVar19._8_4_ = extraout_var._4_4_;
    auVar19._12_4_ = extraout_var._8_4_;
    if (DAT_180381188 < fVar16) {
      auVar19._0_4_ = fVar16 - DAT_18038120c;
    }
    if (auVar19._0_4_ < DAT_180381420) {
      auVar19._0_4_ = auVar19._0_4_ + DAT_18038120c;
    }
  }
  else {
    auVar19 = ZEXT816(0);
  }
  iVar4 = 1;
  if (0 < param_3) {
    iVar4 = param_3;
  }
  if (*(int *)(&DAT_18040a950 + lVar11) < 1) {
    uVar14 = 0;
  }
  else {
    uVar3 = *(int *)(&DAT_18040a954 + lVar11) + 0x3fU & 0x8000001f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    auVar15._4_12_ = auVar19._4_12_;
    auVar15._0_4_ = auVar19._0_4_ - *(float *)(lVar11 + 0x18040a658 + (longlong)(int)uVar3 * 0x18);
    uVar14 = FUN_1800b1d70(auVar15._0_8_);
  }
  lVar8 = (longlong)*(int *)(&DAT_18040a954 + lVar11);
  *(undefined8 *)(&DAT_18040a650 + lVar8 * 0x18 + lVar11) = param_4;
  *(float *)(lVar11 + 0x18040a658 + lVar8 * 0x18) = auVar19._0_4_;
  *(undefined4 *)(lVar11 + 0x18040a65c + lVar8 * 0x18) = uVar14;
  *(int *)(&DAT_18040a660 + lVar8 * 0x18 + lVar11) = iVar4;
  *(undefined4 *)(lVar11 + 0x18040a664 + lVar8 * 0x18) = local_54;
  uVar3 = _DAT_1803817c0;
  uVar13 = *(int *)(&DAT_18040a954 + lVar11) + 1U & 0x8000001f;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
  }
  iVar4 = *(int *)(&DAT_18040a950 + lVar11);
  uVar12 = 0;
  *(uint *)(&DAT_18040a954 + lVar11) = uVar13;
  *(undefined8 *)(&DAT_18040a958 + lVar11) = 0;
  *(undefined8 *)(&DAT_18040a960 + lVar11) = 0;
  if (iVar4 < 0x20) {
    iVar4 = iVar4 + 1;
    *(int *)(&DAT_18040a950 + lVar11) = iVar4;
    if (4 < iVar4) goto LAB_1800b306e;
  }
  else {
LAB_1800b306e:
    fVar18 = 0.0;
    fVar16 = 0.0;
    uVar10 = uVar12;
    if (0 < iVar4 + -1) {
      do {
        if (7 < (int)uVar10) break;
        uVar5 = (uVar13 - uVar10) + 0x3f & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        if (*(int *)(&DAT_18040a660 + (longlong)(int)uVar5 * 0x18 + lVar11) < 1) goto LAB_1800b318f;
        fVar18 = fVar18 + *(float *)(lVar11 + 0x18040a65c + (longlong)(int)uVar5 * 0x18);
        uVar10 = uVar10 + 1;
        fVar16 = fVar16 + (float)*(int *)(&DAT_18040a660 + (longlong)(int)uVar5 * 0x18 + lVar11);
      } while ((int)uVar10 < iVar4 + -1);
      if ((3 < (int)uVar10) && (0.0 < fVar16)) {
        fVar18 = fVar18 / fVar16;
        if (DAT_180380d30 <= (float)((uint)fVar18 & uVar3)) {
          fVar16 = 0.0;
          uVar5 = uVar12;
          do {
            uVar6 = (uVar13 - uVar5) + 0x3f & 0x8000001f;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
            }
            fVar17 = *(float *)(lVar11 + 0x18040a65c + (longlong)(int)uVar6 * 0x18) /
                     (float)*(int *)(&DAT_18040a660 + (longlong)(int)uVar6 * 0x18 + lVar11);
            if ((0.0 < fVar17 != 0.0 < fVar18) ||
               (fVar17 = (float)((uint)(fVar17 - fVar18) & uVar3) / (float)((uint)fVar18 & uVar3),
               DAT_180380a88 < fVar17)) goto LAB_1800b318f;
            if (fVar17 <= fVar16) {
              fVar17 = fVar16;
            }
            fVar16 = fVar17;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uVar10);
          fVar16 = DAT_180380bb0 - fVar16;
          *(float *)(&DAT_18040a95c + lVar11) = fVar18;
          *(undefined4 *)(&DAT_18040a958 + lVar11) = 1;
          goto LAB_1800b33e1;
        }
      }
    }
  }
LAB_1800b318f:
  fVar16 = DAT_180380bb0;
  iVar4 = *(int *)(&DAT_18040a950 + lVar11);
  if (4 < iVar4) {
    fVar18 = 0.0;
    uVar10 = uVar12;
    if (0 < iVar4 + -1) {
      do {
        if (7 < uVar10) break;
        uVar5 = (uVar13 - uVar10) + 0x3f & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        fVar17 = *(float *)(lVar11 + 0x18040a65c + (longlong)(int)uVar5 * 0x18);
        uVar5 = (uVar13 - uVar10) + 0x3e & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        if (0.0 < fVar17 == 0.0 < *(float *)(lVar11 + 0x18040a65c + (longlong)(int)uVar5 * 0x18))
        goto LAB_1800b32b6;
        uVar10 = uVar10 + 1;
        fVar18 = fVar18 + (float)((uint)fVar17 & uVar3);
      } while ((int)uVar10 < iVar4 + -1);
      if ((3 < (int)uVar10) &&
         (fVar18 = fVar18 / (float)(int)uVar10, uVar5 = uVar12, DAT_180380fcc <= fVar18)) {
        do {
          uVar6 = (uVar13 - uVar5) + 0x3f & 0x8000001f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
          }
          fVar17 = (float)((uint)((float)(*(uint *)(lVar11 + 0x18040a65c +
                                                   (longlong)(int)uVar6 * 0x18) & uVar3) - fVar18) &
                          uVar3) / fVar18;
          if (DAT_180380a94 < fVar17) goto LAB_1800b32b6;
          if (fVar17 <= fVar20) {
            fVar17 = fVar20;
          }
          fVar20 = fVar17;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar10);
        fVar16 = DAT_180380bb0 - fVar20;
        *(float *)(&DAT_18040a95c + lVar11) = fVar18;
        *(undefined4 *)(&DAT_18040a958 + lVar11) = 2;
        goto LAB_1800b33e1;
      }
    }
  }
LAB_1800b32b6:
  if (iVar4 < 10) {
    return;
  }
  uVar5 = 4;
  uVar13 = 2;
  uVar10 = uVar12;
  do {
    uVar6 = 0;
    if ((int)uVar13 < iVar4) {
      uVar6 = uVar12;
      do {
        uVar7 = (*(int *)(&DAT_18040a954 + lVar11) - uVar6) + 0x3f & 0x8000001f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
        }
        uVar9 = ((*(int *)(&DAT_18040a954 + lVar11) - uVar6) - uVar13) + 0x3f & 0x8000001f;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
        }
      } while ((((float)((uint)(*(float *)(lVar11 + 0x18040a65c + (longlong)(int)uVar7 * 0x18) -
                               *(float *)(lVar11 + 0x18040a65c + (longlong)(int)uVar9 * 0x18)) &
                        uVar3) < DAT_180381024) && (uVar6 = uVar6 + 1, (int)uVar6 < 0xc)) &&
              ((int)(uVar6 + uVar13) < iVar4));
    }
    uVar7 = uVar13;
    if (((int)uVar5 < (int)uVar6) && (0xb < (int)uVar6)) break;
    if ((int)uVar6 <= (int)uVar5) {
      uVar6 = uVar5;
      uVar7 = uVar10;
    }
    uVar5 = uVar6;
    iVar1 = uVar13 + 5;
    uVar6 = uVar5;
    uVar13 = uVar13 + 1;
    uVar10 = uVar7;
  } while (iVar1 < iVar4);
  if (uVar7 == 0) {
    return;
  }
  *(undefined4 *)(&DAT_18040a958 + lVar11) = 3;
  *(uint *)(&DAT_18040a964 + lVar11) = uVar7;
  if ((float)(int)uVar6 / DAT_180380fd8 <= fVar16) {
    fVar16 = (float)(int)uVar6 / DAT_180380fd8;
  }
LAB_1800b33e1:
  *(float *)(&DAT_18040a960 + lVar11) = fVar16;
  return;
}



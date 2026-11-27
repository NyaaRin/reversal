// 0x1802ca2b0  FUN_1802ca2b0
// size=1531 thunk=false
// signature: undefined FUN_1802ca2b0()
// status: ok


undefined8
FUN_1802ca2b0(float *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
             undefined8 param_7,undefined8 param_8,float *param_9)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar13 = DAT_180380d30;
  fVar14 = DAT_180380bb0;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  fVar16 = (param_1[2] - *param_1) - DAT_180380e9c;
  fVar17 = *(float *)(lVar1 + 0xd08);
  bVar2 = 1 < param_3 - 8U;
  iVar3 = param_6 - param_5;
  if (param_6 <= param_5) {
    iVar3 = param_5 - param_6;
  }
  fVar10 = fVar17;
  if (((bVar2) && (0.0 <= (float)iVar3)) &&
     (fVar10 = fVar16 / ((float)iVar3 + DAT_180380bb0), fVar10 <= fVar17)) {
    fVar10 = fVar17;
  }
  if (fVar16 <= fVar10) {
    fVar10 = fVar16;
  }
  fVar18 = fVar10 * DAT_180380ac0;
  fVar17 = *param_1 + DAT_180380d30 + fVar18;
  fVar19 = (param_1[2] - DAT_180380d30) - fVar18;
  if (*(int *)(lVar1 + 0x1594) != param_2) {
    uVar7 = 0;
    goto LAB_1802ca7c2;
  }
  if (*(int *)(lVar1 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x108) == '\0') {
LAB_1802ca79d:
      FUN_18026ea90(0,0);
    }
    else {
      fVar12 = *(float *)(lVar1 + 0x100);
      if (*(char *)(lVar1 + 0x15a0) != '\0') {
        fVar11 = (float)FUN_1802cc780();
        fVar11 = fVar11 * (fVar19 - fVar17) + fVar17;
        if (((fVar12 < (fVar11 - fVar18) - fVar14) || (fVar11 + fVar18 + fVar14 < fVar12)) ||
           (bVar2)) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = fVar12 - fVar11;
        }
        *(float *)(lVar1 + 0x26bc) = fVar11;
      }
      fVar15 = 0.0;
      if (((0.0 < fVar16 - fVar10) &&
          (fVar10 = ((fVar12 - *(float *)(lVar1 + 0x26bc)) - fVar17) / (fVar16 - fVar10),
          0.0 <= fVar10)) && (fVar15 = fVar14, fVar10 <= fVar14)) {
        fVar15 = fVar10;
      }
LAB_1802ca4e4:
      if ((*(uint *)(lVar1 + 0x1efc) & 0x800) == 0) {
        iVar3 = FUN_1802cca80(param_3,fVar15,param_5,param_6,0,0);
        if (!bVar2) {
          iVar3 = FUN_1802ccd20(param_7);
        }
        if (*param_4 != iVar3) {
          *param_4 = iVar3;
          uVar7 = 1;
          goto LAB_1802ca7c2;
        }
      }
    }
  }
  else if (*(int *)(lVar1 + 0x15b4) - 2U < 2) {
    if (*(char *)(lVar1 + 0x15a0) != '\0') {
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
    }
    fVar10 = (float)FUN_180284310(0);
    if (fVar10 != 0.0) {
      uVar5 = 0x1000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar5 = 0x282;
      }
      pcVar6 = (char *)FUN_180267330(uVar5);
      if (*pcVar6 == '\0') {
        bVar9 = false;
      }
      else {
        cVar8 = FUN_18027deb0(uVar5,0);
        bVar9 = cVar8 != '\0';
      }
      uVar5 = 0x2000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar5 = 0x283;
      }
      pcVar6 = (char *)FUN_180267330(uVar5);
      if (*pcVar6 == '\0') {
        cVar8 = false;
      }
      else {
        cVar8 = FUN_18027deb0(uVar5,0);
        cVar8 = cVar8 != '\0';
      }
      fVar12 = DAT_180380fcc;
      if ((bVar2) || (iVar4 = FUN_1802b3320(param_7), iVar4 < 1)) {
        fVar11 = (float)iVar3;
        if (((DAT_180381418 <= fVar11) && ((fVar11 <= DAT_180381120 && (fVar11 != 0.0)))) || (bVar9)
           ) {
          if (0.0 <= fVar10) {
            fVar10 = fVar14 / fVar11;
          }
          else {
            fVar10 = DAT_180381384 / fVar11;
          }
        }
        else {
          fVar10 = fVar10 / DAT_180381120;
        }
      }
      else {
        fVar10 = fVar10 / DAT_180381120;
        if (bVar9) {
          fVar10 = fVar10 / fVar12;
        }
      }
      if (cVar8 != '\0') {
        fVar10 = fVar10 * fVar12;
      }
      *(undefined1 *)(lVar1 + 0x26c4) = 1;
      *(float *)(lVar1 + 0x26c0) = fVar10 + *(float *)(lVar1 + 0x26c0);
    }
    if ((*(int *)(lVar1 + 0x208c) == param_2) && (*(char *)(lVar1 + 0x15a0) == '\0'))
    goto LAB_1802ca79d;
    if (*(char *)(lVar1 + 0x26c4) != '\0') {
      fVar10 = *(float *)(lVar1 + 0x26c0);
      fVar12 = (float)FUN_1802cc780();
      if (((fVar12 < fVar14) || (fVar10 <= 0.0)) && ((0.0 < fVar12 || (0.0 <= fVar10)))) {
        fVar11 = fVar10 + fVar12;
        if (0.0 <= fVar11) {
          fVar15 = fVar14;
          if (fVar11 <= fVar14) {
            fVar15 = fVar11;
          }
        }
        else {
          fVar15 = 0.0;
        }
        uVar5 = FUN_1802cca80(param_3,fVar15,param_5,param_6,0,0);
        uVar7 = extraout_XMM0_Qa;
        if (!bVar2) {
          uVar5 = FUN_1802ccd20(param_7);
          uVar7 = extraout_XMM0_Qa_00;
        }
        fVar11 = (float)FUN_1802cc780(uVar7,uVar5,param_5,param_6,0,0);
        fVar11 = fVar11 - fVar12;
        if (fVar10 <= 0.0) {
          if (fVar11 <= fVar10) {
            fVar11 = fVar10;
          }
        }
        else if (fVar10 <= fVar11) {
          fVar11 = fVar10;
        }
        *(float *)(lVar1 + 0x26c0) = *(float *)(lVar1 + 0x26c0) - fVar11;
        *(undefined1 *)(lVar1 + 0x26c4) = 0;
        goto LAB_1802ca4e4;
      }
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
    }
  }
  uVar7 = 0;
LAB_1802ca7c2:
  if (fVar14 <= fVar16) {
    fVar16 = (float)FUN_1802cc780();
    fVar14 = param_1[1] + fVar13;
    fVar13 = param_1[3] - fVar13;
    fVar17 = fVar16 * (fVar19 - fVar17) + fVar17;
    fVar16 = fVar17 - fVar18;
    fVar17 = fVar17 + fVar18;
  }
  else {
    fVar17 = *param_1;
    fVar14 = param_1[1];
    fVar16 = fVar17;
    fVar13 = fVar14;
  }
  *param_9 = fVar16;
  param_9[1] = fVar14;
  param_9[2] = fVar17;
  param_9[3] = fVar13;
  return uVar7;
}



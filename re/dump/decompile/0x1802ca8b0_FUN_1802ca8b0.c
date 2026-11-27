// 0x1802ca8b0  FUN_1802ca8b0
// size=1537 thunk=false
// signature: undefined FUN_1802ca8b0()
// status: ok


undefined8
FUN_1802ca8b0(float param_1,int param_2,int param_3,int *param_4,uint param_5,uint param_6,
             undefined8 param_7,undefined8 param_8,float *param_9)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  float *in_RCX;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar11;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    param_1 = (float)__dyn_tls_on_demand_init();
  }
  fVar14 = DAT_180380d30;
  fVar13 = DAT_180380bb0;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  fVar16 = (in_RCX[2] - *in_RCX) - DAT_180380e9c;
  fVar17 = *(float *)(lVar1 + 0xd08);
  bVar2 = 1 < param_3 - 8U;
  uVar3 = param_6 - param_5;
  if (param_6 <= param_5) {
    uVar3 = param_5 - param_6;
  }
  fVar15 = fVar17;
  if (((bVar2) && (0.0 <= (float)uVar3)) &&
     (param_1 = fVar16 / ((float)uVar3 + DAT_180380bb0), fVar15 = param_1, param_1 <= fVar17)) {
    param_1 = fVar17;
    fVar15 = fVar17;
  }
  if (fVar16 <= fVar15) {
    fVar15 = fVar16;
  }
  fVar18 = fVar15 * DAT_180380ac0;
  fVar17 = *in_RCX + DAT_180380d30 + fVar18;
  fVar19 = (in_RCX[2] - DAT_180380d30) - fVar18;
  if (*(int *)(lVar1 + 0x1594) != param_2) {
    uVar7 = 0;
    goto LAB_1802cadc8;
  }
  if (*(int *)(lVar1 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x108) == '\0') {
LAB_1802cada3:
      param_1 = (float)FUN_18026ea90(0,0);
    }
    else {
      fVar11 = *(float *)(lVar1 + 0x100);
      if (*(char *)(lVar1 + 0x15a0) != '\0') {
        fVar10 = (float)FUN_1802cce10(param_1,*param_4,param_5,param_6,0,0);
        param_1 = fVar10 * (fVar19 - fVar17) + fVar17;
        if (((fVar11 < (param_1 - fVar18) - fVar13) || (param_1 + fVar18 + fVar13 < fVar11)) ||
           (bVar2)) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = fVar11 - param_1;
        }
        *(float *)(lVar1 + 0x26bc) = fVar10;
      }
      fVar10 = 0.0;
      if (((0.0 < fVar16 - fVar15) &&
          (fVar15 = ((fVar11 - *(float *)(lVar1 + 0x26bc)) - fVar17) / (fVar16 - fVar15),
          0.0 <= fVar15)) && (fVar10 = fVar13, fVar15 <= fVar13)) {
        fVar10 = fVar15;
      }
LAB_1802caae7:
      if ((*(uint *)(lVar1 + 0x1efc) & 0x800) == 0) {
        iVar4 = FUN_1802cd120(param_3,fVar10,param_5,param_6,0,0);
        param_1 = extraout_XMM0_Da;
        if (!bVar2) {
          iVar4 = FUN_1802cd3d0(param_7);
          param_1 = extraout_XMM0_Da_00;
        }
        if (*param_4 != iVar4) {
          *param_4 = iVar4;
          uVar7 = 1;
          goto LAB_1802cadc8;
        }
      }
    }
  }
  else if (*(int *)(lVar1 + 0x15b4) - 2U < 2) {
    if (*(char *)(lVar1 + 0x15a0) != '\0') {
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
    }
    fVar15 = (float)FUN_180284310(0);
    param_1 = fVar15;
    if (fVar15 != 0.0) {
      uVar12 = 0x1000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar12 = 0x282;
      }
      pcVar6 = (char *)FUN_180267330(uVar12);
      if (*pcVar6 == '\0') {
        bVar9 = false;
      }
      else {
        cVar8 = FUN_18027deb0(uVar12,0);
        bVar9 = cVar8 != '\0';
      }
      uVar12 = 0x2000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar12 = 0x283;
      }
      pcVar6 = (char *)FUN_180267330(uVar12);
      if (*pcVar6 == '\0') {
        cVar8 = false;
      }
      else {
        cVar8 = FUN_18027deb0(uVar12,0);
        cVar8 = cVar8 != '\0';
      }
      fVar11 = DAT_180380fcc;
      if ((bVar2) || (iVar4 = FUN_1802b3320(param_7), iVar4 < 1)) {
        param_1 = (float)uVar3;
        if (((DAT_180381418 <= param_1) && ((param_1 <= DAT_180381120 && (param_1 != 0.0)))) ||
           (bVar9)) {
          if (0.0 <= fVar15) {
            fVar15 = fVar13 / param_1;
          }
          else {
            fVar15 = DAT_180381384 / param_1;
          }
        }
        else {
          fVar15 = fVar15 / DAT_180381120;
        }
      }
      else {
        fVar15 = fVar15 / DAT_180381120;
        param_1 = extraout_XMM0_Da_01;
        if (bVar9) {
          fVar15 = fVar15 / fVar11;
        }
      }
      if (cVar8 != '\0') {
        fVar15 = fVar15 * fVar11;
      }
      *(undefined1 *)(lVar1 + 0x26c4) = 1;
      *(float *)(lVar1 + 0x26c0) = fVar15 + *(float *)(lVar1 + 0x26c0);
    }
    if ((*(int *)(lVar1 + 0x208c) == param_2) && (*(char *)(lVar1 + 0x15a0) == '\0'))
    goto LAB_1802cada3;
    if (*(char *)(lVar1 + 0x26c4) != '\0') {
      fVar15 = *(float *)(lVar1 + 0x26c0);
      param_1 = (float)FUN_1802cce10(param_1,*param_4,param_5,param_6,0,0);
      if (((param_1 < fVar13) || (fVar15 <= 0.0)) && ((0.0 < param_1 || (0.0 <= fVar15)))) {
        fVar11 = fVar15 + param_1;
        if (0.0 <= fVar11) {
          fVar10 = fVar13;
          if (fVar11 <= fVar13) {
            fVar10 = fVar11;
          }
        }
        else {
          fVar10 = 0.0;
        }
        uVar5 = FUN_1802cd120(param_3,fVar10,param_5,param_6,0,0);
        uVar12 = extraout_XMM0_Da_02;
        if (!bVar2) {
          uVar5 = FUN_1802cd3d0(param_7);
          uVar12 = extraout_XMM0_Da_03;
        }
        fVar11 = (float)FUN_1802cce10(uVar12,uVar5,param_5,param_6,0,0);
        param_1 = fVar11 - param_1;
        if (fVar15 <= 0.0) {
          if (param_1 <= fVar15) {
            param_1 = fVar15;
          }
        }
        else if (fVar15 <= param_1) {
          param_1 = fVar15;
        }
        *(float *)(lVar1 + 0x26c0) = *(float *)(lVar1 + 0x26c0) - param_1;
        *(undefined1 *)(lVar1 + 0x26c4) = 0;
        goto LAB_1802caae7;
      }
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
    }
  }
  uVar7 = 0;
LAB_1802cadc8:
  if (fVar13 <= fVar16) {
    fVar13 = (float)FUN_1802cce10(param_1,*param_4,param_5,param_6,0,0);
    fVar16 = in_RCX[1] + fVar14;
    fVar14 = in_RCX[3] - fVar14;
    fVar17 = fVar13 * (fVar19 - fVar17) + fVar17;
    fVar13 = fVar17 - fVar18;
    fVar17 = fVar17 + fVar18;
  }
  else {
    fVar17 = *in_RCX;
    fVar14 = in_RCX[1];
    fVar13 = fVar17;
    fVar16 = fVar14;
  }
  *param_9 = fVar13;
  param_9[1] = fVar16;
  param_9[2] = fVar17;
  param_9[3] = fVar14;
  return uVar7;
}



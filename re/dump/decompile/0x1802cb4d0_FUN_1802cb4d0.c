// 0x1802cb4d0  FUN_1802cb4d0
// size=1609 thunk=false
// signature: undefined FUN_1802cb4d0()
// status: ok


undefined8
FUN_1802cb4d0(float param_1,int param_2,int param_3,longlong *param_4,ulonglong param_5,
             ulonglong param_6,undefined8 param_7,undefined8 param_8,float *param_9)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  float *in_RCX;
  ulonglong uVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar10;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    param_1 = (float)__dyn_tls_on_demand_init();
  }
  fVar13 = DAT_180380d30;
  fVar12 = DAT_180380bb0;
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  fVar15 = (in_RCX[2] - *in_RCX) - DAT_180380e9c;
  fVar16 = *(float *)(lVar3 + 0xd08);
  bVar1 = 1 < param_3 - 8U;
  uVar6 = param_6 - param_5;
  if (param_6 <= param_5) {
    uVar6 = param_5 - param_6;
  }
  fVar14 = fVar16;
  if (((bVar1) && (0.0 <= (float)uVar6)) &&
     (param_1 = fVar15 / ((float)uVar6 + DAT_180380bb0), fVar14 = param_1, param_1 <= fVar16)) {
    param_1 = fVar16;
    fVar14 = fVar16;
  }
  if (fVar15 <= fVar14) {
    fVar14 = fVar15;
  }
  fVar17 = fVar14 * DAT_180380ac0;
  fVar16 = *in_RCX + DAT_180380d30 + fVar17;
  fVar18 = (in_RCX[2] - DAT_180380d30) - fVar17;
  if (*(int *)(lVar3 + 0x1594) == param_2) {
    if (*(int *)(lVar3 + 0x15b4) == 1) {
      if (*(char *)(lVar3 + 0x108) == '\0') {
LAB_1802cba02:
        param_1 = (float)FUN_18026ea90(0,0);
      }
      else {
        fVar10 = *(float *)(lVar3 + 0x100);
        if (*(char *)(lVar3 + 0x15a0) != '\0') {
          fVar9 = (float)FUN_1802cdbf0(param_1,*param_4,param_5,param_6,0,0);
          param_1 = fVar9 * (fVar18 - fVar16) + fVar16;
          if (((fVar10 < (param_1 - fVar17) - fVar12) || (param_1 + fVar17 + fVar12 < fVar10)) ||
             (bVar1)) {
            fVar9 = 0.0;
          }
          else {
            fVar9 = fVar10 - param_1;
          }
          *(float *)(lVar3 + 0x26bc) = fVar9;
        }
        fVar9 = 0.0;
        if (((0.0 < fVar15 - fVar14) &&
            (fVar14 = ((fVar10 - *(float *)(lVar3 + 0x26bc)) - fVar16) / (fVar15 - fVar14),
            0.0 <= fVar14)) && (fVar9 = fVar12, fVar14 <= fVar12)) {
          fVar9 = fVar14;
        }
LAB_1802cb72e:
        if ((*(uint *)(lVar3 + 0x1efc) & 0x800) == 0) {
          lVar3 = FUN_1802ce020(param_3,fVar9,param_5,param_6,0,0);
          param_1 = extraout_XMM0_Da;
          if (!bVar1) {
            lVar3 = FUN_1802ce420(param_7);
            param_1 = extraout_XMM0_Da_00;
          }
          if (*param_4 != lVar3) {
            *param_4 = lVar3;
            uVar5 = 1;
            goto LAB_1802cba15;
          }
        }
      }
    }
    else if (*(int *)(lVar3 + 0x15b4) - 2U < 2) {
      if (*(char *)(lVar3 + 0x15a0) != '\0') {
        *(undefined4 *)(lVar3 + 0x26c0) = 0;
        *(undefined1 *)(lVar3 + 0x26c4) = 0;
      }
      fVar14 = (float)FUN_180284310(0);
      param_1 = fVar14;
      if (fVar14 != 0.0) {
        uVar11 = 0x1000;
        if (*(int *)(lVar3 + 0x20c0) == 3) {
          uVar11 = 0x282;
        }
        pcVar4 = (char *)FUN_180267330(uVar11);
        if (*pcVar4 == '\0') {
          bVar8 = false;
        }
        else {
          cVar7 = FUN_18027deb0(uVar11,0);
          bVar8 = cVar7 != '\0';
        }
        uVar11 = 0x2000;
        if (*(int *)(lVar3 + 0x20c0) == 3) {
          uVar11 = 0x283;
        }
        pcVar4 = (char *)FUN_180267330(uVar11);
        if (*pcVar4 == '\0') {
          cVar7 = false;
        }
        else {
          cVar7 = FUN_18027deb0(uVar11,0);
          cVar7 = cVar7 != '\0';
        }
        fVar10 = DAT_180380fcc;
        if ((bVar1) || (iVar2 = FUN_1802b3320(param_7), iVar2 < 1)) {
          param_1 = (float)uVar6;
          if (((DAT_180381418 <= param_1) && ((param_1 <= DAT_180381120 && (param_1 != 0.0)))) ||
             (bVar8)) {
            if (0.0 <= fVar14) {
              fVar14 = fVar12 / param_1;
            }
            else {
              fVar14 = DAT_180381384 / param_1;
            }
          }
          else {
            fVar14 = fVar14 / DAT_180381120;
          }
        }
        else {
          fVar14 = fVar14 / DAT_180381120;
          param_1 = extraout_XMM0_Da_01;
          if (bVar8) {
            fVar14 = fVar14 / fVar10;
          }
        }
        if (cVar7 != '\0') {
          fVar14 = fVar14 * fVar10;
        }
        *(undefined1 *)(lVar3 + 0x26c4) = 1;
        *(float *)(lVar3 + 0x26c0) = fVar14 + *(float *)(lVar3 + 0x26c0);
      }
      if ((*(int *)(lVar3 + 0x208c) == param_2) && (*(char *)(lVar3 + 0x15a0) == '\0'))
      goto LAB_1802cba02;
      if (*(char *)(lVar3 + 0x26c4) != '\0') {
        fVar14 = *(float *)(lVar3 + 0x26c0);
        param_1 = (float)FUN_1802cdbf0(param_1,*param_4,param_5,param_6,0,0);
        if (((param_1 < fVar12) || (fVar14 <= 0.0)) && ((0.0 < param_1 || (0.0 <= fVar14)))) {
          fVar10 = fVar14 + param_1;
          if (0.0 <= fVar10) {
            fVar9 = fVar12;
            if (fVar10 <= fVar12) {
              fVar9 = fVar10;
            }
          }
          else {
            fVar9 = 0.0;
          }
          uVar5 = FUN_1802ce020(param_3,fVar9,param_5,param_6,0,0);
          uVar11 = extraout_XMM0_Da_02;
          if (!bVar1) {
            uVar5 = FUN_1802ce420(param_7);
            uVar11 = extraout_XMM0_Da_03;
          }
          fVar10 = (float)FUN_1802cdbf0(uVar11,uVar5,param_5,param_6,0,0);
          param_1 = fVar10 - param_1;
          if (fVar14 <= 0.0) {
            if (param_1 <= fVar14) {
              param_1 = fVar14;
            }
          }
          else if (fVar14 <= param_1) {
            param_1 = fVar14;
          }
          *(float *)(lVar3 + 0x26c0) = *(float *)(lVar3 + 0x26c0) - param_1;
          *(undefined1 *)(lVar3 + 0x26c4) = 0;
          goto LAB_1802cb72e;
        }
        *(undefined4 *)(lVar3 + 0x26c0) = 0;
        *(undefined1 *)(lVar3 + 0x26c4) = 0;
      }
    }
  }
  uVar5 = 0;
LAB_1802cba15:
  if (fVar12 <= fVar15) {
    fVar12 = (float)FUN_1802cdbf0(param_1,*param_4,param_5,param_6,0,0);
    fVar15 = in_RCX[1] + fVar13;
    fVar13 = in_RCX[3] - fVar13;
    fVar16 = fVar12 * (fVar18 - fVar16) + fVar16;
    fVar12 = fVar16 - fVar17;
    fVar16 = fVar16 + fVar17;
  }
  else {
    fVar16 = *in_RCX;
    fVar13 = in_RCX[1];
    fVar12 = fVar16;
    fVar15 = fVar13;
  }
  *param_9 = fVar12;
  param_9[1] = fVar15;
  param_9[2] = fVar16;
  param_9[3] = fVar13;
  return uVar5;
}



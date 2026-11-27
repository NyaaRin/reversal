// 0x1802cbb20  FUN_1802cbb20
// size=1570 thunk=false
// signature: undefined FUN_1802cbb20()
// status: ok


bool FUN_1802cbb20(float param_1,int param_2,int param_3,float *param_4,float param_5,float param_6,
                  undefined8 param_7,undefined8 param_8,float *param_9)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  float *in_RCX;
  bool bVar6;
  float extraout_XMM0_Da;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    param_1 = (float)__dyn_tls_on_demand_init();
  }
  fVar9 = DAT_180380d30;
  fVar8 = DAT_180380bb0;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  bVar2 = 1 < param_3 - 8U;
  if (param_6 <= param_5) {
    fVar12 = param_5 - param_6;
  }
  else {
    fVar12 = param_6 - param_5;
  }
  fVar15 = *(float *)(lVar1 + 0xd08);
  fVar14 = (in_RCX[2] - *in_RCX) - DAT_180380e9c;
  fVar10 = fVar15;
  if ((bVar2) && (0.0 <= fVar12)) {
    param_1 = fVar12 + DAT_180380bb0;
    fVar10 = fVar14 / param_1;
    if (fVar14 / param_1 <= fVar15) {
      fVar10 = fVar15;
    }
  }
  if (fVar14 <= fVar10) {
    fVar10 = fVar14;
  }
  bVar6 = false;
  fVar11 = fVar10 * DAT_180380ac0;
  fVar15 = *in_RCX + DAT_180380d30 + fVar11;
  fVar16 = (in_RCX[2] - DAT_180380d30) - fVar11;
  if (*(int *)(lVar1 + 0x1594) != param_2) goto LAB_1802cc03c;
  if (*(int *)(lVar1 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x108) == '\0') {
      param_1 = (float)FUN_18026ea90(0,0);
      goto LAB_1802cc03c;
    }
    fVar9 = *(float *)(lVar1 + 0x100);
    if (*(char *)(lVar1 + 0x15a0) != '\0') {
      fVar12 = (float)FUN_1802ce550(param_1,*param_4,param_5,param_6,0,0);
      param_1 = fVar12 * (fVar16 - fVar15) + fVar15;
      if (((fVar9 < (param_1 - fVar11) - fVar8) || (param_1 + fVar11 + fVar8 < fVar9)) || (bVar2)) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar9 - param_1;
      }
      *(float *)(lVar1 + 0x26bc) = fVar12;
    }
    fVar13 = 0.0;
    if (((0.0 < fVar14 - fVar10) &&
        (fVar9 = ((fVar9 - *(float *)(lVar1 + 0x26bc)) - fVar15) / (fVar14 - fVar10), 0.0 <= fVar9))
       && (fVar13 = fVar8, fVar9 <= fVar8)) {
      fVar13 = fVar9;
    }
  }
  else {
    if (1 < *(int *)(lVar1 + 0x15b4) - 2U) goto LAB_1802cc03c;
    if (*(char *)(lVar1 + 0x15a0) != '\0') {
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
    }
    param_1 = (float)FUN_180284310(0);
    if (param_1 != 0.0) {
      uVar7 = 0x1000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar7 = 0x282;
      }
      pcVar5 = (char *)FUN_180267330(uVar7);
      if (*pcVar5 != '\0') {
        cVar3 = FUN_18027deb0(uVar7,0);
        bVar6 = cVar3 != '\0';
      }
      uVar7 = 0x2000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar7 = 0x283;
      }
      pcVar5 = (char *)FUN_180267330(uVar7);
      if (*pcVar5 == '\0') {
        cVar3 = false;
      }
      else {
        cVar3 = FUN_18027deb0(uVar7,0);
        cVar3 = cVar3 != '\0';
      }
      fVar10 = DAT_180380fcc;
      if ((bVar2) || (iVar4 = FUN_1802b3320(param_7), iVar4 < 1)) {
        if (((DAT_180381418 <= fVar12) && ((fVar12 <= DAT_180381120 && (fVar12 != 0.0)))) ||
           (bVar6 != false)) {
          if (0.0 <= param_1) {
            fVar12 = fVar8 / fVar12;
            param_1 = DAT_180381120;
          }
          else {
            fVar12 = DAT_180381384 / fVar12;
            param_1 = DAT_180381120;
          }
        }
        else {
          fVar12 = param_1 / DAT_180381120;
          param_1 = DAT_180381120;
        }
      }
      else {
        fVar12 = param_1 / DAT_180381120;
        param_1 = extraout_XMM0_Da;
        if (bVar6 != false) {
          fVar12 = fVar12 / fVar10;
          param_1 = extraout_XMM0_Da;
        }
      }
      if (cVar3 != '\0') {
        fVar12 = fVar12 * fVar10;
      }
      *(undefined1 *)(lVar1 + 0x26c4) = 1;
      *(float *)(lVar1 + 0x26c0) = fVar12 + *(float *)(lVar1 + 0x26c0);
    }
    bVar6 = false;
    if ((*(int *)(lVar1 + 0x208c) == param_2) && (*(char *)(lVar1 + 0x15a0) == '\0')) {
      param_1 = (float)FUN_18026ea90(0,0);
      goto LAB_1802cc03c;
    }
    if (*(char *)(lVar1 + 0x26c4) == '\0') goto LAB_1802cc03c;
    fVar9 = *(float *)(lVar1 + 0x26c0);
    param_1 = (float)FUN_1802ce550(param_1,*param_4,param_5,param_6,0,0);
    if (((fVar8 <= param_1) && (0.0 < fVar9)) || ((param_1 <= 0.0 && (fVar9 < 0.0)))) {
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
      fVar9 = DAT_180380d30;
      goto LAB_1802cc03c;
    }
    fVar12 = fVar9 + param_1;
    if (0.0 <= fVar12) {
      fVar13 = fVar8;
      if (fVar12 <= fVar8) {
        fVar13 = fVar12;
      }
    }
    else {
      fVar13 = 0.0;
    }
    uVar7 = FUN_1802ce830(param_3,fVar13,param_5,param_6,0,0);
    if (!bVar2) {
      uVar7 = FUN_1802ceaa0(param_7);
    }
    fVar12 = (float)FUN_1802ce550(uVar7,uVar7,param_5,param_6,0,0);
    param_1 = fVar12 - param_1;
    if (fVar9 <= 0.0) {
      if (param_1 <= fVar9) {
        param_1 = fVar9;
      }
    }
    else if (fVar9 <= param_1) {
      param_1 = fVar9;
    }
    *(float *)(lVar1 + 0x26c0) = *(float *)(lVar1 + 0x26c0) - param_1;
    *(undefined1 *)(lVar1 + 0x26c4) = 0;
  }
  bVar6 = false;
  fVar9 = DAT_180380d30;
  if ((*(uint *)(lVar1 + 0x1efc) & 0x800) == 0) {
    fVar12 = (float)FUN_1802ce830(param_3,fVar13,param_5,param_6,0,0);
    if (!bVar2) {
      fVar12 = (float)FUN_1802ceaa0(param_7,fVar12,fVar12);
    }
    param_1 = *param_4;
    fVar9 = DAT_180380d30;
    if (param_1 != fVar12) {
      *param_4 = fVar12;
      bVar6 = true;
      fVar9 = DAT_180380d30;
    }
  }
LAB_1802cc03c:
  if (fVar8 <= fVar14) {
    fVar8 = (float)FUN_1802ce550(param_1,*param_4,param_5,param_6,0,0);
    fVar12 = in_RCX[1] + fVar9;
    fVar9 = in_RCX[3] - fVar9;
    fVar15 = fVar8 * (fVar16 - fVar15) + fVar15;
    fVar8 = fVar15 - fVar11;
    fVar15 = fVar15 + fVar11;
  }
  else {
    fVar15 = *in_RCX;
    fVar9 = in_RCX[1];
    fVar8 = fVar15;
    fVar12 = fVar9;
  }
  *param_9 = fVar8;
  param_9[1] = fVar12;
  param_9[2] = fVar15;
  param_9[3] = fVar9;
  return bVar6;
}



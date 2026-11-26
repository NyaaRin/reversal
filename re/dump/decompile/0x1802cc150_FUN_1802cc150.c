// 0x1802cc150  FUN_1802cc150
// size=1572 thunk=false
// signature: undefined FUN_1802cc150()
// status: ok


bool FUN_1802cc150(double param_1,int param_2,int param_3,double *param_4,double param_5,
                  double param_6,undefined8 param_7,undefined8 param_8,float *param_9)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  float *in_RCX;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double extraout_XMM0_Qa;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    param_1 = (double)__dyn_tls_on_demand_init();
  }
  fVar12 = DAT_180380d30;
  fVar11 = DAT_180380bb0;
  uVar16 = SUB84(param_6,0);
  uVar17 = SUB84(param_5,0);
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  bVar2 = 1 < param_3 - 8U;
  if (param_6 <= param_5) {
    param_6 = param_5 - param_6;
  }
  else {
    param_6 = param_6 - param_5;
  }
  fVar19 = *(float *)(lVar1 + 0xd08);
  fVar18 = (in_RCX[2] - *in_RCX) - DAT_180380e9c;
  fVar8 = fVar19;
  if ((bVar2) && (0.0 <= (float)param_6)) {
    fVar8 = fVar18 / ((float)param_6 + DAT_180380bb0);
    param_1 = (double)(ulonglong)(uint)fVar8;
    if (fVar8 <= fVar19) {
      param_1 = (double)(ulonglong)(uint)fVar19;
      fVar8 = fVar19;
    }
  }
  if (fVar18 <= fVar8) {
    fVar8 = fVar18;
  }
  bVar7 = false;
  fVar15 = fVar8 * DAT_180380ac0;
  fVar19 = *in_RCX + DAT_180380d30 + fVar15;
  fVar20 = (in_RCX[2] - DAT_180380d30) - fVar15;
  if (*(int *)(lVar1 + 0x1594) != param_2) goto LAB_1802cc66e;
  if (*(int *)(lVar1 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x108) == '\0') {
      param_1 = (double)FUN_18026ea90(0,0);
      goto LAB_1802cc66e;
    }
    fVar12 = *(float *)(lVar1 + 0x100);
    if (*(char *)(lVar1 + 0x15a0) != '\0') {
      fVar9 = (float)FUN_1802cebb0(param_1,*param_4,uVar17,uVar16,0,0);
      fVar9 = fVar9 * (fVar20 - fVar19) + fVar19;
      param_1 = (double)(ulonglong)(uint)fVar9;
      if (((fVar12 < (fVar9 - fVar15) - fVar11) || (fVar9 + fVar15 + fVar11 < fVar12)) || (bVar2)) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = fVar12 - fVar9;
      }
      *(float *)(lVar1 + 0x26bc) = fVar9;
    }
    fVar10 = 0.0;
    if (((0.0 < fVar18 - fVar8) &&
        (fVar12 = ((fVar12 - *(float *)(lVar1 + 0x26bc)) - fVar19) / (fVar18 - fVar8), 0.0 <= fVar12
        )) && (fVar10 = fVar11, fVar12 <= fVar11)) {
      fVar10 = fVar12;
    }
  }
  else {
    if (1 < *(int *)(lVar1 + 0x15b4) - 2U) goto LAB_1802cc66e;
    if (*(char *)(lVar1 + 0x15a0) != '\0') {
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
    }
    param_1 = (double)FUN_180284310(0);
    fVar8 = SUB84(param_1,0);
    if (fVar8 != 0.0) {
      uVar6 = 0x1000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar6 = 0x282;
      }
      pcVar5 = (char *)FUN_180267330(uVar6);
      if (*pcVar5 != '\0') {
        cVar3 = FUN_18027deb0(uVar6,0);
        bVar7 = cVar3 != '\0';
      }
      uVar6 = 0x2000;
      if (*(int *)(lVar1 + 0x20c0) == 3) {
        uVar6 = 0x283;
      }
      pcVar5 = (char *)FUN_180267330(uVar6);
      if (*pcVar5 == '\0') {
        cVar3 = false;
      }
      else {
        cVar3 = FUN_18027deb0(uVar6,0);
        cVar3 = cVar3 != '\0';
      }
      fVar9 = DAT_180380fcc;
      if ((bVar2) || (iVar4 = FUN_1802b3320(param_7), iVar4 < 1)) {
        fVar10 = (float)param_6;
        param_1 = (double)(ulonglong)(uint)fVar10;
        if (((DAT_180381418 <= fVar10) && ((fVar10 <= DAT_180381120 && (fVar10 != 0.0)))) ||
           (bVar7 != false)) {
          if (0.0 <= fVar8) {
            fVar8 = fVar11 / fVar10;
          }
          else {
            fVar8 = DAT_180381384 / fVar10;
          }
        }
        else {
          fVar8 = fVar8 / DAT_180381120;
        }
      }
      else {
        fVar8 = fVar8 / DAT_180381120;
        param_1 = extraout_XMM0_Qa;
        if (bVar7 != false) {
          fVar8 = fVar8 / fVar9;
        }
      }
      if (cVar3 != '\0') {
        fVar8 = fVar8 * fVar9;
      }
      *(undefined1 *)(lVar1 + 0x26c4) = 1;
      *(float *)(lVar1 + 0x26c0) = fVar8 + *(float *)(lVar1 + 0x26c0);
    }
    bVar7 = false;
    if ((*(int *)(lVar1 + 0x208c) == param_2) && (*(char *)(lVar1 + 0x15a0) == '\0')) {
      param_1 = (double)FUN_18026ea90(0,0);
      goto LAB_1802cc66e;
    }
    if (*(char *)(lVar1 + 0x26c4) == '\0') goto LAB_1802cc66e;
    fVar12 = *(float *)(lVar1 + 0x26c0);
    param_1 = (double)FUN_1802cebb0(param_1,*param_4,uVar17,uVar16,0,0);
    fVar8 = SUB84(param_1,0);
    if (((fVar11 <= fVar8) && (0.0 < fVar12)) || ((fVar8 <= 0.0 && (fVar12 < 0.0)))) {
      *(undefined4 *)(lVar1 + 0x26c0) = 0;
      *(undefined1 *)(lVar1 + 0x26c4) = 0;
      fVar12 = DAT_180380d30;
      goto LAB_1802cc66e;
    }
    fVar9 = fVar12 + fVar8;
    if (0.0 <= fVar9) {
      fVar10 = fVar11;
      if (fVar9 <= fVar11) {
        fVar10 = fVar9;
      }
    }
    else {
      fVar10 = 0.0;
    }
    uVar13 = FUN_1802cef00(param_3,fVar10,uVar17,uVar16,0,0);
    if (!bVar2) {
      uVar13 = FUN_1802cf1f0(param_7);
    }
    fVar9 = (float)FUN_1802cebb0(uVar13,uVar13,uVar17,uVar16,0,0);
    fVar9 = fVar9 - fVar8;
    param_1 = (double)(ulonglong)(uint)fVar9;
    if (fVar12 <= 0.0) {
      if (fVar9 <= fVar12) {
        param_1 = (double)(ulonglong)(uint)fVar12;
      }
    }
    else if (fVar12 <= fVar9) {
      param_1 = (double)(ulonglong)(uint)fVar12;
    }
    *(float *)(lVar1 + 0x26c0) = *(float *)(lVar1 + 0x26c0) - SUB84(param_1,0);
    *(undefined1 *)(lVar1 + 0x26c4) = 0;
  }
  bVar7 = false;
  fVar12 = DAT_180380d30;
  if ((*(uint *)(lVar1 + 0x1efc) & 0x800) == 0) {
    dVar14 = (double)FUN_1802cef00(param_3,fVar10,uVar17,uVar16,0,0);
    if (!bVar2) {
      dVar14 = (double)FUN_1802cf1f0(param_7,dVar14,SUB84(dVar14,0));
    }
    param_1 = *param_4;
    fVar12 = DAT_180380d30;
    if (param_1 != dVar14) {
      *param_4 = dVar14;
      bVar7 = true;
      fVar12 = DAT_180380d30;
    }
  }
LAB_1802cc66e:
  if (fVar11 <= fVar18) {
    fVar11 = (float)FUN_1802cebb0(param_1,*param_4,uVar17,uVar16,0,0);
    fVar8 = in_RCX[1] + fVar12;
    fVar12 = in_RCX[3] - fVar12;
    fVar19 = fVar11 * (fVar20 - fVar19) + fVar19;
    fVar11 = fVar19 - fVar15;
    fVar19 = fVar19 + fVar15;
  }
  else {
    fVar11 = *in_RCX;
    fVar8 = in_RCX[1];
    fVar19 = fVar11;
    fVar12 = fVar8;
  }
  *param_9 = fVar11;
  param_9[1] = fVar8;
  param_9[2] = fVar19;
  param_9[3] = fVar12;
  return bVar7;
}



// 0x1802c7d60  FUN_1802c7d60
// size=1491 thunk=false
// signature: undefined FUN_1802c7d60()
// status: ok


undefined8
FUN_1802c7d60(int param_1,int *param_2,float param_3,int param_4,int param_5,undefined8 param_6,
             uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float extraout_XMM0_Da_00;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 extraout_var [12];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar16 = DAT_180381308;
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  uVar7 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && (((float)param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar13 = true;
    bVar4 = true;
    bVar5 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_1802c7e43;
  }
  else {
    bVar13 = false;
    bVar4 = false;
LAB_1802c7e43:
    bVar5 = false;
  }
  uVar12 = param_7 & 0x20;
  bVar3 = param_1 - 8U < 2;
  if (((param_3 == 0.0) && (bVar13)) && ((float)(param_5 - param_4) < DAT_180381308)) {
    param_3 = (float)(param_5 - param_4) * *(float *)(lVar2 + 0x26cc);
  }
  if (*(int *)(lVar2 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((DAT_180381444 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x100)) &&
       (DAT_180381444 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x104))) {
      fVar21 = *(float *)(lVar2 + 0x90) * DAT_180380ac0;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (fVar21 < 0.0) {
        fVar21 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x90);
      }
      if (fVar21 * fVar21 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xbb4)) {
        fVar21 = *(float *)(lVar2 + 0xec + (ulonglong)(uVar7 != 0) * 4);
        if ((*(char *)(lVar2 + 0x11e) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar21 = fVar21 * DAT_180380980;
        }
        if ((*(char *)(lVar2 + 0x11d) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar21 = fVar21 * DAT_180380fcc;
        }
        goto LAB_1802c80bc;
      }
    }
  }
  if (*(int *)(lVar2 + 0x15b4) - 2U < 2) {
    if (bVar3) {
      iVar9 = FUN_1802b3320(param_6);
    }
    else {
      iVar9 = 0;
    }
    uVar11 = 0x1000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar11 = 0x282;
    }
    pcVar10 = (char *)FUN_180267330(uVar11);
    if (*pcVar10 == '\0') {
      bVar13 = false;
    }
    else {
      cVar6 = FUN_18027deb0(uVar11,0);
      bVar13 = cVar6 != '\0';
    }
    uVar11 = 0x2000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar11 = 0x283;
    }
    pcVar10 = (char *)FUN_180267330(uVar11);
    if (*pcVar10 == '\0') {
      bVar14 = false;
    }
    else {
      cVar6 = FUN_18027deb0(uVar11,0);
      bVar14 = cVar6 != '\0';
    }
    fVar21 = DAT_180380bb0;
    if ((((param_7 >> 0xb & 1) == 0) && (fVar21 = DAT_1803809ec, !bVar13)) &&
       (fVar21 = DAT_180380bb0, bVar14)) {
      fVar21 = DAT_180380fcc;
    }
    FUN_180284310(uVar7 != 0);
    fVar21 = extraout_XMM0_Da * fVar21;
    if (iVar9 < 0) {
      if (param_3 <= DAT_180380920) {
        param_3 = DAT_180380920;
      }
    }
    else if (iVar9 < 10) {
      if (param_3 <= *(float *)(&DAT_1803806c0 + (longlong)iVar9 * 4)) {
        param_3 = *(float *)(&DAT_1803806c0 + (longlong)iVar9 * 4);
      }
    }
    else {
      fVar15 = powf(DAT_180380fcc,(float)-iVar9);
      if (param_3 <= fVar15) {
        param_3 = fVar15;
      }
    }
  }
  else {
    fVar21 = 0.0;
  }
LAB_1802c80bc:
  fVar21 = fVar21 * param_3;
  if (uVar7 != 0) {
    fVar21 = (float)((uint)fVar21 ^ DAT_1803817f0);
  }
  if (((uVar12 != 0) && (fVar15 = (float)(param_5 - param_4), fVar15 < fVar16)) &&
     (DAT_180380938 < fVar15)) {
    fVar21 = fVar21 / fVar15;
  }
  if (((!bVar4) || (bVar5)) ||
     (((*param_2 < param_5 || (fVar21 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar21)))))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((*(char *)(lVar2 + 0x15a0) != '\0') || (bVar13)) {
    *(undefined4 *)(lVar2 + 0x26c8) = 0;
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
  }
  else if (fVar21 != 0.0) {
    *(undefined1 *)(lVar2 + 0x26c5) = 1;
    *(float *)(lVar2 + 0x26c8) = fVar21 + *(float *)(lVar2 + 0x26c8);
  }
  if (*(char *)(lVar2 + 0x26c5) != '\0') {
    iVar9 = *param_2;
    if (uVar12 == 0) {
      fVar16 = 0.0;
      iVar9 = (int)*(float *)(lVar2 + 0x26c8) + iVar9;
    }
    else {
      if (bVar3) {
        iVar8 = FUN_1802b3320(param_6);
      }
      else {
        iVar8 = 1;
      }
      auVar18._0_4_ = powf(DAT_1803809ec,(float)iVar8);
      auVar18._4_12_ = extraout_var;
      uVar17 = FUN_1802cc780(auVar18._0_8_,iVar9,param_4,param_5,auVar18._0_4_,0);
      fVar16 = (float)uVar17;
      auVar19._8_4_ = (int)extraout_XMM0_Qb;
      auVar19._0_8_ = uVar17;
      auVar19._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar16 + *(float *)(lVar2 + 0x26c8);
      iVar9 = FUN_1802cca80(param_1,auVar20._0_8_,param_4,param_5,auVar18._0_4_,0);
    }
    if ((bVar3) && ((param_7 & 0x40) == 0)) {
      iVar9 = FUN_1802ccd20(param_6);
    }
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
    if (uVar12 == 0) {
      fVar16 = (float)(iVar9 - *param_2);
    }
    else {
      FUN_1802cc780();
      fVar16 = extraout_XMM0_Da_00 - fVar16;
    }
    *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - fVar16;
    iVar8 = *param_2;
    if (iVar8 != iVar9) {
      if (bVar4) {
        if (bVar5) {
          if (iVar9 < param_4) {
            iVar9 = iVar9 + ((bVar3 ^ 1) - param_4) + param_5;
          }
          if (param_5 < iVar9) {
            iVar9 = iVar9 + ((param_4 - (bVar3 ^ 1)) - param_5);
          }
        }
        else {
          if ((iVar9 < param_4) || (((iVar8 < iVar9 && (fVar21 < 0.0)) && (!bVar3)))) {
            iVar9 = param_4;
          }
          if ((param_5 < iVar9) || (((iVar9 < iVar8 && (0.0 < fVar21)) && (!bVar3)))) {
            iVar9 = param_5;
          }
        }
        if (iVar8 == iVar9) {
          return 0;
        }
      }
      *param_2 = iVar9;
      return 1;
    }
  }
  return 0;
}



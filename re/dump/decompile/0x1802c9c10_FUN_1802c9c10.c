// 0x1802c9c10  FUN_1802c9c10
// size=1687 thunk=false
// signature: undefined FUN_1802c9c10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1802c9c10(int param_1,double *param_2,float param_3,double param_4,double param_5,
             undefined8 param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da_00;
  double dVar17;
  undefined8 uVar18;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  dVar4 = DAT_1803812e8;
  uVar12 = (ulonglong)((param_7 & 0x100000) != 0);
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && ((param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar13 = true;
    bVar5 = true;
    bVar6 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_1802c9d09;
  }
  else {
    bVar13 = false;
    bVar5 = false;
LAB_1802c9d09:
    bVar6 = false;
  }
  uVar10 = param_7 & 0x20;
  bVar3 = param_1 - 8U < 2;
  if (((param_3 == 0.0) && (bVar13)) && (param_5 - param_4 < DAT_1803812e8)) {
    param_3 = (float)((double)*(float *)(lVar2 + 0x26cc) * (param_5 - param_4));
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
        fVar21 = *(float *)(lVar2 + 0xec + uVar12 * 4);
        if ((*(char *)(lVar2 + 0x11e) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar21 = fVar21 * DAT_180380980;
        }
        if ((*(char *)(lVar2 + 0x11d) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar21 = fVar21 * DAT_180380fcc;
        }
        goto LAB_1802c9f9b;
      }
    }
  }
  if (*(int *)(lVar2 + 0x15b4) - 2U < 2) {
    if (bVar3) {
      iVar8 = FUN_1802b3320(param_6);
    }
    else {
      iVar8 = 0;
    }
    uVar11 = 0x1000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar11 = 0x282;
    }
    pcVar9 = (char *)FUN_180267330(uVar11);
    if (*pcVar9 == '\0') {
      bVar13 = false;
    }
    else {
      cVar7 = FUN_18027deb0(uVar11,0);
      bVar13 = cVar7 != '\0';
    }
    uVar11 = 0x2000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar11 = 0x283;
    }
    pcVar9 = (char *)FUN_180267330(uVar11);
    if (*pcVar9 == '\0') {
      bVar14 = false;
    }
    else {
      cVar7 = FUN_18027deb0(uVar11,0);
      bVar14 = cVar7 != '\0';
    }
    fVar15 = DAT_180380fcc;
    fVar21 = DAT_180380bb0;
    if ((((param_7 >> 0xb & 1) == 0) && (fVar21 = DAT_1803809ec, !bVar13)) &&
       (fVar21 = DAT_180380bb0, bVar14)) {
      fVar21 = DAT_180380fcc;
    }
    FUN_180284310(uVar12);
    fVar21 = extraout_XMM0_Da * fVar21;
    if (iVar8 < 0) {
      if (param_3 <= DAT_180380920) {
        param_3 = DAT_180380920;
      }
    }
    else if (iVar8 < 10) {
      if (param_3 <= *(float *)(&DAT_1803806c0 + (longlong)iVar8 * 4)) {
        param_3 = *(float *)(&DAT_1803806c0 + (longlong)iVar8 * 4);
      }
    }
    else {
      fVar15 = powf(fVar15,(float)-iVar8);
      if (param_3 <= fVar15) {
        param_3 = fVar15;
      }
    }
  }
  else {
    fVar21 = 0.0;
  }
LAB_1802c9f9b:
  fVar21 = fVar21 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar21 = (float)((uint)fVar21 ^ DAT_1803817f0);
  }
  if (((uVar10 != 0) && (dVar17 = param_5 - param_4, dVar17 < dVar4)) && (_DAT_180380a78 < dVar17))
  {
    fVar21 = fVar21 / (float)dVar17;
  }
  if (((!bVar5) || (bVar6)) ||
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
    if (uVar10 == 0) {
      fVar15 = 0.0;
      dVar4 = (double)*(float *)(lVar2 + 0x26c8) + *param_2;
    }
    else {
      if (bVar3) {
        iVar8 = FUN_1802b3320(param_6);
      }
      else {
        iVar8 = 1;
      }
      fVar16 = powf(DAT_1803809ec,(float)iVar8);
      uVar18 = FUN_1802cebb0();
      fVar15 = (float)uVar18;
      auVar19._8_4_ = (int)extraout_XMM0_Qb;
      auVar19._0_8_ = uVar18;
      auVar19._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar15 + *(float *)(lVar2 + 0x26c8);
      FUN_1802cef00(param_1,auVar20._0_8_,param_4,param_5._0_4_,fVar16,0);
      dVar4 = extraout_XMM0_Qa;
    }
    if ((bVar3) && ((param_7 & 0x40) == 0)) {
      FUN_1802cf1f0(param_6);
      dVar4 = extraout_XMM0_Qa_00;
    }
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
    if (uVar10 == 0) {
      *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - (float)(dVar4 - *param_2);
    }
    else {
      FUN_1802cebb0();
      *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - (extraout_XMM0_Da_00 - fVar15);
    }
    if (dVar4 == 0.0) {
      dVar4 = 0.0;
    }
    dVar17 = *param_2;
    if (dVar17 != dVar4) {
      if (bVar5) {
        if (bVar6) {
          if (dVar4 < param_4) {
            dVar4 = dVar4 + (double)!bVar3 + (param_5 - param_4);
          }
          if (param_5 < dVar4) {
            dVar4 = dVar4 - ((double)!bVar3 + (param_5 - param_4));
          }
        }
        else {
          if ((dVar4 < param_4) || (((dVar17 < dVar4 && (fVar21 < 0.0)) && (!bVar3)))) {
            dVar4 = param_4;
          }
          if ((param_5 < dVar4) || (((dVar4 < dVar17 && (0.0 < fVar21)) && (!bVar3)))) {
            dVar4 = param_5;
          }
        }
      }
      if (dVar17 != dVar4) {
        *param_2 = dVar4;
        return 1;
      }
    }
  }
  return 0;
}



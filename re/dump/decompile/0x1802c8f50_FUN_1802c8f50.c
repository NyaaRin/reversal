// 0x1802c8f50  FUN_1802c8f50
// size=1664 thunk=false
// signature: undefined FUN_1802c8f50()
// status: ok


undefined8
FUN_1802c8f50(float param_1,ulonglong *param_2,float param_3,ulonglong param_4,ulonglong param_5,
             undefined8 param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  int in_ECX;
  undefined4 uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  float extraout_XMM0_Da;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar18;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    param_1 = (float)__dyn_tls_on_demand_init();
  }
  fVar17 = DAT_180381308;
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  uVar8 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 &&
      ((param_1 = (float)param_4, param_1 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar14 = true;
    bVar6 = true;
    bVar5 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_1802c9059;
  }
  else {
    bVar14 = false;
    bVar6 = false;
LAB_1802c9059:
    bVar5 = false;
  }
  uVar13 = param_7 & 0x20;
  bVar4 = in_ECX - 8U < 2;
  if (((param_3 == 0.0) && (bVar14)) &&
     (param_1 = (float)(param_5 - param_4), param_1 < DAT_180381308)) {
    param_3 = param_1 * *(float *)(lVar2 + 0x26cc);
  }
  if (*(int *)(lVar2 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    param_1 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x100);
    if ((DAT_180381444 <= param_1) &&
       (param_1 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x104), DAT_180381444 <= param_1)) {
      fVar21 = *(float *)(lVar2 + 0x90) * DAT_180380ac0;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (fVar21 < 0.0) {
        fVar21 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x90);
      }
      param_1 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xbb4);
      if (fVar21 * fVar21 <= param_1) {
        fVar21 = *(float *)(lVar2 + 0xec + (ulonglong)(uVar8 != 0) * 4);
        if ((*(char *)(lVar2 + 0x11e) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar21 = fVar21 * DAT_180380980;
        }
        if ((*(char *)(lVar2 + 0x11d) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar21 = fVar21 * DAT_180380fcc;
        }
        goto LAB_1802c92ed;
      }
    }
  }
  if (*(int *)(lVar2 + 0x15b4) - 2U < 2) {
    if (bVar4) {
      iVar9 = FUN_1802b3320(param_6);
    }
    else {
      iVar9 = 0;
    }
    uVar12 = 0x1000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar12 = 0x282;
    }
    pcVar10 = (char *)FUN_180267330(uVar12);
    if (*pcVar10 == '\0') {
      bVar14 = false;
    }
    else {
      cVar7 = FUN_18027deb0(uVar12,0);
      bVar14 = cVar7 != '\0';
    }
    uVar12 = 0x2000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar12 = 0x283;
    }
    pcVar10 = (char *)FUN_180267330(uVar12);
    if (*pcVar10 == '\0') {
      bVar15 = false;
    }
    else {
      cVar7 = FUN_18027deb0(uVar12,0);
      bVar15 = cVar7 != '\0';
    }
    fVar21 = DAT_180380bb0;
    if ((((param_7 >> 0xb & 1) == 0) && (fVar21 = DAT_1803809ec, !bVar14)) &&
       (fVar21 = DAT_180380bb0, bVar15)) {
      fVar21 = DAT_180380fcc;
    }
    FUN_180284310(uVar8 != 0);
    fVar21 = extraout_XMM0_Da * fVar21;
    if (iVar9 < 0) {
      param_1 = DAT_180380920;
      if (param_3 <= DAT_180380920) {
        param_3 = DAT_180380920;
      }
    }
    else if (iVar9 < 10) {
      param_1 = *(float *)(&DAT_1803806c0 + (longlong)iVar9 * 4);
      if (param_3 <= param_1) {
        param_3 = param_1;
      }
    }
    else {
      param_1 = powf(DAT_180380fcc,(float)-iVar9);
      if (param_3 <= param_1) {
        param_3 = param_1;
      }
    }
  }
  else {
    fVar21 = 0.0;
  }
LAB_1802c92ed:
  fVar21 = fVar21 * param_3;
  if (uVar8 != 0) {
    fVar21 = (float)((uint)fVar21 ^ DAT_1803817f0);
  }
  if (((uVar13 != 0) && (param_1 = (float)(param_5 - param_4), param_1 < fVar17)) &&
     (DAT_180380938 < param_1)) {
    fVar21 = fVar21 / param_1;
  }
  if (((!bVar6) || (bVar5)) ||
     (((*param_2 < param_5 || (fVar21 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar21)))))) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((*(char *)(lVar2 + 0x15a0) != '\0') || (bVar14)) {
    *(undefined4 *)(lVar2 + 0x26c8) = 0;
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
  }
  else if (fVar21 != 0.0) {
    *(undefined1 *)(lVar2 + 0x26c5) = 1;
    param_1 = fVar21 + *(float *)(lVar2 + 0x26c8);
    *(float *)(lVar2 + 0x26c8) = param_1;
  }
  if (*(char *)(lVar2 + 0x26c5) != '\0') {
    uVar11 = *param_2;
    if (uVar13 == 0) {
      fVar17 = 0.0;
      fVar16 = 0.0;
      uVar11 = (longlong)*(float *)(lVar2 + 0x26c8) + uVar11;
    }
    else {
      if (bVar4) {
        iVar9 = FUN_1802b3320(param_6);
      }
      else {
        iVar9 = 1;
      }
      fVar16 = powf(DAT_1803809ec,(float)iVar9);
      uVar18 = FUN_1802cdbf0(fVar16,uVar11,param_4,param_5,fVar16,0);
      fVar17 = (float)uVar18;
      auVar19._8_4_ = extraout_XMM0_Dc;
      auVar19._0_8_ = uVar18;
      auVar19._12_4_ = extraout_XMM0_Dd;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar17 + *(float *)(lVar2 + 0x26c8);
      uVar11 = FUN_1802ce020(in_ECX,auVar20._0_8_,param_4,param_5,fVar16,0);
      param_1 = extraout_XMM0_Da_00;
    }
    if ((bVar4) && ((param_7 & 0x40) == 0)) {
      uVar11 = FUN_1802ce420(param_6);
      param_1 = extraout_XMM0_Da_01;
    }
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
    if (uVar13 == 0) {
      *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - (float)(longlong)(uVar11 - *param_2)
      ;
    }
    else {
      FUN_1802cdbf0(param_1,uVar11,param_4,param_5,fVar16,0);
      *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - (extraout_XMM0_Da_02 - fVar17);
    }
    uVar3 = *param_2;
    if (uVar3 != uVar11) {
      if (bVar6) {
        if (bVar5) {
          if (uVar11 < param_4) {
            uVar11 = uVar11 + (((ulonglong)bVar4 ^ 1) - param_4) + param_5;
          }
          if (param_5 < uVar11) {
            uVar11 = uVar11 + ((param_4 - ((ulonglong)bVar4 ^ 1)) - param_5);
          }
        }
        else {
          if ((uVar11 < param_4) || (((uVar3 < uVar11 && (fVar21 < 0.0)) && (!bVar4)))) {
            uVar11 = param_4;
          }
          if ((param_5 < uVar11) || (((uVar11 < uVar3 && (0.0 < fVar21)) && (!bVar4)))) {
            uVar11 = param_5;
          }
        }
        if (uVar3 == uVar11) {
          return 0;
        }
      }
      *param_2 = uVar11;
      return 1;
    }
  }
  return 0;
}



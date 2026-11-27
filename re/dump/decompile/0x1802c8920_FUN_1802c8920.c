// 0x1802c8920  FUN_1802c8920
// size=1583 thunk=false
// signature: undefined FUN_1802c8920()
// status: ok


undefined8
FUN_1802c8920(float param_1,longlong *param_2,float param_3,longlong param_4,longlong param_5,
             undefined8 param_6,uint param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  int in_ECX;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar16;
  
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    param_1 = (float)__dyn_tls_on_demand_init();
  }
  fVar15 = DAT_180381308;
  lVar1 = *(longlong *)(lVar9 + 0xec0);
  uVar6 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 &&
      ((param_1 = (float)param_4, param_1 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar12 = true;
    bVar4 = true;
    bVar3 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_1802c8a0a;
  }
  else {
    bVar12 = false;
    bVar4 = false;
LAB_1802c8a0a:
    bVar3 = false;
  }
  uVar11 = param_7 & 0x20;
  bVar2 = in_ECX - 8U < 2;
  if (((param_3 == 0.0) && (bVar12)) &&
     (param_1 = (float)(param_5 - param_4), param_1 < DAT_180381308)) {
    param_3 = param_1 * *(float *)(lVar1 + 0x26cc);
  }
  if (*(int *)(lVar1 + 0x15b4) == 1) {
    if (*(char *)(lVar9 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    param_1 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x100);
    if ((DAT_180381444 <= param_1) &&
       (param_1 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x104), DAT_180381444 <= param_1)) {
      fVar19 = *(float *)(lVar1 + 0x90) * DAT_180380ac0;
      if (*(char *)(lVar9 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (fVar19 < 0.0) {
        fVar19 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x90);
      }
      param_1 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0xbb4);
      if (fVar19 * fVar19 <= param_1) {
        fVar19 = *(float *)(lVar1 + 0xec + (ulonglong)(uVar6 != 0) * 4);
        if ((*(char *)(lVar1 + 0x11e) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar19 = fVar19 * DAT_180380980;
        }
        if ((*(char *)(lVar1 + 0x11d) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar19 = fVar19 * DAT_180380fcc;
        }
        goto LAB_1802c8c85;
      }
    }
  }
  if (*(int *)(lVar1 + 0x15b4) - 2U < 2) {
    if (bVar2) {
      iVar7 = FUN_1802b3320(param_6);
    }
    else {
      iVar7 = 0;
    }
    uVar10 = 0x1000;
    if (*(int *)(lVar1 + 0x20c0) == 3) {
      uVar10 = 0x282;
    }
    pcVar8 = (char *)FUN_180267330(uVar10);
    if (*pcVar8 == '\0') {
      bVar12 = false;
    }
    else {
      cVar5 = FUN_18027deb0(uVar10,0);
      bVar12 = cVar5 != '\0';
    }
    uVar10 = 0x2000;
    if (*(int *)(lVar1 + 0x20c0) == 3) {
      uVar10 = 0x283;
    }
    pcVar8 = (char *)FUN_180267330(uVar10);
    if (*pcVar8 == '\0') {
      bVar13 = false;
    }
    else {
      cVar5 = FUN_18027deb0(uVar10,0);
      bVar13 = cVar5 != '\0';
    }
    fVar19 = DAT_180380bb0;
    if ((((param_7 >> 0xb & 1) == 0) && (fVar19 = DAT_1803809ec, !bVar12)) &&
       (fVar19 = DAT_180380bb0, bVar13)) {
      fVar19 = DAT_180380fcc;
    }
    FUN_180284310(uVar6 != 0);
    fVar19 = extraout_XMM0_Da * fVar19;
    if (iVar7 < 0) {
      param_1 = DAT_180380920;
      if (param_3 <= DAT_180380920) {
        param_3 = DAT_180380920;
      }
    }
    else if (iVar7 < 10) {
      param_1 = *(float *)(&DAT_1803806c0 + (longlong)iVar7 * 4);
      if (param_3 <= param_1) {
        param_3 = param_1;
      }
    }
    else {
      param_1 = powf(DAT_180380fcc,(float)-iVar7);
      if (param_3 <= param_1) {
        param_3 = param_1;
      }
    }
  }
  else {
    fVar19 = 0.0;
  }
LAB_1802c8c85:
  fVar19 = fVar19 * param_3;
  if (uVar6 != 0) {
    fVar19 = (float)((uint)fVar19 ^ DAT_1803817f0);
  }
  if (((uVar11 != 0) && (param_1 = (float)(param_5 - param_4), param_1 < fVar15)) &&
     (DAT_180380938 < param_1)) {
    fVar19 = fVar19 / param_1;
  }
  if (((!bVar4) || (bVar3)) ||
     (((*param_2 < param_5 || (fVar19 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar19)))))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((*(char *)(lVar1 + 0x15a0) != '\0') || (bVar12)) {
    *(undefined4 *)(lVar1 + 0x26c8) = 0;
    *(undefined1 *)(lVar1 + 0x26c5) = 0;
  }
  else if (fVar19 != 0.0) {
    *(undefined1 *)(lVar1 + 0x26c5) = 1;
    param_1 = fVar19 + *(float *)(lVar1 + 0x26c8);
    *(float *)(lVar1 + 0x26c8) = param_1;
  }
  if (*(char *)(lVar1 + 0x26c5) != '\0') {
    lVar9 = *param_2;
    if (uVar11 == 0) {
      fVar15 = 0.0;
      fVar14 = 0.0;
      lVar9 = (longlong)*(float *)(lVar1 + 0x26c8) + lVar9;
    }
    else {
      if (bVar2) {
        iVar7 = FUN_1802b3320(param_6);
      }
      else {
        iVar7 = 1;
      }
      fVar14 = powf(DAT_1803809ec,(float)iVar7);
      uVar16 = FUN_1802cd4c0(fVar14,lVar9,param_4,param_5,fVar14,0);
      fVar15 = (float)uVar16;
      auVar17._8_4_ = extraout_XMM0_Dc;
      auVar17._0_8_ = uVar16;
      auVar17._12_4_ = extraout_XMM0_Dd;
      auVar18._4_12_ = auVar17._4_12_;
      auVar18._0_4_ = fVar15 + *(float *)(lVar1 + 0x26c8);
      lVar9 = FUN_1802cd830(in_ECX,auVar18._0_8_,param_4,param_5,fVar14,0);
      param_1 = extraout_XMM0_Da_00;
    }
    if ((bVar2) && ((param_7 & 0x40) == 0)) {
      lVar9 = FUN_1802cdb00(param_6);
      param_1 = extraout_XMM0_Da_01;
    }
    *(undefined1 *)(lVar1 + 0x26c5) = 0;
    if (uVar11 == 0) {
      *(float *)(lVar1 + 0x26c8) = *(float *)(lVar1 + 0x26c8) - (float)(lVar9 - *param_2);
    }
    else {
      FUN_1802cd4c0(param_1,lVar9,param_4,param_5,fVar14,0);
      *(float *)(lVar1 + 0x26c8) = *(float *)(lVar1 + 0x26c8) - (extraout_XMM0_Da_02 - fVar15);
    }
    lVar1 = *param_2;
    if (lVar1 != lVar9) {
      if (bVar4) {
        if (bVar3) {
          if (lVar9 < param_4) {
            lVar9 = lVar9 + (((ulonglong)bVar2 ^ 1) - param_4) + param_5;
          }
          if (param_5 < lVar9) {
            lVar9 = lVar9 + ((param_4 - ((ulonglong)bVar2 ^ 1)) - param_5);
          }
        }
        else {
          if ((lVar9 < param_4) || (((lVar1 < lVar9 && (fVar19 < 0.0)) && (!bVar2)))) {
            lVar9 = param_4;
          }
          if ((param_5 < lVar9) || (((lVar9 < lVar1 && (0.0 < fVar19)) && (!bVar2)))) {
            lVar9 = param_5;
          }
        }
        if (lVar1 == lVar9) {
          return 0;
        }
      }
      *param_2 = lVar9;
      return 1;
    }
  }
  return 0;
}



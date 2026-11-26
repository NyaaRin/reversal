// 0x1802c8340  FUN_1802c8340
// size=1494 thunk=false
// signature: undefined FUN_1802c8340()
// status: ok


undefined8
FUN_1802c8340(int param_1,uint *param_2,float param_3,uint param_4,uint param_5,undefined8 param_6,
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
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float extraout_XMM0_Da_00;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 extraout_var [12];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar15 = DAT_180381308;
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  uVar7 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && (((float)param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar12 = true;
    bVar4 = true;
    bVar5 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_1802c8424;
  }
  else {
    bVar12 = false;
    bVar4 = false;
LAB_1802c8424:
    bVar5 = false;
  }
  uVar11 = param_7 & 0x20;
  bVar3 = param_1 - 8U < 2;
  if (((param_3 == 0.0) && (bVar12)) && ((float)(param_5 - param_4) < DAT_180381308)) {
    param_3 = (float)(param_5 - param_4) * *(float *)(lVar2 + 0x26cc);
  }
  if (*(int *)(lVar2 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((DAT_180381444 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x100)) &&
       (DAT_180381444 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x104))) {
      fVar20 = *(float *)(lVar2 + 0x90) * DAT_180380ac0;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (fVar20 < 0.0) {
        fVar20 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x90);
      }
      if (fVar20 * fVar20 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xbb4)) {
        fVar20 = *(float *)(lVar2 + 0xec + (ulonglong)(uVar7 != 0) * 4);
        if ((*(char *)(lVar2 + 0x11e) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar20 = fVar20 * DAT_180380980;
        }
        if ((*(char *)(lVar2 + 0x11d) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar20 = fVar20 * DAT_180380fcc;
        }
        goto LAB_1802c869e;
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
    uVar10 = 0x1000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar10 = 0x282;
    }
    pcVar9 = (char *)FUN_180267330(uVar10);
    if (*pcVar9 == '\0') {
      bVar12 = false;
    }
    else {
      cVar6 = FUN_18027deb0(uVar10,0);
      bVar12 = cVar6 != '\0';
    }
    uVar10 = 0x2000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar10 = 0x283;
    }
    pcVar9 = (char *)FUN_180267330(uVar10);
    if (*pcVar9 == '\0') {
      bVar13 = false;
    }
    else {
      cVar6 = FUN_18027deb0(uVar10,0);
      bVar13 = cVar6 != '\0';
    }
    fVar20 = DAT_180380bb0;
    if ((((param_7 >> 0xb & 1) == 0) && (fVar20 = DAT_1803809ec, !bVar12)) &&
       (fVar20 = DAT_180380bb0, bVar13)) {
      fVar20 = DAT_180380fcc;
    }
    FUN_180284310(uVar7 != 0);
    fVar20 = extraout_XMM0_Da * fVar20;
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
      fVar14 = powf(DAT_180380fcc,(float)-iVar8);
      if (param_3 <= fVar14) {
        param_3 = fVar14;
      }
    }
  }
  else {
    fVar20 = 0.0;
  }
LAB_1802c869e:
  fVar20 = fVar20 * param_3;
  if (uVar7 != 0) {
    fVar20 = (float)((uint)fVar20 ^ DAT_1803817f0);
  }
  if (((uVar11 != 0) && (fVar14 = (float)(param_5 - param_4), fVar14 < fVar15)) &&
     (DAT_180380938 < fVar14)) {
    fVar20 = fVar20 / fVar14;
  }
  if (((!bVar4) || (bVar5)) ||
     (((*param_2 < param_5 || (fVar20 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar20)))))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((*(char *)(lVar2 + 0x15a0) != '\0') || (bVar12)) {
    *(undefined4 *)(lVar2 + 0x26c8) = 0;
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
  }
  else if (fVar20 != 0.0) {
    *(undefined1 *)(lVar2 + 0x26c5) = 1;
    *(float *)(lVar2 + 0x26c8) = fVar20 + *(float *)(lVar2 + 0x26c8);
  }
  if (*(char *)(lVar2 + 0x26c5) != '\0') {
    uVar7 = *param_2;
    if (uVar11 == 0) {
      fVar15 = 0.0;
      uVar7 = (int)*(float *)(lVar2 + 0x26c8) + uVar7;
    }
    else {
      if (bVar3) {
        iVar8 = FUN_1802b3320(param_6);
      }
      else {
        iVar8 = 1;
      }
      auVar17._0_4_ = powf(DAT_1803809ec,(float)iVar8);
      auVar17._4_12_ = extraout_var;
      uVar16 = FUN_1802cce10(auVar17._0_8_,uVar7,param_4,param_5,auVar17._0_4_,0);
      fVar15 = (float)uVar16;
      auVar18._8_4_ = (int)extraout_XMM0_Qb;
      auVar18._0_8_ = uVar16;
      auVar18._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = fVar15 + *(float *)(lVar2 + 0x26c8);
      uVar7 = FUN_1802cd120(param_1,auVar19._0_8_,param_4,param_5,auVar17._0_4_,0);
    }
    if ((bVar3) && ((param_7 & 0x40) == 0)) {
      uVar7 = FUN_1802cd3d0(param_6);
    }
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
    if (uVar11 == 0) {
      fVar15 = (float)(int)(uVar7 - *param_2);
    }
    else {
      FUN_1802cce10();
      fVar15 = extraout_XMM0_Da_00 - fVar15;
    }
    *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - fVar15;
    uVar11 = *param_2;
    if (uVar11 != uVar7) {
      if (bVar4) {
        if (bVar5) {
          if (uVar7 < param_4) {
            uVar7 = uVar7 + ((bVar3 ^ 1) - param_4) + param_5;
          }
          if (param_5 < uVar7) {
            uVar7 = uVar7 + ((param_4 - (bVar3 ^ 1)) - param_5);
          }
        }
        else {
          if ((uVar7 < param_4) || (((uVar11 < uVar7 && (fVar20 < 0.0)) && (!bVar3)))) {
            uVar7 = param_4;
          }
          if ((param_5 < uVar7) || (((uVar7 < uVar11 && (0.0 < fVar20)) && (!bVar3)))) {
            uVar7 = param_5;
          }
        }
        if (uVar11 == uVar7) {
          return 0;
        }
      }
      *param_2 = uVar7;
      return 1;
    }
  }
  return 0;
}



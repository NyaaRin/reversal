// 0x1802c95d0  FUN_1802c95d0
// size=1598 thunk=false
// signature: undefined FUN_1802c95d0()
// status: ok


undefined8
FUN_1802c95d0(int param_1,float *param_2,float param_3,float param_4,float param_5,
             undefined8 param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar15 = DAT_180381308;
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  uVar10 = (ulonglong)((param_7 & 0x100000) != 0);
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && ((param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar12 = true;
    bVar4 = true;
    bVar5 = true;
    bVar3 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_1802c96c7;
  }
  else {
    bVar12 = false;
    bVar3 = false;
LAB_1802c96c7:
    bVar4 = bVar3;
    bVar5 = false;
  }
  uVar11 = param_7 & 0x20;
  bVar3 = param_1 - 8U < 2;
  if (((param_3 == 0.0) && (bVar12)) && (param_5 - param_4 < DAT_180381308)) {
    param_3 = (param_5 - param_4) * *(float *)(lVar2 + 0x26cc);
  }
  if (*(int *)(lVar2 + 0x15b4) == 1) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((DAT_180381444 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x100)) &&
       (DAT_180381444 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x104))) {
      fVar19 = *(float *)(lVar2 + 0x90) * DAT_180380ac0;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (fVar19 < 0.0) {
        fVar19 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x90);
      }
      if (fVar19 * fVar19 <= *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xbb4)) {
        fVar19 = *(float *)(lVar2 + 0xec + uVar10 * 4);
        if ((*(char *)(lVar2 + 0x11e) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar19 = fVar19 * DAT_180380980;
        }
        if ((*(char *)(lVar2 + 0x11d) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
          fVar19 = fVar19 * DAT_180380fcc;
        }
        goto LAB_1802c994b;
      }
    }
  }
  if (*(int *)(lVar2 + 0x15b4) - 2U < 2) {
    if (bVar3) {
      iVar7 = FUN_1802b3320(param_6);
    }
    else {
      iVar7 = 0;
    }
    uVar9 = 0x1000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar9 = 0x282;
    }
    pcVar8 = (char *)FUN_180267330(uVar9);
    if (*pcVar8 == '\0') {
      bVar12 = false;
    }
    else {
      cVar6 = FUN_18027deb0(uVar9,0);
      bVar12 = cVar6 != '\0';
    }
    uVar9 = 0x2000;
    if (*(int *)(lVar2 + 0x20c0) == 3) {
      uVar9 = 0x283;
    }
    pcVar8 = (char *)FUN_180267330(uVar9);
    if (*pcVar8 == '\0') {
      bVar13 = false;
    }
    else {
      cVar6 = FUN_18027deb0(uVar9,0);
      bVar13 = cVar6 != '\0';
    }
    fVar14 = DAT_180380fcc;
    fVar19 = DAT_180380bb0;
    if ((((param_7 >> 0xb & 1) == 0) && (fVar19 = DAT_1803809ec, !bVar12)) &&
       (fVar19 = DAT_180380bb0, bVar13)) {
      fVar19 = DAT_180380fcc;
    }
    FUN_180284310(uVar10);
    fVar19 = extraout_XMM0_Da * fVar19;
    if (iVar7 < 0) {
      if (param_3 <= DAT_180380920) {
        param_3 = DAT_180380920;
      }
    }
    else if (iVar7 < 10) {
      if (param_3 <= *(float *)(&DAT_1803806c0 + (longlong)iVar7 * 4)) {
        param_3 = *(float *)(&DAT_1803806c0 + (longlong)iVar7 * 4);
      }
    }
    else {
      fVar14 = powf(fVar14,(float)-iVar7);
      if (param_3 <= fVar14) {
        param_3 = fVar14;
      }
    }
  }
  else {
    fVar19 = 0.0;
  }
LAB_1802c994b:
  fVar19 = fVar19 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar19 = (float)((uint)fVar19 ^ DAT_1803817f0);
  }
  if (((uVar11 != 0) && (fVar14 = param_5 - param_4, fVar14 < fVar15)) && (DAT_180380938 < fVar14))
  {
    fVar19 = fVar19 / fVar14;
  }
  if (((!bVar4) || (bVar5)) ||
     (((*param_2 < param_5 || (fVar19 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar19)))))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((*(char *)(lVar2 + 0x15a0) != '\0') || (bVar12)) {
    *(undefined4 *)(lVar2 + 0x26c8) = 0;
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
  }
  else if (fVar19 != 0.0) {
    *(undefined1 *)(lVar2 + 0x26c5) = 1;
    *(float *)(lVar2 + 0x26c8) = fVar19 + *(float *)(lVar2 + 0x26c8);
  }
  if (*(char *)(lVar2 + 0x26c5) != '\0') {
    if (uVar11 == 0) {
      fVar15 = *param_2 + *(float *)(lVar2 + 0x26c8);
      fVar14 = 0.0;
    }
    else {
      if (bVar3) {
        iVar7 = FUN_1802b3320(param_6);
      }
      else {
        iVar7 = 1;
      }
      fVar15 = powf(DAT_1803809ec,(float)iVar7);
      uVar16 = FUN_1802ce550();
      fVar14 = (float)uVar16;
      auVar17._8_4_ = (int)extraout_XMM0_Qb;
      auVar17._0_8_ = uVar16;
      auVar17._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar18._4_12_ = auVar17._4_12_;
      auVar18._0_4_ = fVar14 + *(float *)(lVar2 + 0x26c8);
      FUN_1802ce830(param_1,auVar18._0_8_,param_4,param_5,fVar15,0);
      fVar15 = extraout_XMM0_Da_00;
    }
    if ((bVar3) && ((param_7 & 0x40) == 0)) {
      FUN_1802ceaa0(param_6);
      fVar15 = extraout_XMM0_Da_01;
    }
    *(undefined1 *)(lVar2 + 0x26c5) = 0;
    if (uVar11 == 0) {
      *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - (fVar15 - *param_2);
    }
    else {
      FUN_1802ce550();
      *(float *)(lVar2 + 0x26c8) = *(float *)(lVar2 + 0x26c8) - (extraout_XMM0_Da_02 - fVar14);
    }
    if (fVar15 == 0.0) {
      fVar15 = 0.0;
    }
    fVar14 = *param_2;
    if (fVar14 != fVar15) {
      if (bVar4) {
        if (bVar5) {
          if (fVar15 < param_4) {
            fVar15 = fVar15 + (float)!bVar3 + (param_5 - param_4);
          }
          if (param_5 < fVar15) {
            fVar15 = fVar15 - ((float)!bVar3 + (param_5 - param_4));
          }
        }
        else {
          if ((fVar15 < param_4) || (((fVar14 < fVar15 && (fVar19 < 0.0)) && (!bVar3)))) {
            fVar15 = param_4;
          }
          if ((param_5 < fVar15) || (((fVar15 < fVar14 && (0.0 < fVar19)) && (!bVar3)))) {
            fVar15 = param_5;
          }
        }
      }
      if (fVar14 != fVar15) {
        *param_2 = fVar15;
        return 1;
      }
    }
  }
  return 0;
}



// 0x1802851a0  FUN_1802851a0
// size=2106 thunk=false
// signature: undefined FUN_1802851a0()
// status: ok


void FUN_1802851a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  uVar13 = *(uint *)(lVar4 + 0x28);
  lVar5 = *(longlong *)(lVar4 + 0x2070);
  if (((uVar13 & 2) == 0) || ((*(byte *)(lVar4 + 0x2c) & 1) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(char *)(lVar4 + 0x2112) == '\0') || (lVar5 == 0)) {
    *(undefined4 *)(lVar4 + 0x2120) = 0xffffffff;
    *(undefined8 *)(lVar4 + 0x2114) = 0;
    if ((lVar5 != 0) &&
       ((*(longlong *)(lVar4 + 0x2258) == 0 && ((*(uint *)(lVar5 + 0x14) & 0x10000) == 0)))) {
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (((*(byte *)(*(longlong *)(lVar3 + 0xec0) + 0x1ea8) & 1) == 0) &&
         (((bVar6 && (cVar8 = FUN_18027bb30(0x27e,5,0xffffffff), cVar8 != '\0')) ||
          (((uVar13 & 1) != 0 && (cVar8 = FUN_18027bb30(0x201,5,0xffffffff), cVar8 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2120) = 0;
      }
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (((*(byte *)(*(longlong *)(lVar3 + 0xec0) + 0x1ea8) & 2) == 0) &&
         (((bVar6 && (cVar8 = FUN_18027bb30(0x27f,5,0xffffffff), cVar8 != '\0')) ||
          (((uVar13 & 1) != 0 && (cVar8 = FUN_18027bb30(0x202,5,0xffffffff), cVar8 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2120) = 1;
      }
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (((*(byte *)(*(longlong *)(lVar3 + 0xec0) + 0x1ea8) & 4) == 0) &&
         (((bVar6 && (cVar8 = FUN_18027bb30(0x280,5,0xffffffff), cVar8 != '\0')) ||
          (((uVar13 & 1) != 0 && (cVar8 = FUN_18027bb30(0x203,5,0xffffffff), cVar8 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2120) = 2;
      }
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (((*(byte *)(*(longlong *)(lVar3 + 0xec0) + 0x1ea8) & 8) == 0) &&
         (((bVar6 && (cVar8 = FUN_18027bb30(0x281,5,0xffffffff), cVar8 != '\0')) ||
          (((uVar13 & 1) != 0 && (cVar8 = FUN_18027bb30(0x204,5,0xffffffff), cVar8 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2120) = 3;
      }
    }
    *(undefined4 *)(lVar4 + 0x2128) = *(undefined4 *)(lVar4 + 0x2120);
    fVar14 = 0.0;
    *(undefined4 *)(lVar4 + 0x213c) = 0x7f7fffff;
    *(undefined4 *)(lVar4 + 0x2140) = 0x7f7fffff;
    *(undefined4 *)(lVar4 + 0x2144) = 0xff7fffff;
    *(undefined4 *)(lVar4 + 0x2148) = 0xff7fffff;
    if (lVar5 != 0) goto LAB_180285457;
  }
  else {
    if ((*(byte *)(lVar4 + 0x28e4) & 0x10) != 0) {
      FUN_180289170("[nav] NavMoveRequestForward %d\n",*(undefined4 *)(lVar4 + 0x2120));
    }
LAB_180285457:
    fVar14 = 0.0;
    if ((*(int *)(lVar4 + 0x2120) == -1) && ((uVar13 & 1) != 0)) {
      fVar14 = (float)FUN_180286050();
    }
  }
  fVar15 = 0.0;
  *(undefined1 *)(lVar4 + 0x2112) = 0;
  if (*(int *)(lVar4 + 0x2120) != -1) {
    FUN_180283a20(*(int *)(lVar4 + 0x2120),*(undefined4 *)(lVar4 + 0x2128),
                  *(undefined4 *)(lVar4 + 0x2114),*(undefined4 *)(lVar4 + 0x2118));
  }
  fVar7 = DAT_180381308;
  cVar8 = *(char *)(lVar4 + 0x2110);
  piVar1 = (int *)(lVar4 + 0x207c);
  if (cVar8 == '\0') {
LAB_18028574d:
    if (lVar5 == 0) {
LAB_180285958:
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar20 = 0.0;
      goto LAB_180285963;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x206c) == 0) {
      if ((*(byte *)(lVar4 + 0x28e4) & 0x10) != 0) {
        if (lVar5 == 0) {
          pcVar11 = "<NULL>";
        }
        else {
          pcVar11 = *(char **)(lVar5 + 8);
        }
        FUN_180289170("[nav] NavInitRequest: from move, window \"%s\", layer=%d\n",pcVar11,*piVar1);
        cVar8 = *(char *)(lVar4 + 0x2110);
      }
      *(undefined2 *)(lVar4 + 0x20d2) = 0x101;
      *(undefined4 *)(lVar4 + 0x20e0) = 0;
      if (*(char *)(lVar4 + 0x76) != '\0') {
        *(undefined1 *)(lVar4 + 0x2068) = 1;
      }
      if (cVar8 == '\0') goto LAB_18028574d;
    }
    if ((*(int *)(lVar4 + 0x20c0) != 3) || (*piVar1 != 0)) goto LAB_18028574d;
    if (lVar5 == 0) goto LAB_180285958;
    uVar13 = *(uint *)(lVar4 + 0x2114);
    fVar20 = *(float *)(lVar5 + 0x230);
    fVar22 = *(float *)(lVar5 + 0x234);
    fVar21 = *(float *)(lVar5 + 0x228);
    uVar12 = uVar13 & 10;
    fVar19 = *(float *)(lVar5 + 0x22c);
    fVar16 = *(float *)(lVar5 + 0x128);
    fVar18 = *(float *)(lVar5 + 300);
    pfVar9 = (float *)FUN_1802801e0(local_res8,lVar5);
    uVar13 = uVar13 & 5;
    if ((uVar13 != 0) && (uVar12 != 0)) goto LAB_18028574d;
    fVar15 = pfVar9[1] - *(float *)(lVar5 + 0x9c);
    fVar17 = *pfVar9 - *(float *)(lVar5 + 0x98);
    lVar10 = (longlong)*piVar1;
    fVar23 = ((fVar21 - DAT_180380bb0) - fVar16) + fVar17;
    fVar21 = ((fVar19 - DAT_180380bb0) - fVar18) + fVar15;
    fVar15 = ((fVar22 + DAT_180380bb0) - fVar18) + fVar15;
    fVar17 = ((fVar20 + DAT_180380bb0) - fVar16) + fVar17;
    if ((((*(float *)(lVar5 + 0x3f8 + lVar10 * 0x10) < fVar23) ||
         (*(float *)(lVar5 + 0x3fc + lVar10 * 0x10) < fVar21)) ||
        (fVar17 < *(float *)(lVar5 + 0x400 + lVar10 * 0x10))) ||
       (fVar15 < *(float *)(lVar5 + 0x404 + lVar10 * 0x10))) {
      if ((*(byte *)(lVar4 + 0x28e4) & 0x10) != 0) {
        FUN_180289170("[nav] NavMoveRequest: clamp NavRectRel for gamepad move\n");
      }
      fVar19 = *(float *)(lVar5 + 0x2c0) * DAT_180380ac0;
      fVar20 = DAT_180381454;
      fVar22 = fVar7;
      if (uVar13 == 0) {
        fVar22 = fVar17 - fVar23;
        if (fVar19 <= fVar17 - fVar23) {
          fVar22 = fVar19;
        }
        fVar20 = fVar22 + fVar23;
        fVar22 = fVar17 - fVar22;
      }
      fVar16 = DAT_180381454;
      fVar18 = fVar7;
      if (uVar12 == 0) {
        fVar18 = fVar15 - fVar21;
        if (fVar19 <= fVar15 - fVar21) {
          fVar18 = fVar19;
        }
        fVar16 = fVar18 + fVar21;
        fVar18 = fVar15 - fVar18;
      }
      lVar10 = (longlong)*piVar1;
      fVar15 = *(float *)(lVar5 + 0x3fc + lVar10 * 0x10);
      fVar21 = fVar16;
      if ((fVar16 <= fVar15) && (fVar21 = fVar18, fVar15 <= fVar18)) {
        fVar21 = fVar15;
      }
      fVar15 = *(float *)(lVar5 + 0x3f8 + lVar10 * 0x10);
      fVar19 = fVar20;
      if ((fVar20 <= fVar15) && (fVar19 = fVar22, fVar15 <= fVar22)) {
        fVar19 = fVar15;
      }
      *(float *)(lVar5 + 0x3f8 + lVar10 * 0x10) = fVar19;
      *(float *)(lVar5 + 0x3fc + lVar10 * 0x10) = fVar21;
      fVar15 = *(float *)(lVar5 + 0x404 + lVar10 * 0x10);
      if ((fVar16 <= fVar15) && (fVar16 = fVar18, fVar15 <= fVar18)) {
        fVar16 = fVar15;
      }
      fVar15 = *(float *)(lVar5 + 0x400 + lVar10 * 0x10);
      if ((fVar20 <= fVar15) && (fVar20 = fVar22, fVar15 <= fVar22)) {
        fVar20 = fVar15;
      }
      *(float *)(lVar5 + 0x400 + lVar10 * 0x10) = fVar20;
      *(float *)(lVar5 + 0x404 + lVar10 * 0x10) = fVar16;
      *(undefined4 *)(lVar4 + 0x206c) = 0;
    }
  }
  lVar10 = (longlong)*piVar1;
  fVar20 = *(float *)(lVar5 + 0x3f8 + lVar10 * 0x10);
  fVar22 = *(float *)(lVar5 + 0x400 + lVar10 * 0x10);
  if (fVar22 < fVar20) {
LAB_18028578d:
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar21 = *(float *)(lVar5 + 0x3fc + lVar10 * 0x10);
    fVar15 = *(float *)(lVar5 + 0x404 + lVar10 * 0x10);
    if (fVar15 < fVar21) goto LAB_18028578d;
  }
  fVar20 = fVar20 + *(float *)(lVar5 + 0x128);
  fVar21 = fVar21 + *(float *)(lVar5 + 300);
  fVar22 = fVar22 + *(float *)(lVar5 + 0x128);
  fVar15 = fVar15 + *(float *)(lVar5 + 300);
  if ((*(uint *)(lVar4 + 0x2114) >> 0xb & 1) != 0) {
    if ((((*(float *)(lVar5 + 0x228) <= fVar20) && (*(float *)(lVar5 + 0x22c) <= fVar21)) &&
        (fVar22 <= *(float *)(lVar5 + 0x230))) && (fVar15 <= *(float *)(lVar5 + 0x234))) {
      *(uint *)(lVar4 + 0x2114) = *(uint *)(lVar4 + 0x2114) | 0x20;
    }
    *(float *)(lVar4 + 0x2140) = fVar21;
    fVar21 = fVar21 + fVar14;
    *(float *)(lVar4 + 0x213c) = fVar20;
    *(float *)(lVar4 + 0x2144) = fVar22;
    fVar14 = fVar15 + fVar14;
    *(float *)(lVar4 + 0x2148) = fVar15;
    if (fVar21 < *(float *)(lVar4 + 0x2140)) {
      *(float *)(lVar4 + 0x2140) = fVar21;
    }
    bVar6 = fVar15 < fVar14;
    fVar15 = fVar14;
    if (bVar6) {
      *(float *)(lVar4 + 0x2148) = fVar14;
    }
  }
  if (*(char *)(lVar4 + 0x2110) != '\0') {
    uVar2 = *(undefined4 *)(lVar4 + 0x2114);
    uVar13 = *(uint *)(lVar4 + 0x2120);
    lVar10 = (longlong)*piVar1;
    lVar5 = *(longlong *)(lVar5 + 0x3d8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x2070);
    fVar14 = *(float *)(lVar3 + 0x128);
    fVar19 = *(float *)(lVar3 + 300);
    if (-1 < (char)uVar2) {
      if (*(float *)(lVar5 + 0x418 + lVar10 * 8) == fVar7) {
        fVar16 = fVar20 + DAT_180380bb0;
        if (fVar22 <= fVar20 + DAT_180380bb0) {
          fVar16 = fVar22;
        }
        *(float *)(lVar5 + 0x418 + lVar10 * 8) = fVar16 - fVar14;
      }
      if (*(float *)(lVar5 + 0x41c + lVar10 * 8) == fVar7) {
        *(float *)(lVar5 + 0x41c + lVar10 * 8) = (fVar15 + fVar21) * DAT_180380ac0 - fVar19;
      }
    }
    if ((uVar13 - 2 < 2) && (fVar16 = *(float *)(lVar5 + 0x418 + lVar10 * 8), fVar16 != fVar7)) {
      fVar20 = fVar16 + fVar14;
      fVar22 = fVar20;
    }
    else if ((uVar13 < 2) && (fVar14 = *(float *)(lVar5 + 0x41c + lVar10 * 8), fVar14 != fVar7)) {
      fVar21 = fVar14 + fVar19;
      fVar15 = fVar21;
    }
  }
LAB_180285963:
  *(float *)(lVar4 + 0x212c) = fVar20;
  *(float *)(lVar4 + 0x2130) = fVar21;
  *(float *)(lVar4 + 0x2134) = fVar22;
  *(float *)(lVar4 + 0x2138) = fVar15;
  return;
}



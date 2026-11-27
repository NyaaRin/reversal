// 0x180286710  FUN_180286710
// size=2873 thunk=false
// signature: undefined FUN_180286710()
// status: ok


void FUN_180286710(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  byte bVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_res10;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [18];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = 0;
  local_res10 = 0;
  bVar9 = false;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  lVar13 = FUN_180280f50();
  if (lVar13 == 0) {
    lVar14 = *(longlong *)(lVar3 + 0x2258);
  }
  else {
    *(undefined8 *)(lVar3 + 0x2258) = 0;
  }
  if ((*(longlong *)(lVar3 + 0x2260) != 0) && (lVar14 == 0)) {
    fVar27 = *(float *)(lVar3 + 0x2274) - *(float *)(lVar3 + 0x40) * DAT_180380fcc;
    if (fVar27 <= 0.0) {
      fVar27 = 0.0;
    }
    *(float *)(lVar3 + 0x2274) = fVar27;
    if ((*(float *)(lVar3 + 0x2294) <= 0.0) && (fVar27 <= 0.0)) {
      *(undefined8 *)(lVar3 + 0x2260) = 0;
    }
  }
  uVar20 = 0xffffffff;
  pcVar18 = "##NavUpdateWindowing";
  uVar23 = 0x23;
  do {
    pcVar18 = pcVar18 + 1;
    if ((((char)uVar23 == '#') && (*pcVar18 == 0x23)) && (pcVar18[1] == 0x23)) {
      uVar20 = 0xffffffff;
      pcVar18 = pcVar18 + 2;
    }
    else {
      uVar20 = (ulonglong)
               ((uint)(uVar20 >> 8) ^ *(uint *)(&DAT_180331380 + (uVar20 & 0xff ^ uVar23) * 4));
    }
    uVar23 = (ulonglong)(byte)*pcVar18;
  } while (*pcVar18 != 0);
  uVar17 = *(uint *)(lVar3 + 0x28);
  uVar19 = ~(uint)uVar20;
  if (((uVar17 & 2) == 0) || ((*(byte *)(lVar3 + 0x2c) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((lVar13 == 0) && (*(int *)(lVar3 + 0x224c) != 0)) &&
     (cVar10 = FUN_18027e2e0(*(int *)(lVar3 + 0x224c),0x2001,uVar19), cVar10 != '\0')) {
    bVar6 = true;
LAB_180286889:
    if ((*(int *)(lVar3 + 0x2250) == 0) ||
       (cVar10 = FUN_18027e2e0(*(int *)(lVar3 + 0x2250),0x2001,uVar19), cVar10 == '\0'))
    goto LAB_1802868a9;
    bVar7 = true;
  }
  else {
    bVar6 = false;
    if (lVar13 == 0) goto LAB_180286889;
LAB_1802868a9:
    bVar7 = false;
  }
  if (((bVar5) && (*(longlong *)(lVar3 + 0x2258) == 0)) &&
     (cVar10 = FUN_18027e2e0(0x27a,0x2000,uVar19), cVar10 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((lVar13 == 0) && (bVar5)) {
    bVar8 = true;
LAB_1802868eb:
    if ((*(longlong *)(lVar3 + 0x2258) != 0) || ((!bVar6 && (!bVar7)))) goto LAB_180286904;
    bVar22 = 1;
  }
  else {
    bVar8 = false;
    if (lVar13 == 0) goto LAB_1802868eb;
LAB_180286904:
    bVar22 = 0;
  }
  bVar24 = false;
  if (bVar5) {
    *(undefined1 *)(lVar3 + 0x227c) = 1;
    *(undefined4 *)(lVar3 + 0x2280) = 0x27a;
    *(undefined4 *)(lVar3 + 0x20c0) = 3;
    *(undefined4 *)(lVar3 + 0x2278) = 3;
  }
  if ((bVar8) || (bVar22 != 0)) {
    lVar14 = *(longlong *)(lVar3 + 0x2070);
    if ((lVar14 == 0) ||
       (((*(char *)(lVar14 + 0xcd) == '\0' || (lVar14 != *(longlong *)(lVar14 + 0x3c0))) ||
        (lVar13 = lVar14, (*(uint *)(lVar14 + 0x14) & 0x20000) != 0)))) {
      lVar14 = FUN_1802865a0(*(int *)(lVar3 + 0x14d0) + -1,0x80000001,0xffffffff);
      if (lVar14 == 0) goto LAB_180286a0e;
      lVar13 = *(longlong *)(lVar3 + 0x2070);
    }
    if ((bVar22 != 0) || (*(char *)(lVar3 + 0x224b) != '\0')) {
      uVar4 = *(undefined8 *)(lVar14 + 0x3c0);
      *(undefined8 *)(lVar3 + 0x2260) = uVar4;
      *(undefined8 *)(lVar3 + 0x2258) = uVar4;
    }
    *(undefined8 *)(lVar3 + 0x2270) = 0;
    *(undefined8 *)(lVar3 + 0x228c) = 0;
    *(undefined8 *)(lVar3 + 0x2284) = 0;
    iVar12 = (bVar22 ^ 1) + 2;
    bVar24 = lVar13 == 0;
    *(int *)(lVar3 + 0x20c0) = iVar12;
    *(int *)(lVar3 + 0x2278) = iVar12;
    if ((bVar6) || (bVar7)) {
      FUN_18027e0b0((*(uint *)(lVar3 + 0x2250) | *(uint *)(lVar3 + 0x224c)) & 0xf000,uVar19);
    }
  }
LAB_180286a0e:
  fVar26 = DAT_180380bb0;
  fVar29 = DAT_180380a3c;
  fVar27 = DAT_1803809c4;
  if (((*(longlong *)(lVar3 + 0x2258) != 0) || (*(char *)(lVar3 + 0x227c) != '\0')) &&
     (*(int *)(lVar3 + 0x2278) == 3)) {
    if (*(longlong *)(lVar3 + 0x2258) != 0) {
      fVar25 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x2270);
      *(float *)(lVar3 + 0x2270) = fVar25;
      fVar25 = (fVar25 - fVar29) / fVar27;
      if (0.0 <= fVar25) {
        fVar28 = fVar26;
        if (fVar25 <= fVar26) {
          fVar28 = fVar25;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar25 = *(float *)(lVar3 + 0x2274);
      if (*(float *)(lVar3 + 0x2274) <= fVar28) {
        fVar25 = fVar28;
      }
      *(float *)(lVar3 + 0x2274) = fVar25;
      cVar10 = FUN_18027bb30(0x283,1,0);
      cVar11 = FUN_18027bb30(0x282,1,0);
      if ((cVar11 != cVar10) && (!bVar24)) {
        FUN_180286640();
        *(undefined4 *)(lVar3 + 0x2274) = 0x3f800000;
      }
    }
    pcVar18 = (char *)FUN_180267330();
    if ((*pcVar18 == '\0') || (cVar10 = FUN_18027deb0(0x27a,0), cVar10 == '\0')) {
      if ((*(byte *)(lVar3 + 0x227c) &
          (*(float *)(lVar3 + 0x2274) <= fVar26 && fVar26 != *(float *)(lVar3 + 0x2274))) == 0) {
        local_res10 = *(longlong *)(lVar3 + 0x2258);
      }
      else if (*(longlong *)(lVar3 + 0x2070) != 0) {
        bVar9 = true;
      }
      *(undefined8 *)(lVar3 + 0x2258) = 0;
      *(undefined1 *)(lVar3 + 0x227c) = 0;
    }
  }
  lVar14 = local_res10;
  if ((*(longlong *)(lVar3 + 0x2258) != 0) && (*(int *)(lVar3 + 0x2278) == 2)) {
    fVar25 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x2270);
    uVar19 = 0xf000;
    if (*(uint *)(lVar3 + 0x224c) != 0) {
      uVar19 = *(uint *)(lVar3 + 0x224c);
    }
    *(float *)(lVar3 + 0x2270) = fVar25;
    uVar16 = 0xf000;
    if (*(uint *)(lVar3 + 0x2250) != 0) {
      uVar16 = *(uint *)(lVar3 + 0x2250);
    }
    fVar27 = (fVar25 - fVar29) / fVar27;
    if (0.0 <= fVar27) {
      if (fVar27 <= fVar26) {
        fVar26 = fVar27;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar27 = *(float *)(lVar3 + 0x2274);
    if (*(float *)(lVar3 + 0x2274) <= fVar26) {
      fVar27 = fVar26;
    }
    *(float *)(lVar3 + 0x2274) = fVar27;
    if (((!bVar6) && (!bVar7)) || (bVar24)) {
      if ((~*(uint *)(lVar3 + 0x120) & uVar16 & uVar19 & 0xf000) != 0) {
        lVar14 = *(longlong *)(lVar3 + 0x2258);
      }
    }
    else {
      FUN_180286640();
      lVar14 = local_res10;
    }
  }
  bVar6 = false;
  local_88 = 0x211;
  local_84 = 0x215;
  bVar5 = bVar6;
  if (((*(longlong *)(lVar3 + 0x2070) != 0) &&
      ((*(uint *)(*(longlong *)(lVar3 + 0x2070) + 0x14) & 0x10000) == 0)) &&
     (bVar5 = false, (uVar17 & 1) != 0)) {
    puVar21 = &local_88;
    do {
      uVar1 = *puVar21;
      cVar10 = FUN_18027bb30(uVar1,0,0xffffffff);
      if (cVar10 != '\0') {
        *(undefined4 *)(lVar3 + 0x2280) = uVar1;
        *(undefined1 *)(lVar3 + 0x227c) = 1;
        *(undefined4 *)(lVar3 + 0x20c0) = 2;
        *(undefined4 *)(lVar3 + 0x2278) = 2;
        bVar5 = true;
        break;
      }
      puVar21 = puVar21 + 1;
      bVar5 = bVar6;
    } while (puVar21 != local_80);
  }
  if ((*(char *)(lVar3 + 0x227c) == '\0') || (*(int *)(lVar3 + 0x2278) != 2)) goto LAB_180286f14;
  if ((*(int *)(lVar3 + 0xbd0) < 1) &&
     ((((*(char *)(lVar3 + 0x11c) == '\0' && (*(char *)(lVar3 + 0x11d) == '\0')) &&
       (*(char *)(lVar3 + 0x11f) == '\0')) &&
      ((bVar5 || (*(double *)(lVar3 + 0x15f0) != *(double *)(lVar3 + 0x10))))))) {
    uVar17 = *(uint *)(lVar3 + 0x2280);
    if (((uVar17 - 0x200 < 0x9b) || ((uVar17 == 0x1000 || (uVar17 == 0x2000)))) ||
       ((uVar17 == 0x4000 || (uVar17 == 0x8000)))) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar13 = *(longlong *)(lVar2 + 0xec0);
      if (((*(char *)(lVar13 + 0x1eac) == '\0') || (*(int *)(lVar13 + 0x1594) == -1)) ||
         (0x77 < uVar17 - 0x200)) {
        if ((uVar17 & 0xf000) != 0) {
          if (uVar17 == 0x1000) {
            uVar17 = 0x297;
          }
          else if (uVar17 == 0x2000) {
            uVar17 = 0x298;
          }
          else if (uVar17 == 0x4000) {
            uVar17 = 0x299;
          }
          else if (uVar17 == 0x8000) {
            uVar17 = 0x29a;
          }
        }
        if (*(int *)(lVar13 + -500 + (longlong)(int)uVar17 * 0xc) == -1) goto LAB_180286dd3;
      }
      goto LAB_180286df9;
    }
LAB_180286dd3:
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(int *)(*(longlong *)(lVar2 + 0xec0) + 0x1d38) != -1) goto LAB_180286df9;
  }
  else {
LAB_180286df9:
    *(undefined1 *)(lVar3 + 0x227c) = 0;
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x2280);
  pcVar18 = (char *)FUN_180267330(uVar1);
  if ((((0.0 < *(float *)(pcVar18 + 8) || *(float *)(pcVar18 + 8) == 0.0) && (*pcVar18 == '\0')) &&
      ((cVar10 = FUN_18027deb0(uVar1,0), cVar10 != '\0' && (*(char *)(lVar3 + 0x227c) != '\0')))) &&
     ((*(int *)(lVar3 + 0x1594) == 0 || (*(char *)(lVar3 + 0x15a1) != '\0')))) {
    pfVar15 = (float *)(lVar3 + 0xad8);
    if (pfVar15 == (float *)0x0) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pfVar15 = (float *)(*(longlong *)(lVar2 + 0xec0) + 0x100);
    }
    fVar27 = DAT_180381444;
    if ((*pfVar15 < DAT_180381444) || (pfVar15[1] < DAT_180381444)) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    pfVar15 = (float *)(lVar3 + 0x100);
    if (pfVar15 == (float *)0x0) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pfVar15 = (float *)(*(longlong *)(lVar2 + 0xec0) + 0x100);
    }
    if ((*pfVar15 < fVar27) || (pfVar15[1] < fVar27)) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x01';
    }
    if (cVar11 == cVar10) {
      bVar9 = true;
    }
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x2280);
  pcVar18 = (char *)FUN_180267330();
  if ((*pcVar18 == '\0') || (cVar10 = FUN_18027deb0(uVar1,0), cVar10 == '\0')) {
    *(undefined1 *)(lVar3 + 0x227c) = 0;
  }
LAB_180286f14:
  if ((*(longlong *)(lVar3 + 0x2258) != 0) &&
     ((*(byte *)(*(longlong *)(lVar3 + 0x2258) + 0x14) & 4) == 0)) {
    fVar29 = 0.0;
    fVar27 = 0.0;
    if ((*(int *)(lVar3 + 0x20c0) == 2) && (*(char *)(lVar3 + 0x11d) == '\0')) {
      lVar13 = FUN_180267330(0x204);
      fVar27 = *(float *)(lVar13 + 0xc);
      lVar13 = FUN_180267330(0x203);
      fVar27 = fVar27 - *(float *)(lVar13 + 0xc);
      lVar13 = FUN_180267330(0x202);
      fVar29 = *(float *)(lVar13 + 0xc);
      lVar13 = FUN_180267330();
      fVar29 = fVar29 - *(float *)(lVar13 + 0xc);
    }
    if (*(int *)(lVar3 + 0x20c0) == 3) {
      lVar13 = FUN_180267330(0x28b);
      fVar27 = *(float *)(lVar13 + 0xc);
      lVar13 = FUN_180267330(0x28a);
      fVar27 = fVar27 - *(float *)(lVar13 + 0xc);
      lVar13 = FUN_180267330(0x289);
      fVar29 = *(float *)(lVar13 + 0xc);
      lVar13 = FUN_180267330();
      fVar29 = fVar29 - *(float *)(lVar13 + 0xc);
    }
    if ((fVar29 != 0.0) || (fVar27 != 0.0)) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar26 = *(float *)(lVar3 + 0x40) * DAT_180381270 *
               *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1210);
      *(undefined1 *)(lVar3 + 0x2069) = 1;
      fVar29 = fVar29 * fVar26 + *(float *)(lVar3 + 0x2284);
      fVar27 = fVar27 * fVar26 + *(float *)(lVar3 + 0x2288);
      *(float *)(lVar3 + 0x2284) = fVar29;
      *(float *)(lVar3 + 0x2288) = fVar27;
      fVar29 = (float)(int)fVar29;
      fVar27 = (float)(int)fVar27;
      if ((fVar29 != 0.0) || (fVar27 != 0.0)) {
        lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x2258) + 0x3c0);
        local_res10 = CONCAT44(fVar27 + *(float *)(lVar13 + 0x2c),fVar29 + *(float *)(lVar13 + 0x28)
                              );
        FUN_1802795a0(lVar13,&local_res10,1);
        *(float *)(lVar3 + 0x2284) = *(float *)(lVar3 + 0x2284) - fVar29;
        *(float *)(lVar3 + 0x2288) = *(float *)(lVar3 + 0x2288) - fVar27;
      }
    }
  }
  if (lVar14 != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    if ((*(longlong *)(lVar2 + 0x2070) == 0) ||
       (lVar14 != *(longlong *)(*(longlong *)(lVar2 + 0x2070) + 0x3c0))) {
      FUN_18026ea90(0,0);
      FUN_180282bb0();
      FUN_180281320(lVar14,0);
      FUN_1802827b0(lVar14,1);
      lVar14 = *(longlong *)(lVar2 + 0x2070);
      if (*(int *)(lVar14 + 0x3f0) == 0) {
        FUN_180283e70(lVar14,0);
      }
      if (*(short *)(lVar14 + 0x176) == 2) {
        *(undefined4 *)(lVar2 + 0x207c) = 1;
      }
    }
    *(undefined8 *)(lVar2 + 0x2258) = 0;
  }
  if ((bVar9) && (*(longlong *)(lVar3 + 0x2070) != 0)) {
    FUN_18026ea90(0,0);
    lVar2 = *(longlong *)(lVar3 + 0x2070);
    lVar14 = lVar2;
    if (*(longlong *)(lVar2 + 0x3b0) != 0) {
      do {
        if (((*(byte *)(lVar14 + 0x174) & 2) != 0) ||
           ((*(uint *)(lVar14 + 0x14) & 0x15000000) != 0x1000000)) break;
        lVar14 = *(longlong *)(lVar14 + 0x3b0);
      } while (*(longlong *)(lVar14 + 0x3b0) != 0);
      if (lVar14 != lVar2) {
        FUN_1802827b0(lVar14,0);
        *(longlong *)(lVar14 + 1000) = lVar2;
      }
    }
    if ((*(byte *)(*(longlong *)(lVar3 + 0x2070) + 0x174) & 2) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(uint *)(lVar3 + 0x207c) ^ 1;
    }
    if (uVar17 != *(uint *)(lVar3 + 0x207c)) {
      if (uVar17 == 1) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x2070) + 0x3f4) = 0;
      }
      FUN_180283d20();
      FUN_180282bb0();
    }
  }
  return;
}



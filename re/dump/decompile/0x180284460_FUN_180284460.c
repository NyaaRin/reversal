// 0x180284460  FUN_180284460
// size=3380 thunk=false
// signature: undefined FUN_180284460()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180284460(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  byte bVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_f8 [32];
  char local_d8;
  byte local_d7;
  uint local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88 [12];
  
  local_88[0] = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_d0 = lVar14;
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar14 + 0xec0);
  *(undefined1 *)(lVar1 + 0xd3) = 0;
  if (((*(byte *)(lVar1 + 0x28) & 2) == 0) || ((*(byte *)(lVar1 + 0x2c) & 1) == 0)) {
    cVar11 = '\0';
    local_d8 = '\0';
  }
  else {
    puVar19 = &local_a8;
    cVar11 = '\x01';
    local_a8 = _DAT_180381590;
    uStack_a0 = _UNK_180381598;
    local_d8 = '\x01';
    local_98 = _DAT_1803815a0;
    uStack_90 = _UNK_1803815a8;
    do {
      uVar8 = *puVar19;
      pcVar13 = (char *)FUN_180267330((int)uVar8);
      if ((*pcVar13 != '\0') && (cVar9 = FUN_18027deb0((int)uVar8,0), cVar9 != '\0')) {
        *(undefined4 *)(lVar1 + 0x20c0) = 3;
      }
      puVar19 = (ulonglong *)((longlong)puVar19 + 4);
    } while (puVar19 != local_88);
  }
  bVar21 = *(byte *)(lVar1 + 0x28) & 1;
  local_c8 = _DAT_180381560;
  uStack_c0 = _UNK_180381568;
  local_b8 = 0x201;
  local_b4 = 0x203;
  local_b0 = 0x204;
  local_d7 = bVar21;
  if (bVar21 != 0) {
    puVar20 = &local_c8;
    do {
      uVar24 = *(undefined4 *)puVar20;
      pcVar13 = (char *)FUN_180267330(uVar24);
      if ((*pcVar13 != '\0') && (cVar9 = FUN_18027deb0(uVar24,0), cVar9 != '\0')) {
        *(undefined4 *)(lVar1 + 0x20c0) = 2;
      }
      puVar20 = (undefined8 *)((longlong)puVar20 + 4);
    } while (puVar20 != (undefined8 *)local_ac);
  }
  *(undefined8 *)(lVar1 + 0x2238) = 0;
  *(undefined4 *)(lVar1 + 0x2240) = 0;
  if (*(int *)(lVar1 + 0x20e0) != 0) {
    if (*(char *)(lVar14 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar14 + 0xec0);
    if (*(longlong *)(lVar2 + 0x2070) != 0) {
      iVar12 = *(int *)(lVar2 + 0x20e0);
      if (*(int *)(lVar2 + 0x206c) != iVar12) {
        *(undefined4 *)(lVar2 + 0x2238) = *(undefined4 *)(lVar2 + 0x2078);
        *(int *)(lVar2 + 0x223c) = iVar12;
        *(undefined4 *)(lVar2 + 0x2240) = *(undefined4 *)(lVar2 + 0x20e4);
        *(undefined4 *)(lVar2 + 0x2244) = 0;
        *(undefined1 *)(lVar2 + 0x2248) = 0;
        *(byte *)(lVar2 + 0x2249) = (byte)(*(uint *)(lVar2 + 0x20f8) >> 0x15) & 1;
      }
      if ((*(byte *)(lVar2 + 0x28e4) & 0x10) != 0) {
        FUN_180289170("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n",
                      iVar12,*(undefined4 *)(lVar2 + 0x207c),
                      *(undefined8 *)(*(longlong *)(lVar2 + 0x2070) + 8));
      }
      FUN_180282d70(*(undefined4 *)(lVar2 + 0x20e0),*(undefined4 *)(lVar2 + 0x207c),
                    *(undefined4 *)(lVar2 + 0x20e4),lVar2 + 0x20e8);
      *(undefined1 *)(lVar2 + 0x206b) = 1;
      if (*(longlong *)(lVar2 + 0x2108) != -1) {
        *(longlong *)(lVar2 + 0x20c8) = *(longlong *)(lVar2 + 0x2108);
      }
      if (*(char *)(lVar2 + 0x20d3) != '\0') {
        FUN_180282bb0();
      }
    }
  }
  *(undefined2 *)(lVar1 + 0x20d2) = 0;
  *(undefined4 *)(lVar1 + 0x20e0) = 0;
  if (*(char *)(lVar1 + 0x2110) != '\0') {
    FUN_1802859e0();
  }
  *(undefined4 *)(lVar1 + 0x2154) = 0;
  *(undefined2 *)(lVar1 + 0x2110) = 0;
  if (('\0' < *(char *)(lVar1 + 0x20d0)) &&
     (cVar9 = *(char *)(lVar1 + 0x20d0) + -1, *(char *)(lVar1 + 0x20d0) = cVar9, cVar9 == '\0')) {
    *(undefined1 *)(lVar1 + 0x2068) = 1;
  }
  local_d4 = 0;
  if ((((*(char *)(lVar1 + 0x206a) != '\0') && (*(char *)(lVar1 + 0x206b) != '\0')) &&
      (*(char *)(lVar1 + 0x2068) != '\0')) && (*(char *)(lVar1 + 0x2069) != '\0')) {
    local_d4 = (uint)(*(longlong *)(lVar1 + 0x2070) != 0);
  }
  lVar2 = *(longlong *)(lVar1 + 0x2070);
  *(undefined1 *)(lVar1 + 0x206a) = 0;
  for (lVar15 = lVar2; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x3b0)) {
    if ((*(longlong *)(lVar15 + 0x3c0) == lVar15) || ((*(uint *)(lVar15 + 0x14) & 0x14000000) != 0))
    {
      if (lVar15 != lVar2) {
        *(longlong *)(lVar15 + 1000) = lVar2;
      }
      break;
    }
  }
  lVar2 = *(longlong *)(lVar1 + 0x2070);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 1000) != 0)) && (*(int *)(lVar1 + 0x207c) == 0)) {
    *(undefined8 *)(lVar2 + 1000) = 0;
  }
  FUN_180286710();
  if ((((bVar21 == 0) && (cVar11 == '\0')) || (*(longlong *)(lVar1 + 0x2070) == 0)) ||
     ((*(uint *)(*(longlong *)(lVar1 + 0x2070) + 0x14) & 0x10000) != 0)) {
    *(undefined1 *)(lVar1 + 0xd5) = 0;
LAB_18028489f:
    if (*(longlong *)(lVar1 + 0x2258) != 0) goto LAB_1802847fa;
    uVar10 = 0;
  }
  else {
    *(undefined1 *)(lVar1 + 0xd5) = 1;
    if ((*(int *)(lVar1 + 0x206c) == 0) || (*(char *)(lVar1 + 0x2068) == '\0')) goto LAB_18028489f;
LAB_1802847fa:
    uVar10 = 1;
  }
  *(undefined1 *)(lVar1 + 0xd6) = uVar10;
  FUN_180285df0();
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar14 + 0xec0);
  *(undefined8 *)(lVar2 + 0x20b0) = 0;
  bVar6 = true;
  if (((*(byte *)(lVar2 + 0x28) & 1) != 0) && (*(longlong *)(lVar2 + 0x2070) != 0)) {
    local_d8 = cVar11;
    pcVar13 = (char *)FUN_180267330(0x217);
    if (((0.0 < *(float *)(pcVar13 + 8) || *(float *)(pcVar13 + 8) == 0.0) &&
        ((*pcVar13 == '\0' && (cVar9 = FUN_18027deb0(0x217,0xffffffff), cVar9 != '\0')))) ||
       ((cVar9 = FUN_18027bb30(0x245,0,0xffffffff), cVar9 != '\0' &&
        (*(int *)(lVar2 + 0x120) == 0x2000)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
      local_d8 = cVar11;
    }
    cVar9 = FUN_18027bb30(0x27c,0,0xffffffff);
    if (cVar9 != '\0' || bVar5) {
      plVar3 = *(longlong **)(lVar2 + 0x2070);
      *(undefined4 *)(lVar2 + 0x20b0) = *(undefined4 *)(lVar2 + 0x206c);
      *(int *)(lVar2 + 0x20b4) = (int)plVar3[2];
      iVar12 = FUN_180268980("#CLOSE",0,
                             *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
      if (*(int *)(*plVar3 + 0x1578) == iVar12) {
        FUN_1802899e0(iVar12,0xb,"#CLOSE");
      }
      if (*(int *)(lVar2 + 0x206c) == iVar12) {
LAB_18028498f:
        *(undefined4 *)(lVar2 + 0x20b0) = *(undefined4 *)(*(longlong *)(lVar2 + 0x2070) + 0x8c);
      }
      else {
        plVar3 = *(longlong **)(lVar2 + 0x2070);
        iVar12 = FUN_180268980("#COLLAPSE",0,
                               *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4))
        ;
        if (*(int *)(*plVar3 + 0x1578) == iVar12) {
          FUN_1802899e0(iVar12,0xb,"#COLLAPSE");
        }
        if (*(int *)(lVar2 + 0x206c) == iVar12) goto LAB_18028498f;
      }
      *(undefined4 *)(lVar2 + 0x20c0) = 2;
      FUN_180282bb0();
    }
  }
  bVar21 = local_d7;
  *(undefined8 *)(lVar1 + 0x2088) = 0;
  *(undefined4 *)(lVar1 + 0x2084) = 0;
  *(undefined4 *)(lVar1 + 0x2090) = 0;
  if ((((*(int *)(lVar1 + 0x206c) == 0) || (*(char *)(lVar1 + 0x2068) == '\0')) ||
      (*(longlong *)(lVar1 + 0x2258) != 0)) ||
     ((*(longlong *)(lVar1 + 0x2070) == 0 ||
      ((*(uint *)(*(longlong *)(lVar1 + 0x2070) + 0x14) & 0x10000) != 0)))) goto LAB_180284c72;
  if ((local_d7 == 0) ||
     ((pcVar13 = (char *)FUN_180267330(0x20c), *pcVar13 == '\0' ||
      (cVar9 = FUN_18027deb0(0x20c,0xffffffff), cVar9 == '\0')))) {
    if (cVar11 != '\0') {
      uVar18 = 0x27d;
      if (*(char *)(lVar1 + 0x71) != '\0') {
        uVar18 = 0x27b;
      }
      pcVar13 = (char *)FUN_180267330(uVar18);
      if ((*pcVar13 != '\0') && (cVar9 = FUN_18027deb0(uVar18,0xffffffff), cVar9 != '\0'))
      goto LAB_180284a78;
    }
    bVar5 = false;
LAB_180284abf:
    bVar6 = bVar5;
    bVar7 = false;
  }
  else {
LAB_180284a78:
    bVar7 = bVar6;
    if ((bVar21 == 0) || (cVar9 = FUN_18027bb30(0x20c,0,0xffffffff), cVar9 == '\0')) {
      bVar5 = bVar6;
      if (cVar11 != '\0') {
        uVar18 = 0x27d;
        if (*(char *)(lVar1 + 0x71) != '\0') {
          uVar18 = 0x27b;
        }
        cVar11 = FUN_18027bb30(uVar18,0,0xffffffff);
        bVar5 = true;
        if (cVar11 != '\0') goto LAB_180284ac2;
      }
      goto LAB_180284abf;
    }
  }
LAB_180284ac2:
  if ((bVar21 == 0) ||
     ((cVar11 = FUN_18027bb30(0x20d,0,0xffffffff), cVar11 == '\0' &&
      (cVar11 = FUN_18027bb30(0x273,0,0xffffffff), cVar11 == '\0')))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  bVar4 = false;
  if ((bVar6) && (local_d8 != '\0')) {
    uVar23 = 0x27d;
    uVar24 = uVar23;
    if (*(char *)(lVar1 + 0x71) != '\0') {
      uVar24 = 0x27b;
    }
    pcVar13 = (char *)FUN_180267330(uVar24);
    if (((*pcVar13 != '\0') && (cVar11 = FUN_18027deb0(uVar24,0xffffffff), cVar11 != '\0')) &&
       ((*(uint *)(lVar1 + 0x2080) & 0x100000) != 0)) {
      uVar24 = uVar23;
      if (*(char *)(lVar1 + 0x71) != '\0') {
        uVar24 = 0x27b;
      }
      lVar14 = FUN_180267330(uVar24);
      fVar26 = DAT_180380ae4;
      if (*(float *)(lVar14 + 8) <= DAT_180380ae4 && DAT_180380ae4 != *(float *)(lVar14 + 8)) {
        if (*(char *)(lVar1 + 0x71) != '\0') {
          uVar23 = 0x27b;
        }
        lVar14 = FUN_180267330(uVar23);
        bVar4 = fVar26 <= *(float *)(lVar14 + 4);
      }
    }
  }
  lVar14 = local_d0;
  iVar12 = *(int *)(lVar1 + 0x1594);
  if (iVar12 == 0) {
    if (bVar7) {
      *(undefined4 *)(lVar1 + 0x2084) = *(undefined4 *)(lVar1 + 0x206c);
      *(undefined4 *)(lVar1 + 0x2090) = 2;
    }
  }
  else if (iVar12 != *(int *)(lVar1 + 0x206c)) goto LAB_180284c72;
  if ((bVar5) || (bVar4)) {
    *(undefined4 *)(lVar1 + 0x2084) = *(undefined4 *)(lVar1 + 0x206c);
    *(undefined4 *)(lVar1 + 0x2090) = 1;
  }
  if ((iVar12 == 0) || (iVar12 == *(int *)(lVar1 + 0x206c))) {
    if ((bVar6) || ((bVar5 || (bVar4)))) {
      *(undefined4 *)(lVar1 + 0x2088) = *(undefined4 *)(lVar1 + 0x206c);
    }
    if (((iVar12 == 0) || (iVar12 == *(int *)(lVar1 + 0x206c))) && ((bVar7 || ((bVar5 || (bVar4)))))
       ) {
      uVar24 = *(undefined4 *)(lVar1 + 0x206c);
      *(undefined4 *)(lVar1 + 0x208c) = uVar24;
      if (*(char *)(local_d0 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar14 + 0xec0);
      *(undefined4 *)(lVar2 + 0x20a8) = uVar24;
      *(undefined4 *)(lVar2 + 0x20ac) = 0x3dcccccd;
    }
  }
LAB_180284c72:
  if ((*(longlong *)(lVar1 + 0x2070) == 0) ||
     ((*(uint *)(*(longlong *)(lVar1 + 0x2070) + 0x14) & 0x10000) == 0)) {
    if ((*(char *)(lVar1 + 0x77) != '\0') && (*(char *)(lVar1 + 0x20d0) == '\0')) {
      *(undefined1 *)(lVar1 + 0x2068) = 1;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x2068) = 0;
  }
  fVar26 = *(float *)(lVar1 + 0x20ac);
  if (0.0 < fVar26) {
    fVar25 = fVar26 - *(float *)(lVar1 + 0x40);
    fVar26 = 0.0;
    if (0.0 <= fVar25) {
      fVar26 = fVar25;
    }
    *(float *)(lVar1 + 0x20ac) = fVar26;
  }
  uVar22 = 0;
  if (fVar26 == 0.0) {
    *(undefined4 *)(lVar1 + 0x20a8) = 0;
  }
  iVar12 = *(int *)(lVar1 + 0x20b8);
  if (iVar12 != 0) {
    *(int *)(lVar1 + 0x208c) = iVar12;
    *(int *)(lVar1 + 0x2088) = iVar12;
    *(int *)(lVar1 + 0x2084) = iVar12;
    *(undefined4 *)(lVar1 + 0x2090) = *(undefined4 *)(lVar1 + 0x20bc);
  }
  *(undefined4 *)(lVar1 + 0x20b8) = 0;
  FUN_1802851a0();
  if (*(int *)(lVar1 + 0x2120) == -1) {
    if (*(char *)(lVar14 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar14 + 0xec0);
    lVar15 = *(longlong *)(lVar2 + 0x2070);
    if ((((((lVar15 != 0) && (*(longlong *)(lVar2 + 0x2258) == 0)) &&
          ((*(uint *)(lVar15 + 0x14) & 0x10000) == 0)) &&
         ((*(char *)(lVar2 + 0x224a) != '\0' &&
          (cVar11 = FUN_18027bb30(0x200,1,0xffffffff), cVar11 != '\0')))) &&
        (*(char *)(lVar2 + 0x11c) == '\0')) && (*(char *)(lVar2 + 0x11e) == '\0')) {
      if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
        if (*(char *)(lVar2 + 0x11d) == '\0') {
          uVar22 = (uint)(*(int *)(lVar2 + 0x1594) != 0);
        }
        else {
          uVar22 = 0xffffffff;
        }
      }
      else if (*(char *)(lVar2 + 0x11d) == '\0') {
        if ((*(char *)(lVar2 + 0x2068) != '\0') || (*(int *)(lVar2 + 0x1594) != 0)) {
          uVar22 = 1;
        }
      }
      else {
        uVar22 = 0xffffffff;
      }
      *(uint *)(lVar2 + 0x2150) = uVar22;
      uVar24 = 3;
      if (*(char *)(lVar15 + 0xd3) != '\0') {
        uVar24 = 0x21;
      }
      FUN_180283a20(0xffffffff,((int)uVar22 >> 0x1f) + 3,0x1400,uVar24);
      *(undefined4 *)(lVar2 + 0x2154) = 0xffffffff;
    }
  }
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar14 + 0xec0);
  if ((*(char *)(lVar2 + 0x2111) == '\0') && (*(char *)(lVar2 + 0x20d2) == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)(lVar2 + 0x20d1) = uVar10;
  lVar2 = *(longlong *)(lVar1 + 0x2070);
  *(undefined1 *)(lVar1 + 0x206b) = 0;
  fVar26 = DAT_180381384;
  fVar25 = DAT_180380bb0;
  if (((lVar2 != 0) && ((*(uint *)(lVar2 + 0x14) & 0x10000) == 0)) &&
     (*(longlong *)(lVar1 + 0x2258) == 0)) {
    fVar29 = (float)(int)(*(float *)(lVar2 + 0x2c0) * DAT_180381120 * *(float *)(lVar1 + 0x40) +
                         DAT_180380ac0);
    if (((*(short *)(lVar2 + 0x174) == 0) && (*(char *)(lVar2 + 0x17a) != '\0')) &&
       (iVar12 = *(int *)(lVar1 + 0x2120), iVar12 != -1)) {
      fVar27 = DAT_180381384;
      if ((iVar12 == 0) || (fVar27 = DAT_180380bb0, iVar12 == 1)) {
        *(undefined4 *)(lVar2 + 0xb0) = 0;
        *(undefined4 *)(lVar2 + 0xb8) = 0;
        *(float *)(lVar2 + 0xa8) = (float)(int)(fVar29 * fVar27 + *(float *)(lVar2 + 0x98));
      }
      if ((iVar12 == 2) || (fVar26 = fVar25, iVar12 == 3)) {
        *(undefined4 *)(lVar2 + 0xb4) = 0;
        *(undefined4 *)(lVar2 + 0xbc) = 0;
        *(float *)(lVar2 + 0xac) = (float)(int)(fVar29 * fVar26 + *(float *)(lVar2 + 0x9c));
      }
    }
    if (local_d8 != '\0') {
      lVar15 = FUN_180267330(0x28b);
      lVar16 = FUN_180267330(0x28a);
      fVar26 = *(float *)(lVar15 + 0xc) - *(float *)(lVar16 + 0xc);
      lVar15 = FUN_180267330(0x289);
      lVar16 = FUN_180267330(0x288);
      fVar27 = *(float *)(lVar15 + 0xc) - *(float *)(lVar16 + 0xc);
      pcVar13 = (char *)FUN_180267330(0x282);
      if ((((*pcVar13 == '\0') ||
           (cVar11 = FUN_18027deb0(0x282,0), fVar28 = DAT_1803809ec, cVar11 == '\0')) &&
          (pcVar13 = (char *)FUN_180267330(0x283), fVar28 = fVar25, *pcVar13 != '\0')) &&
         (cVar11 = FUN_18027deb0(0x283,0), cVar11 != '\0')) {
        fVar28 = DAT_180380fcc;
      }
      if ((fVar27 != 0.0) && (*(char *)(lVar2 + 200) != '\0')) {
        *(undefined4 *)(lVar2 + 0xb0) = 0;
        *(undefined4 *)(lVar2 + 0xb8) = 0;
        *(float *)(lVar2 + 0xa8) = (float)(int)(fVar27 * fVar29 * fVar28 + *(float *)(lVar2 + 0x98))
        ;
      }
      if (fVar26 != 0.0) {
        *(undefined4 *)(lVar2 + 0xb4) = 0;
        *(undefined4 *)(lVar2 + 0xbc) = 0;
        *(float *)(lVar2 + 0xac) = (float)(int)(fVar26 * fVar29 * fVar28 + *(float *)(lVar2 + 0x9c))
        ;
      }
    }
  }
  if ((local_d7 == 0) && (local_d8 == '\0')) {
    *(undefined2 *)(lVar1 + 0x2068) = 0;
  }
  else if (((char)local_d4 != '\0') &&
          ((*(char *)(lVar1 + 0x72) != '\0' && ((*(byte *)(lVar1 + 0x2c) & 4) != 0)))) {
    puVar17 = (undefined4 *)FUN_180284040(&local_d0,0x4000000);
    if (*(char *)(lVar14 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = *(longlong *)(lVar14 + 0xec0);
    uVar24 = *puVar17;
    uVar23 = puVar17[1];
    *(undefined4 *)(lVar14 + 0xad8) = uVar24;
    *(undefined4 *)(lVar14 + 0xadc) = uVar23;
    *(undefined4 *)(lVar14 + 0x100) = uVar24;
    *(undefined4 *)(lVar14 + 0x104) = uVar23;
    *(undefined8 *)(lVar14 + 0xec) = 0;
    *(undefined1 *)(lVar14 + 0xd3) = 1;
  }
  *(undefined4 *)(lVar1 + 0x214c) = 0;
  return;
}



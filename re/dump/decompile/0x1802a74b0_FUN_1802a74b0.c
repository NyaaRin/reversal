// 0x1802a74b0  FUN_1802a74b0
// size=2404 thunk=false
// signature: undefined FUN_1802a74b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a74b0(char *param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  char *pcVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  char *pcVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_198 [32];
  char *local_178;
  char *local_170;
  float *local_168;
  char *local_160;
  undefined8 local_158;
  undefined4 local_148;
  int local_138;
  char local_134;
  float local_130;
  int local_12c;
  longlong local_128;
  float local_120;
  float local_11c;
  longlong *local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  char *local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  char local_e8;
  char local_e7 [3];
  char local_e4 [4];
  longlong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar15 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar15 + 0xec0);
  local_118 = *(longlong **)(lVar5 + 0x1520);
  if (*(char *)((longlong)local_118 + 0xd1) != '\0') {
    return;
  }
  lVar6 = *(longlong *)(lVar5 + 0x2368);
  if (lVar6 == 0) {
    FUN_18027e9c0("Call should only be done while in BeginTable() scope!");
    return;
  }
  local_138 = *(int *)(lVar6 + 0x74);
  lVar19 = *(longlong *)(lVar6 + 0x18);
  lVar20 = (longlong)local_138 * 0x74;
  pcVar22 = "";
  if (param_1 != (char *)0x0) {
    pcVar22 = param_1;
  }
  pcVar17 = pcVar22;
  if (pcVar22 != (char *)0xffffffffffffffff) {
    while (*pcVar17 != '\0') {
      pcVar1 = pcVar17 + 1;
      if (((*pcVar17 == '#') && (*pcVar1 == '#')) ||
         (pcVar17 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  local_128 = lVar19;
  local_100 = pcVar22;
  if (*(char *)(lVar15 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar8 = DAT_180381384;
  uVar11 = DAT_180381308;
  fVar25 = DAT_180380ba8;
  fVar2 = *(float *)(*(longlong *)(lVar15 + 0xec0) + 0x1238);
  if (pcVar22 == pcVar17) {
    fVar26 = 0.0;
    local_10c = fVar2;
  }
  else {
    local_148 = 0;
    local_158 = 0;
    local_178 = (char *)CONCAT44(local_178._4_4_,DAT_180381384);
    local_170 = pcVar22;
    local_168 = (float *)pcVar17;
    local_160 = pcVar17;
    FUN_18029e350(&local_110,*(undefined8 *)(*(longlong *)(lVar15 + 0xec0) + 0x1228),fVar2,
                  DAT_180381308);
    fVar26 = (float)(int)(local_110 + fVar25);
  }
  bVar23 = false;
  local_e0 = local_118[0x23];
  fVar2 = *(float *)(lVar6 + 0x7c);
  fVar28 = *(float *)(*(longlong *)(lVar6 + 0x18) + 8 + lVar20);
  fVar29 = *(float *)(*(longlong *)(lVar6 + 0x18) + 0xc + lVar20);
  if (fVar28 <= *(float *)(lVar6 + 0x110)) {
    fVar28 = *(float *)(lVar6 + 0x110);
  }
  if (*(float *)(lVar6 + 0x118) <= fVar29) {
    fVar29 = *(float *)(lVar6 + 0x118);
  }
  fVar3 = *(float *)(lVar6 + 0x80);
  fVar24 = *(float *)(lVar6 + 0x84) - (*(float *)(lVar6 + 0x88) + *(float *)(lVar6 + 0x88));
  local_e4[0] = '\0';
  local_e4[1] = '\0';
  local_e4[2] = '\0';
  local_e4[3] = 0;
  fVar27 = local_10c;
  if (local_10c <= fVar24) {
    fVar27 = fVar24;
  }
  local_110 = 0.0;
  local_130 = 0.0;
  local_108 = fVar26;
  local_104 = local_10c;
  if (((*(byte *)(lVar6 + 4) & 8) != 0) && ((*(uint *)(lVar19 + lVar20) & 0x200) == 0)) {
    sVar13 = *(short *)(lVar19 + 0x5e + lVar20);
    bVar23 = sVar13 != -1;
    local_130 = (float)(int)(*(float *)(lVar5 + 0x1238) * DAT_180380afc + *(float *)(lVar5 + 0xcc4))
    ;
    if (0 < sVar13) {
      FUN_180268750(local_e4,4,&DAT_18033f570,sVar13 + 1);
      if (*(char *)(lVar15 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_148 = 0;
      local_158 = 0;
      local_160 = (char *)0x0;
      local_168 = (float *)0x0;
      local_170 = local_e4;
      local_178 = (char *)CONCAT44(local_178._4_4_,uVar8);
      FUN_18029e350(&local_120,*(undefined8 *)(*(longlong *)(lVar15 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar15 + 0xec0) + 0x1238),uVar11);
      local_110 = (float)(int)(local_120 + fVar25) + *(float *)(lVar5 + 0xcdc);
    }
  }
  fVar26 = fVar26 + (float)local_e0 + local_110 + local_130;
  fVar25 = fVar29;
  if ((!bVar23) && (fVar25 = fVar26, fVar29 <= fVar26)) {
    fVar25 = fVar29;
  }
  fVar24 = *(float *)(lVar19 + 0x4c + lVar20);
  if (fVar24 <= fVar25) {
    fVar24 = fVar25;
  }
  fVar25 = *(float *)(lVar19 + 0x50 + lVar20);
  if (fVar25 <= fVar26) {
    fVar25 = fVar26;
  }
  *(float *)(lVar19 + 0x4c + lVar20) = fVar24;
  *(float *)(lVar19 + 0x50 + lVar20) = fVar25;
  iVar10 = FUN_180268980(local_100,0,
                         *(undefined4 *)(local_118[0x22] + -4 + (longlong)(int)local_118[0x21] * 4))
  ;
  local_12c = iVar10;
  if (*(int *)(*local_118 + 0x1578) == iVar10) {
    FUN_1802899e0(iVar10,0xb,local_100);
  }
  local_120 = 0.0;
  fVar25 = *(float *)(lVar5 + 0xce8) + *(float *)(lVar5 + 0xce8) + fVar2 + fVar27;
  local_ec = fVar3;
  if (fVar3 <= fVar25) {
    local_ec = fVar25;
  }
  local_11c = fVar27;
  local_f8 = fVar28;
  local_f4 = fVar2;
  local_f0 = fVar29;
  FUN_18027f400(&local_120);
  cVar9 = FUN_18027f160(&local_f8,iVar10,0,0);
  if (cVar9 == '\0') {
    return;
  }
  sVar13 = *(short *)(lVar6 + 0x20e);
  local_178 = (char *)CONCAT44(local_178._4_4_,0x1000);
  local_134 = FUN_1802ab600(&local_f8,local_12c,local_e7,&local_e8);
  if (local_e8 == '\0') {
    if ((local_e7[0] != '\0') || (sVar13 == local_138)) {
      cVar9 = (local_e7[0] != '\0') + '\x19';
      goto LAB_1802a79d8;
    }
    if ((*(byte *)(lVar6 + 0x94) & 1) != 0) goto LAB_1802a7a9b;
    uVar21 = *(uint *)(lVar6 + 0x74);
    iVar10 = FUN_18026a6a0(0x2e);
    if (*(char *)(lVar15 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0xec0) + 0x2368);
    if (lVar15 == 0) goto LAB_1802a7a0d;
    if (iVar10 == 0x1000000) {
      iVar10 = 0;
    }
  }
  else {
    cVar9 = '\x1b';
LAB_1802a79d8:
    iVar10 = FUN_18026a6a0(cVar9);
    uVar21 = *(uint *)(lVar6 + 0x74);
    if (*(char *)(lVar15 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0xec0) + 0x2368);
    if (lVar15 == 0) {
LAB_1802a7a0d:
      FUN_18027e9c0("Call should only be done while in BeginTable() scope!");
      lVar19 = local_128;
      goto LAB_1802a7a9b;
    }
    if (iVar10 == 0x1000000) {
      iVar10 = 0;
    }
  }
  lVar19 = local_128;
  if (*(float *)(lVar15 + 0x7c) < *(float *)(lVar15 + 300) ||
      *(float *)(lVar15 + 0x7c) == *(float *)(lVar15 + 300)) {
    if (uVar21 == 0xffffffff) {
      uVar21 = *(uint *)(lVar15 + 0x74);
    }
    if ((*(uint *)(*(longlong *)(lVar15 + 0x58) + ((longlong)(int)uVar21 >> 5) * 4) >>
         (uVar21 & 0x1f) & 1) != 0) {
      sVar13 = *(short *)(lVar15 + 0x230);
      lVar7 = *(longlong *)(lVar15 + 0x38);
      if ((sVar13 < 0) || ((int)*(short *)(lVar7 + 4 + (longlong)sVar13 * 8) != uVar21)) {
        sVar13 = sVar13 + 1;
        *(short *)(lVar15 + 0x230) = sVar13;
      }
      *(short *)(lVar7 + 4 + (longlong)sVar13 * 8) = (short)uVar21;
      *(int *)(lVar7 + (longlong)sVar13 * 8) = iVar10;
    }
  }
LAB_1802a7a9b:
  iVar16 = local_12c;
  iVar10 = local_138;
  FUN_18026c370(&local_f8,local_12c,10);
  if (local_e8 != '\0') {
    *(short *)(lVar6 + 0x216) = (short)iVar10;
  }
  *(float *)((longlong)local_118 + 0x11c) =
       *(float *)((longlong)local_118 + 0x11c) - *(float *)(lVar5 + 0xcd8) * DAT_180380ac0;
  if ((((local_e8 != '\0') && ((*(byte *)(lVar6 + 4) & 2) != 0)) &&
      (cVar9 = FUN_18027bec0(), cVar9 != '\0')) && (*(char *)(lVar5 + 0x2298) == '\0')) {
    *(undefined2 *)(lVar6 + 0x7a) = *(undefined2 *)(lVar6 + 0x78);
    if (((*(float *)(lVar5 + 0xec) <= 0.0 && *(float *)(lVar5 + 0xec) != 0.0) &&
        (*(float *)(lVar5 + 0x100) <= fVar28 && fVar28 != *(float *)(lVar5 + 0x100))) &&
       ((sVar13 = *(short *)(lVar19 + 0x5a + lVar20), sVar13 != -1 &&
        (lVar15 = (longlong)sVar13 * 0x74 + *(longlong *)(lVar6 + 0x18), lVar15 != 0)))) {
      FUN_1802a21d0(lVar6,iVar10,(int)*(short *)(lVar15 + 0x56));
    }
    if (((0.0 < *(float *)(lVar5 + 0xec)) && (fVar29 < *(float *)(lVar5 + 0x100))) &&
       ((sVar13 = *(short *)(lVar19 + 0x5c + lVar20), sVar13 != -1 &&
        (lVar15 = (longlong)sVar13 * 0x74 + *(longlong *)(lVar6 + 0x18), lVar15 != 0)))) {
      FUN_1802a21d0(lVar6,iVar10,(int)*(short *)(lVar15 + 0x56));
    }
  }
  fVar25 = local_110;
  fVar26 = (fVar29 - local_130) - local_110;
  fVar2 = fVar26;
  if (fVar26 <= (float)local_e0) {
    fVar2 = (float)local_e0;
  }
  if (((*(byte *)(lVar6 + 4) & 8) != 0) && ((*(uint *)(lVar19 + lVar20) & 0x200) == 0)) {
    sVar13 = *(short *)(lVar19 + 0x5e + lVar20);
    if (sVar13 != -1) {
      if (fVar28 <= fVar26) {
        fVar28 = fVar26;
      }
      if (0 < sVar13) {
        uVar11 = FUN_18026a6a0(0);
        FUN_18026a730(0,uVar11);
        FUN_18026b160(fVar28 + *(float *)(lVar5 + 0xcdc),local_e4,0,1);
        FUN_18026a890(1);
        fVar28 = fVar28 + fVar25;
      }
      bVar18 = *(byte *)(lVar19 + 0x71 + lVar20);
      uVar11 = FUN_18026a6a0(0);
      local_178 = (char *)CONCAT44(local_178._4_4_,DAT_180380afc);
      FUN_18029f160(local_118[0x59],fVar28,uVar11,((bVar18 & 3) != 1) + '\x02');
      iVar16 = local_12c;
    }
    if ((local_134 != '\0') && (*(short *)(lVar6 + 0x21a) != iVar10)) {
      bVar18 = *(byte *)(lVar19 + 0x72 + lVar20);
      if (*(short *)(lVar19 + 0x5e + lVar20) == -1) {
LAB_1802a7cf2:
        bVar18 = bVar18 & 3;
      }
      else {
        bVar4 = *(byte *)(lVar19 + 0x71 + lVar20);
        iVar12 = 0;
        do {
          iVar14 = iVar12 + 1;
          if ((bVar4 & 3) == (bVar18 >> ((char)iVar12 * '\x02' & 0x1fU) & 3)) {
            bVar18 = bVar18 >> ((char)(iVar14 % (int)(bVar4 >> 2 & 3)) * '\x02' & 0x1fU);
            goto LAB_1802a7cf2;
          }
          iVar12 = iVar14;
        } while (iVar14 < 3);
        bVar18 = 0;
      }
      FUN_1802a6a50(iVar10,bVar18,*(undefined1 *)(lVar5 + 0x11d));
    }
  }
  pcVar22 = local_100;
  local_168 = &local_108;
  local_11c = local_ec;
  local_178 = local_100;
  local_170 = pcVar17;
  local_120 = fVar2;
  FUN_18026bd00(local_118[0x59],&local_e0,&local_120,fVar2);
  if (((fVar2 - (float)local_e0 < local_108) && (local_e7[0] != '\0')) &&
     (*(int *)(lVar5 + 0x1594) == 0)) {
    FUN_180280d50(&DAT_18037f6fc,(int)pcVar17 - (int)pcVar22,pcVar22);
  }
  cVar9 = FUN_1802818e0(0,iVar16);
  if (cVar9 != '\0') {
    FUN_1802a7e20(iVar10);
  }
  return;
}



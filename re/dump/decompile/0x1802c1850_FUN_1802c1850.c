// 0x1802c1850  FUN_1802c1850
// size=2254 thunk=false
// signature: undefined FUN_1802c1850()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802c1850(char *param_1,byte param_2,uint param_3,float *param_4)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  byte bVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_168 [32];
  float *local_148;
  undefined8 local_140;
  float *local_138;
  byte local_128;
  char local_127;
  int local_124;
  float local_120;
  float local_11c;
  uint local_118;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  uint local_f8;
  longlong local_f0;
  char *local_e8;
  float local_e0;
  float fStack_dc;
  byte local_d8 [8];
  char local_d0;
  char local_cf [7];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_128 = param_2;
  local_f0 = lVar3;
  local_e8 = param_1;
  local_d8[0] = param_2;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  uVar14 = *(ulonglong *)(lVar4 + 0x1520);
  *(undefined1 *)(uVar14 + 0xce) = 1;
  plVar5 = *(longlong **)(lVar4 + 0x1520);
  if (*(char *)((longlong)plVar5 + 0xd1) != '\0') {
LAB_1802c20db:
    return uVar14 & 0xffffffffffffff00;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar11 = FUN_180268980(param_1,0,
                         *(undefined4 *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4));
  local_124 = iVar11;
  if (*(int *)(*plVar5 + 0x1578) == iVar11) {
    FUN_1802899e0(iVar11,0xb,param_1);
  }
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      pcVar1 = pcVar15 + 1;
      if (((*pcVar15 == '#') && (*pcVar1 == '#')) ||
         (pcVar15 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  local_148 = (float *)CONCAT44(local_148._4_4_,DAT_180381384);
  FUN_180272ad0(&local_b8,param_1,pcVar15,0);
  fVar22 = param_4[1];
  if (param_4[1] == 0.0) {
    fVar22 = local_b4;
  }
  fVar21 = *param_4;
  if (*param_4 == 0.0) {
    fVar21 = local_b8;
  }
  fStack_dc = (float)((ulonglong)plVar5[0x23] >> 0x20) + *(float *)(plVar5 + 0x2a);
  local_e0 = (float)plVar5[0x23];
  local_100 = fVar21;
  local_fc = fVar22;
  FUN_18027f400(&local_100,0);
  local_114 = param_3 & 2;
  if ((param_3 & 2) == 0) {
    pfVar13 = (float *)(plVar5 + 0x4a);
    local_c8 = local_e0;
  }
  else {
    pfVar13 = (float *)(plVar5 + 0x4c);
    local_c8 = *(float *)(plVar5 + 0x4b);
  }
  if (((*param_4 == 0.0) || ((param_3 >> 0x18 & 1) != 0)) &&
     (fVar21 = local_b8, local_b8 <= *pfVar13 - local_c8)) {
    fVar21 = *pfVar13 - local_c8;
  }
  local_c4 = fStack_dc;
  local_bc = fStack_dc + fVar22;
  local_c0 = fVar21 + local_c8;
  if ((param_3 >> 0x1a & 1) == 0) {
    if ((param_3 & 2) == 0) {
      fVar20 = *(float *)(lVar3 + 0xcd4);
    }
    else {
      fVar20 = 0.0;
    }
    local_c8 = local_c8 - (float)(int)(fVar20 * DAT_180380ac0);
    fVar19 = (float)(int)(*(float *)(lVar3 + 0xcd8) * DAT_180380ac0);
    local_c0 = (fVar20 - (float)(int)(fVar20 * DAT_180380ac0)) + local_c0;
    local_c4 = fStack_dc - fVar19;
    local_bc = (*(float *)(lVar3 + 0xcd8) - fVar19) + local_bc;
  }
  local_f8 = param_3 & 8;
  bVar17 = -((param_3 & 8) != 0) & 0x40;
  if ((param_3 & 2) == 0) {
    uVar14 = FUN_18027f160(&local_c8,iVar11,0,bVar17);
  }
  else {
    lVar4 = plVar5[0x4d];
    lVar8 = plVar5[0x4e];
    *(int *)(plVar5 + 0x4d) = (int)plVar5[0x4b];
    *(int *)(plVar5 + 0x4e) = (int)plVar5[0x4c];
    uVar14 = FUN_18027f160(&local_c8,iVar11,0,bVar17);
    *(int *)(plVar5 + 0x4d) = (int)lVar4;
    *(int *)(plVar5 + 0x4e) = (int)lVar8;
  }
  lVar4 = local_f0;
  local_118 = *(uint *)(lVar3 + 0x1efc) & 0x400000;
  local_127 = (char)uVar14;
  if ((local_127 == '\0') &&
     (((local_118 == 0 || (*(char *)(lVar3 + 0x2450) == '\0')) ||
      ((*(float *)(lVar3 + 0x2460) <= local_c4 ||
       (((local_bc < *(float *)(lVar3 + 0x2458) || local_bc == *(float *)(lVar3 + 0x2458) ||
         (*(float *)(lVar3 + 0x245c) <= local_c8)) ||
        (local_c0 < *(float *)(lVar3 + 0x2454) || local_c0 == *(float *)(lVar3 + 0x2454)))))))))
  goto LAB_1802c20db;
  local_100 = (float)(*(uint *)(lVar3 + 0x1eb8) & 0x40);
  if (((param_3 & 8) != 0) && (local_100 == 0.0)) {
    if (*(char *)(local_f0 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0xec0);
    uVar2 = *(uint *)(lVar4 + 0x1eb8);
    if ((uVar2 & 0x40) == 0) {
      *(float *)(lVar4 + 0x26d0) = *(float *)(lVar4 + 0xc84);
      *(float *)(lVar4 + 0xc84) = *(float *)(lVar4 + 0xc84) * *(float *)(lVar4 + 0xc88);
    }
    *(uint *)(lVar4 + 0x1eb8) = uVar2 | 0x40;
    FUN_18028a630();
    *(short *)(lVar4 + 0x26d4) = *(short *)(lVar4 + 0x26d4) + 1;
  }
  uVar2 = local_118;
  if (local_114 != 0) {
    if (*(longlong *)(lVar3 + 0x2368) == 0) {
      if (plVar5[0x39] != 0) {
        FUN_1802a9c70();
      }
    }
    else {
      FUN_1802a5930();
    }
    *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 0x200;
    uVar12 = *(undefined4 *)((longlong)plVar5 + 0x26c);
    lVar4 = plVar5[0x4e];
    uVar6 = *(undefined4 *)((longlong)plVar5 + 0x274);
    *(int *)(lVar3 + 0x1f34) = (int)plVar5[0x4d];
    *(undefined4 *)(lVar3 + 0x1f38) = uVar12;
    *(int *)(lVar3 + 0x1f3c) = (int)lVar4;
    *(undefined4 *)(lVar3 + 8000) = uVar6;
  }
  bVar17 = local_128;
  fVar19 = 0.0;
  fVar20 = 0.0;
  local_120 = 0.0;
  if ((param_3 >> 0x14 & 1) != 0) {
    fVar19 = 1.83671e-40;
    local_120 = 1.83671e-40;
    fVar20 = 1.83671e-40;
  }
  if ((param_3 >> 0x1b & 1) != 0) {
    fVar19 = (float)((uint)fVar20 | 0x100000);
    fVar20 = fVar19;
    local_120 = fVar19;
  }
  if ((param_3 >> 0x16 & 1) != 0) {
    fVar19 = (float)((uint)fVar20 | 0x10);
    fVar20 = fVar19;
    local_120 = fVar19;
  }
  if ((param_3 >> 0x17 & 1) != 0) {
    fVar19 = (float)((uint)fVar20 | 0x80);
    fVar20 = fVar19;
    local_120 = fVar19;
  }
  if ((param_3 & 4) != 0) {
    fVar19 = (float)((uint)fVar20 | 0x120);
    fVar20 = fVar19;
    local_120 = fVar19;
  }
  if (((param_3 & 0x10) != 0) || ((*(uint *)(lVar3 + 0x1efc) & 0x4000) != 0)) {
    fVar19 = (float)((uint)fVar20 | 0x1000);
    local_120 = fVar19;
  }
  if (uVar2 == 0) {
    local_148 = (float *)CONCAT44(local_148._4_4_,fVar19);
    bVar10 = FUN_1802ab600(&local_c8,iVar11,&local_d0,local_cf);
    if (((((param_3 & 0x40) == 0) || (*(int *)(lVar3 + 0x223c) == 0)) ||
        (*(int *)(lVar3 + 0x2240) != *(int *)(lVar3 + 0x1eb4))) ||
       ((*(int *)(lVar3 + 0x223c) != local_124 || ((*(uint *)(lVar3 + 0x2244) & 0x1000) != 0))))
    goto LAB_1802c1dd0;
    bVar10 = 1;
    local_128 = 1;
    bVar9 = true;
LAB_1802c1dea:
    bVar7 = bVar9;
    if ((*(char *)(lVar3 + 0x2069) == '\0') &&
       ((*(longlong **)(lVar3 + 0x2070) == plVar5 && (*(int *)(lVar3 + 0x207c) == (int)plVar5[0x2e])
        ))) {
      local_110 = local_c8 - *(float *)(plVar5 + 0x25);
      local_10c = local_c4 - *(float *)((longlong)plVar5 + 300);
      local_108 = local_c0 - *(float *)(plVar5 + 0x25);
      local_104 = local_bc - *(float *)((longlong)plVar5 + 300);
      FUN_180282d70(local_124,(int)plVar5[0x2e],*(undefined4 *)(lVar3 + 0x1eb4),&local_110);
      if (*(char *)(lVar3 + 0x76) != '\0') {
        *(undefined1 *)(lVar3 + 0x2068) = 0;
      }
    }
    if (bVar10 != 0) {
      FUN_18026ed00(local_124);
    }
  }
  else {
    FUN_1802c2df0(iVar11,local_d8,&local_120);
    local_148 = (float *)CONCAT44(local_148._4_4_,local_120);
    local_128 = FUN_1802ab600(&local_c8,iVar11,&local_d0,local_cf);
    FUN_1802c2f30(iVar11,local_d8,&local_128);
    bVar10 = local_128;
    local_128 = local_d8[0];
LAB_1802c1dd0:
    bVar9 = false;
    if ((bVar10 != 0) ||
       ((bVar7 = bVar9, local_d0 != '\0' && (bVar7 = false, (param_3 >> 0x19 & 1) != 0))))
    goto LAB_1802c1dea;
  }
  if (local_128 != bVar17) {
    *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 8;
  }
  cVar18 = local_127;
  if (local_127 == '\0') goto LAB_1802c2019;
  if ((local_d0 == '\0') && ((param_3 & 0x20) == 0)) {
    cVar18 = '\0';
    if (local_128 != 0) goto LAB_1802c1f43;
  }
  else {
    cVar18 = '\x01';
LAB_1802c1f43:
    if ((local_cf[0] == '\0') || (cVar18 == '\0')) {
      cVar18 = cVar18 + '\x19';
    }
    else {
      cVar18 = '\x1b';
    }
    uVar12 = FUN_18026a6a0(cVar18,DAT_180380bb0);
    local_120 = local_c0;
    local_11c = local_bc;
    local_110 = local_c8;
    local_10c = local_c4;
    if (*(char *)(local_f0 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_140 = (ulonglong)local_140._4_4_ << 0x20;
    local_148 = (float *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_180295000(*(undefined8 *)(*(longlong *)(*(longlong *)(local_f0 + 0xec0) + 0x1520) + 0x2c8),
                  &local_110,&local_120,uVar12);
  }
  cVar18 = local_127;
  if (*(int *)(lVar3 + 0x206c) == local_124) {
    uVar16 = 0xe;
    if (local_118 == 0) {
      uVar16 = 10;
    }
    FUN_18026c370(&local_c8,local_124,uVar16);
  }
LAB_1802c2019:
  if (local_114 != 0) {
    if (*(longlong *)(lVar3 + 0x2368) == 0) {
      if (plVar5[0x39] != 0) {
        FUN_1802a9d60();
      }
    }
    else {
      FUN_1802a5a20();
    }
  }
  if (cVar18 != '\0') {
    local_10c = fVar22 + fStack_dc;
    local_138 = &local_c8;
    local_140 = lVar3 + 0xd70;
    local_110 = fVar21 + local_e0;
    if (*(float *)(plVar5 + 0x4a) <= fVar21 + local_e0) {
      local_110 = *(float *)(plVar5 + 0x4a);
    }
    local_148 = &local_b8;
    FUN_18026ba40(&local_e0,&local_110,local_e8,pcVar15);
  }
  if ((((bVar10 != 0) && (!bVar7)) && ((*(uint *)((longlong)plVar5 + 0x14) & 0x4000000) != 0)) &&
     (((param_3 & 1) == 0 && ((*(byte *)(lVar3 + 0x1efc) & 0x10) != 0)))) {
    FUN_180281560();
  }
  if ((local_f8 != 0) && (local_100 == 0.0)) {
    FUN_180279200();
  }
  return (ulonglong)bVar10;
}



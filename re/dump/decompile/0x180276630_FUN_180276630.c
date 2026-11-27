// 0x180276630  FUN_180276630
// size=9988 thunk=false
// signature: undefined FUN_180276630()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_180276630(char *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  char *_Str;
  undefined1 uVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong lVar21;
  void *pvVar22;
  size_t sVar23;
  char *_Str2;
  undefined8 uVar24;
  float *pfVar25;
  char cVar26;
  byte bVar27;
  short sVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  undefined1 *puVar32;
  longlong lVar33;
  short sVar34;
  undefined8 *puVar35;
  longlong *plVar36;
  int iVar37;
  longlong lVar38;
  undefined4 *puVar39;
  bool bVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_228 [32];
  float *local_208;
  float *local_200;
  float local_1f8;
  char local_1e8;
  char local_1e7;
  char local_1e6;
  char local_1e5;
  char local_1e4;
  uint local_1e0;
  uint local_1dc;
  char local_1d8;
  int local_1d4;
  int local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  float local_1b8;
  float local_1b4;
  longlong local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  uint local_190;
  uint local_18c;
  char *local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [4];
  ulonglong local_d0;
  
  puVar32 = local_128;
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_228;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1b0 = 0x10;
  local_188 = param_1;
  local_168 = param_2;
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar9 + 0xec0);
  lVar21 = FUN_180273780(param_1);
  uVar43 = CONCAT71((int7)((ulonglong)param_4 >> 8),lVar21 == 0);
  local_1dc = (uint)uVar43;
  local_1c0 = lVar21;
  if (lVar21 == 0) {
    lVar21 = FUN_1802739b0(param_1,param_3);
    uVar43 = (ulonglong)local_1dc;
  }
  if (*(int *)(lVar9 + 0x1518) == *(int *)(lVar21 + 0x10)) {
    pcVar10 = (code *)swi(3);
    uVar14 = (*pcVar10)();
    return uVar14;
  }
  if ((param_3 & 0x30200) == 0x30200) {
    param_3 = param_3 | 6;
  }
  iVar17 = *(int *)(lVar9 + 4);
  piVar1 = (int *)(lVar9 + 0x14f0);
  local_1d0 = *(int *)(lVar21 + 0x290);
  if ((*piVar1 == 0) && (*(char *)(lVar9 + 2) != '\0')) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  *(undefined1 *)(lVar21 + 0xd5) = uVar14;
  local_1e5 = local_1d0 < iVar17 + -1;
  if ((param_3 >> 0x1a & 1) != 0) {
    lVar31 = (longlong)*(int *)(lVar9 + 0x2038) * 0x38;
    local_1e5 = (lVar21 != *(longlong *)(lVar31 + 8 + *(longlong *)(lVar9 + 0x2030)) ||
                *(int *)(lVar21 + 0x94) != *(int *)(lVar31 + *(longlong *)(lVar9 + 0x2030))) ||
                (bool)local_1e5;
  }
  *(char *)(lVar21 + 0xd3) = local_1e5;
  if ((bool)local_1e5 != false) {
    *(byte *)(lVar21 + 0xf1) = *(byte *)(lVar21 + 0xf1) | 8;
    *(byte *)(lVar21 + 0xf2) = *(byte *)(lVar21 + 0xf2) | 8;
    *(byte *)(lVar21 + 0xf3) = *(byte *)(lVar21 + 0xf3) | 8;
  }
  local_1d4 = iVar17;
  if (local_1d0 == iVar17) {
    param_3 = *(uint *)(lVar21 + 0x14);
  }
  else {
    FUN_1802823d0(lVar21,uVar43 & 0xff,param_3);
    *(uint *)(lVar21 + 0x14) = param_3;
    if ((*(uint *)(lVar9 + 0x1f48) & 0x200) == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)(lVar9 + 0x1f84);
    }
    *(undefined4 *)(lVar21 + 0x18) = uVar20;
    *(int *)(lVar21 + 0x290) = iVar17;
    dVar5 = *(double *)(lVar9 + 0x10);
    *(undefined2 *)(lVar21 + 0xde) = 0;
    *(float *)(lVar21 + 0x294) = (float)dVar5;
    uVar6 = *(undefined2 *)(lVar9 + 0x1510);
    *(int *)(lVar9 + 0x1510) = *(int *)(lVar9 + 0x1510) + 1;
    *(undefined2 *)(lVar21 + 0xe0) = uVar6;
  }
  if (*piVar1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = *(longlong *)((longlong)*piVar1 * 0x78 + -0x78 + *(longlong *)(lVar9 + 0x14f8));
  }
  if (local_1d0 == iVar17) {
    local_1c8 = *(longlong *)(lVar21 + 0x3b0);
  }
  else {
    local_1c8 = 0;
    if ((param_3 & 0x7000000) != 0) {
      local_1c8 = lVar31;
    }
  }
  if (*(int *)(lVar21 + 0x108) == 0) {
    FUN_18028a630(lVar21 + 0x108,lVar21 + 0x10);
  }
  *(longlong *)(lVar9 + 0x1520) = lVar21;
  FUN_18028a2e0(piVar1,*piVar1 + 1);
  local_1a8 = *(longlong *)(lVar9 + 0x14f8);
  lVar45 = (longlong)*piVar1 * 0x78;
  local_1e0 = param_3 & 0x2000000;
  *(longlong *)(local_1a8 + -0x78 + lVar45) = lVar21;
  uVar24 = *(undefined8 *)(lVar9 + 0x1f00);
  puVar41 = (undefined8 *)(local_1a8 + -0x70 + lVar45);
  *puVar41 = *(undefined8 *)(lVar9 + 0x1ef8);
  puVar41[1] = uVar24;
  uVar24 = *(undefined8 *)(lVar9 + 0x1f10);
  puVar41 = (undefined8 *)(local_1a8 + -0x60 + lVar45);
  *puVar41 = *(undefined8 *)(lVar9 + 0x1f08);
  puVar41[1] = uVar24;
  uVar24 = *(undefined8 *)(lVar9 + 0x1f20);
  puVar41 = (undefined8 *)(local_1a8 + -0x50 + lVar45);
  *puVar41 = *(undefined8 *)(lVar9 + 0x1f18);
  puVar41[1] = uVar24;
  *(undefined1 (*) [16])(local_1a8 + -0x40 + lVar45) = *(undefined1 (*) [16])(lVar9 + 0x1f28);
  uVar24 = *(undefined8 *)(lVar9 + 8000);
  puVar41 = (undefined8 *)(local_1a8 + -0x30 + lVar45);
  *puVar41 = *(undefined8 *)(lVar9 + 0x1f38);
  puVar41[1] = uVar24;
  if (((param_3 & 0x2000000) == 0) || ((*(byte *)(lVar9 + 0x1eb8) & 0x40) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(undefined1 *)(local_1a8 + -10 + lVar45) = uVar14;
  *(undefined4 *)(local_1a8 + -8 + lVar45) = 0;
  lVar38 = local_1a8 + -0x20 + lVar45;
  FUN_18027e480(lVar38);
  iVar17 = local_1d4;
  *(longlong *)(lVar9 + 0x28d8) = lVar38;
  local_190 = param_3 & 0x10000000;
  if ((param_3 & 0x10000000) != 0) {
    *(int *)(lVar9 + 0x2644) = *(int *)(lVar9 + 0x2644) + 1;
  }
  fVar50 = DAT_180380bb0;
  if (local_1d0 != local_1d4) {
    *(longlong *)(lVar21 + 0x3b0) = local_1c8;
    *(longlong *)(lVar21 + 0x3d8) = lVar21;
    *(longlong *)(lVar21 + 0x3d0) = lVar21;
    *(longlong *)(lVar21 + 0x3c8) = lVar21;
    *(longlong *)(lVar21 + 0x3c0) = lVar21;
    if (local_1c8 != 0) {
      if (((param_3 >> 0x18 & 1) != 0) && (local_1e0 == 0)) {
        *(undefined8 *)(lVar21 + 0x3c0) = *(undefined8 *)(local_1c8 + 0x3c0);
      }
      if ((param_3 >> 0x1a & 1) != 0) {
        *(undefined8 *)(lVar21 + 0x3c8) = *(undefined8 *)(local_1c8 + 0x3c8);
      }
      if (((param_3 >> 0x1b & 1) == 0) && ((param_3 & 0x7000000) != 0)) {
        *(undefined8 *)(lVar21 + 0x3d0) = *(undefined8 *)(local_1c8 + 0x3d0);
      }
    }
    uVar29 = *(uint *)(lVar21 + 0x18);
    lVar38 = lVar21;
    while ((uVar29 & 0x100) != 0) {
      lVar38 = *(longlong *)(lVar38 + 0x3b0);
      *(longlong *)(lVar21 + 0x3d8) = lVar38;
      uVar29 = *(uint *)(lVar38 + 0x18);
    }
    *(longlong *)(lVar21 + 0x3b8) = lVar31;
    lVar38 = 0;
    if ((param_3 >> 0x18 & 1) != 0) {
      lVar38 = lVar31;
    }
    *(longlong *)(lVar21 + 0x3e0) = lVar38;
    fVar47 = fVar50;
    if (local_1c8 != 0) {
      fVar47 = *(float *)(local_1c8 + 700) * *(float *)(local_1c8 + 0x2b8);
    }
    *(float *)(lVar21 + 700) = fVar47;
  }
  FUN_180279a00();
  *(undefined4 *)(lVar21 + 0x428) = *(undefined4 *)(lVar9 + 0x1eb4);
  local_18c = param_3 & 0x4000000;
  if ((param_3 & 0x4000000) != 0) {
    puVar39 = (undefined4 *)
              ((longlong)*(int *)(lVar9 + 0x2038) * 0x38 + *(longlong *)(lVar9 + 0x2030));
    *(longlong *)(puVar39 + 2) = lVar21;
    puVar39[6] = *(undefined4 *)(lVar31 + 0x170);
    FUN_180289f40((int *)(lVar9 + 0x2038),puVar39);
    *(undefined4 *)(lVar21 + 0x94) = *puVar39;
    iVar17 = local_1d4;
  }
  local_1e4 = '\0';
  local_1e6 = '\0';
  local_1e8 = '\0';
  if ((*(byte *)(lVar9 + 0x1f48) & 1) != 0) {
    uVar29 = (uint)*(char *)(lVar21 + 0xf1);
    local_1e4 = (*(uint *)(lVar9 + 0x1f4c) & uVar29) != 0;
    if (((*(uint *)(lVar9 + 0x1f4c) & uVar29) == 0) ||
       (*(float *)(lVar9 + 0x1f64) * *(float *)(lVar9 + 0x1f64) +
        *(float *)(lVar9 + 0x1f60) * *(float *)(lVar9 + 0x1f60) <= DAT_18038093c)) {
      FUN_1802795a0(lVar21,lVar9 + 0x1f58);
    }
    else {
      *(undefined8 *)(lVar21 + 0xf4) = *(undefined8 *)(lVar9 + 0x1f58);
      uVar24 = *(undefined8 *)(lVar9 + 0x1f60);
      *(uint *)(lVar21 + 0xf0) = *(uint *)(lVar21 + 0xf0) & 0xffff00ff;
      *(uint *)(lVar21 + 0xf0) = *(uint *)(lVar21 + 0xf0) | (uVar29 & 0xf1) << 8;
      *(undefined8 *)(lVar21 + 0xfc) = uVar24;
    }
  }
  if ((*(byte *)(lVar9 + 0x1f48) & 2) != 0) {
    uVar29 = (int)*(char *)(lVar21 + 0xf2) & *(uint *)(lVar9 + 0x1f50);
    if ((uVar29 == 0) || (*(float *)(lVar9 + 0x1f68) <= 0.0)) {
      local_1e6 = '\0';
      if (uVar29 != 0) goto LAB_180276b85;
LAB_180276ba4:
      local_1e8 = '\0';
    }
    else {
      local_1e6 = '\x01';
LAB_180276b85:
      if (*(float *)(lVar9 + 0x1f6c) <= 0.0) goto LAB_180276ba4;
      local_1e8 = '\x01';
    }
    if (((*(byte *)(lVar21 + 0x18) & 4) != 0) && (((int)*(char *)(lVar21 + 0xf2) & 4U) == 0)) {
      *(undefined4 *)(lVar9 + 0x1f68) = *(undefined4 *)(lVar21 + 0x38);
    }
    if (((*(byte *)(lVar21 + 0x18) & 8) != 0) && ((*(byte *)(lVar21 + 0xf2) & 4) == 0)) {
      *(undefined4 *)(lVar9 + 0x1f6c) = *(undefined4 *)(lVar21 + 0x3c);
    }
    FUN_180279700(lVar21,lVar9 + 0x1f68,*(uint *)(lVar9 + 0x1f50));
  }
  if ((*(byte *)(lVar9 + 0x1f48) & 0x80) != 0) {
    if (0.0 <= *(float *)(lVar9 + 0x1f78)) {
      *(float *)(lVar21 + 0xa8) = *(float *)(lVar9 + 0x1f78);
      *(undefined4 *)(lVar21 + 0xb0) = 0;
    }
    if (0.0 <= *(float *)(lVar9 + 0x1f7c)) {
      *(float *)(lVar21 + 0xac) = *(float *)(lVar9 + 0x1f7c);
      *(undefined4 *)(lVar21 + 0xb4) = 0;
    }
  }
  if ((*(byte *)(lVar9 + 0x1f48) & 4) == 0) {
    if (local_1d0 != iVar17) {
      *(undefined8 *)(lVar21 + 0x50) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar21 + 0x50) = *(undefined8 *)(lVar9 + 0x1f70);
  }
  if (((*(byte *)(lVar9 + 0x1f48) & 8) != 0) &&
     ((*(uint *)(lVar9 + 0x1f54) == 0 ||
      ((*(uint *)(lVar9 + 0x1f54) & (int)*(char *)(lVar21 + 0xf3)) != 0)))) {
    cVar16 = *(char *)(lVar9 + 0x1f88);
    *(byte *)(lVar21 + 0xf3) = *(byte *)(lVar21 + 0xf3) & 0xf1;
    if (*(char *)(lVar21 + 0xd0) != '\0') {
      *(byte *)(lVar21 + 0xcf) = *(byte *)(lVar21 + 0xcf) ^ 1;
    }
    *(bool *)(lVar21 + 0xd0) = *(char *)(lVar21 + 0xcf) != cVar16;
  }
  if ((*(byte *)(lVar9 + 0x1f48) & 0x20) != 0) {
    FUN_1802827b0(lVar21,0);
  }
  if (*(char *)(lVar21 + 0xd3) != '\0') {
    *(byte *)(lVar21 + 0xf1) = *(byte *)(lVar21 + 0xf1) & 0xf7;
    *(byte *)(lVar21 + 0xf2) = *(byte *)(lVar21 + 0xf2) & 0xf7;
    *(byte *)(lVar21 + 0xf3) = *(byte *)(lVar21 + 0xf3) & 0xf7;
  }
  uVar43 = (ulonglong)_tls_index;
  lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar43 * 8);
  local_180 = lVar31;
  if (*(char *)(lVar31 + local_1b0) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar38 = *(longlong *)(lVar31 + 0xec0);
  *(undefined1 *)(lVar21 + 0xd2) = 0;
  if (((((*(uint *)(lVar38 + 0x1f48) & 0x400) != 0) &&
       (uVar29 = *(uint *)(lVar38 + 0x1fbc), (uVar29 & 1) != 0)) &&
      (*(char *)(lVar21 + 0xd3) == '\0')) && (*(char *)(lVar21 + 0xd4) == '\0')) {
    if (((uVar29 & 2) != 0) && (*(longlong *)(lVar38 + 0x1528) != 0)) {
      lVar33 = *(longlong *)(*(longlong *)(lVar38 + 0x1528) + 0x3c0);
      if ((*(longlong *)(lVar21 + 0x3c0) == lVar33) || (*(longlong *)(lVar33 + 0x3c0) == lVar21))
      goto LAB_180276de5;
      do {
        if (lVar33 == lVar21) goto LAB_180276de5;
        lVar33 = *(longlong *)(lVar33 + 0x3b8);
      } while (lVar33 != 0);
    }
    if (((uVar29 & 4) != 0) && (*(longlong *)(lVar38 + 0x2070) != 0)) {
      lVar38 = *(longlong *)(*(longlong *)(lVar38 + 0x2070) + 0x3c0);
      if ((*(longlong *)(lVar21 + 0x3c0) == lVar38) || (*(longlong *)(lVar38 + 0x3c0) == lVar21))
      goto LAB_180276de5;
      do {
        if (lVar38 == lVar21) goto LAB_180276de5;
        lVar38 = *(longlong *)(lVar38 + 0x3b8);
      } while (lVar38 != 0);
    }
    *(undefined8 *)(lVar21 + 0x2c8) = 0;
    *(undefined1 *)(lVar21 + 0xd2) = 1;
  }
LAB_180276de5:
  if ((*(char *)(local_1a8 + -10 + lVar45) != '\0') && (*(longlong *)(lVar21 + 0x3c0) == lVar21)) {
    if (*(char *)(lVar31 + local_1b0) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar31 + 0xec0);
    *(undefined4 *)
     ((longlong)*(int *)(lVar31 + 0x14f0) * 0x78 + -8 + *(longlong *)(lVar31 + 0x14f8)) =
         *(undefined4 *)(lVar31 + 0xc84);
    *(uint *)(lVar31 + 0x1eb8) = *(uint *)(lVar31 + 0x1eb8) & 0xffffffbf;
    *(undefined4 *)(lVar31 + 0xc84) = *(undefined4 *)(lVar31 + 0x26d0);
    FUN_18028a630(lVar31 + 0x2008);
    *(short *)(lVar31 + 0x26d4) = *(short *)(lVar31 + 0x26d4) + 1;
  }
  iVar17 = local_1d4;
  *(undefined8 *)(lVar9 + 0x1520) = 0;
  if (local_1d0 == local_1d4) {
    if (*(char *)(lVar21 + 0xd2) != '\0') goto LAB_180278a31;
LAB_180278a76:
    lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar43 * 8);
    if (*(char *)(lVar31 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar31 + 0xec0);
    *(longlong *)(lVar31 + 0x1520) = lVar21;
    *(longlong *)(lVar31 + 0x28d8) =
         (longlong)(*(int *)(lVar31 + 0x14f0) + -1) * 0x78 + *(longlong *)(lVar31 + 0x14f8) + 0x58;
    if (*(int *)(lVar21 + 0x1d0) == -1) {
      lVar45 = 0;
    }
    else {
      lVar45 = (longlong)*(int *)(lVar21 + 0x1d0) * 0x250 + *(longlong *)(lVar31 + 0x2390);
    }
    *(longlong *)(lVar31 + 0x2368) = lVar45;
    *(undefined4 *)(lVar31 + 0x1248) = 0x3f800000;
    if ((*(byte *)(lVar31 + 0x2c) & 0x10) != 0) {
      fVar50 = *(float *)(*(longlong *)(lVar21 + 0x20) + 0x18);
      if (fVar50 == 0.0) {
        fVar50 = *(float *)(lVar31 + 0x38);
      }
      *(float *)(lVar31 + 0x1244) = fVar50;
    }
    uVar14 = *(undefined1 *)(lVar21 + 0xd1);
    *(undefined1 *)(lVar21 + 0xd1) = 0;
    FUN_18027a710();
    *(undefined1 *)(lVar21 + 0xd1) = uVar14;
    FUN_1802834c0();
    local_13c = *(undefined4 *)(lVar21 + 0x2c);
    local_140 = *(float *)(lVar21 + 0x28);
    local_134 = *(float *)(lVar21 + 0x68) + *(float *)(lVar21 + 0x2c);
    local_138 = local_140 + *(float *)(lVar21 + 0x38);
    FUN_18026f510(lVar21,&local_140);
    lVar31 = local_1c8;
  }
  else {
    if (*(char *)(lVar21 + 0xd2) != '\0') {
LAB_180278a31:
      *(undefined1 *)(lVar21 + 0xcc) = 1;
      plVar36 = *(longlong **)(lVar21 + 0x1b8);
      plVar42 = plVar36 + *(int *)(lVar21 + 0x1b0);
      if (plVar36 != plVar42) {
        do {
          lVar31 = *plVar36;
          if (*(char *)(lVar31 + 0xd4) == '\0') {
            *(undefined1 *)(lVar31 + 0xd2) = 1;
            *(undefined1 *)(lVar31 + 0xcc) = 1;
            FUN_1802765c0();
          }
          plVar36 = plVar36 + 1;
        } while (plVar36 != plVar42);
      }
      goto LAB_180278a76;
    }
    if (((param_3 & 0x1000000) == 0) || (local_1e7 = '\x01', local_1e0 == 0)) {
      local_1e7 = '\0';
    }
    local_1d8 = *(char *)(lVar21 + 0xec);
    *(undefined1 *)(lVar21 + 0xcc) = 1;
    *(bool *)(lVar21 + 0xd7) = local_168 != 0;
    *(undefined4 *)(lVar21 + 0x268) = 0xff7fffff;
    *(undefined4 *)(lVar21 + 0x26c) = 0xff7fffff;
    *(undefined4 *)(lVar21 + 0x270) = 0x7f7fffff;
    *(undefined4 *)(lVar21 + 0x274) = 0x7f7fffff;
    FUN_18028a770(lVar21 + 0x108,1);
    FUN_180291fa0(*(undefined8 *)(lVar21 + 0x2c8));
    *(undefined4 *)(lVar21 + 0x1d0) = 0xffffffff;
    if (*(char *)(lVar21 + 0x434) != '\0') {
      lVar31 = *(longlong *)(lVar21 + 0x2c8);
      iVar17 = *(int *)(lVar21 + 0x42c);
      *(undefined1 *)(lVar21 + 0x434) = 0;
      if (*(int *)(lVar31 + 0x14) < iVar17) {
        pvVar22 = (void *)FUN_18026f580((longlong)iVar17 * 2);
        if (*(void **)(lVar31 + 0x18) != (void *)0x0) {
          memcpy(pvVar22,*(void **)(lVar31 + 0x18),(longlong)*(int *)(lVar31 + 0x10) * 2);
          FUN_18026f680(*(undefined8 *)(lVar31 + 0x18));
        }
        *(void **)(lVar31 + 0x18) = pvVar22;
        *(int *)(lVar31 + 0x14) = iVar17;
      }
      FUN_18028a980(*(longlong *)(lVar21 + 0x2c8) + 0x20,*(undefined4 *)(lVar21 + 0x430));
      *(undefined8 *)(lVar21 + 0x42c) = 0;
    }
    _Str = local_188;
    bVar46 = false;
    if (((*(longlong *)(lVar9 + 0x2268) != 0) &&
        (*(char *)(*(longlong *)(lVar9 + 0x2268) + 0xcd) != '\0')) &&
       (bVar46 = false, (param_3 >> 0x11 & 1) == 0)) {
      bVar46 = true;
    }
    if ((((local_190 != 0) || (bVar46)) || (local_1e5 != '\0')) && (local_1c0 != 0)) {
      _Str2 = *(char **)(lVar21 + 8);
      iVar17 = strcmp(local_188,_Str2);
      if (iVar17 != 0) {
        iVar17 = *(int *)(lVar21 + 0x88);
        sVar23 = strlen(_Str);
        uVar43 = sVar23 + 1;
        uVar44 = (longlong)iVar17;
        if ((ulonglong)(longlong)iVar17 < uVar43) {
          FUN_18026f680(_Str2);
          _Str2 = (char *)FUN_18026f580(uVar43);
          uVar44 = uVar43;
        }
        pvVar22 = memcpy(_Str2,local_188,uVar43);
        *(void **)(lVar21 + 8) = pvVar22;
        *(int *)(lVar21 + 0x88) = (int)uVar44;
      }
    }
    lVar31 = local_1c0;
    puVar41 = (undefined8 *)(lVar21 + 0x48);
    puVar35 = (undefined8 *)(lVar21 + 0x40);
    FUN_180273ee0();
    lVar38 = local_180;
    lVar45 = local_1b0;
    cVar16 = local_1e6;
    if ('\0' < *(char *)(lVar21 + 0xeb)) {
      *(char *)(lVar21 + 0xeb) = *(char *)(lVar21 + 0xeb) + -1;
    }
    if ('\0' < *(char *)(lVar21 + 0xec)) {
      *(char *)(lVar21 + 0xec) = *(char *)(lVar21 + 0xec) + -1;
    }
    if ('\0' < *(char *)(lVar21 + 0xed)) {
      *(char *)(lVar21 + 0xed) = *(char *)(lVar21 + 0xed) + -1;
    }
    if ((lVar31 == 0) && ((local_1e6 == '\0' || (local_1e8 == '\0')))) {
      *(undefined1 *)(lVar21 + 0xec) = 1;
    }
    if (((local_1e5 != '\0') && ((param_3 & 0x6000000) != 0)) &&
       (*(undefined1 *)(lVar21 + 0xec) = 1, (param_3 & 0x40) != 0)) {
      if (local_1e6 == '\0') {
        *(undefined4 *)(lVar21 + 0x38) = 0;
        *(undefined4 *)(lVar21 + 0x30) = 0;
      }
      if (local_1e8 == '\0') {
        *(undefined4 *)(lVar21 + 0x3c) = 0;
        *(undefined4 *)(lVar21 + 0x34) = 0;
      }
      *puVar41 = 0;
      *puVar35 = 0;
    }
    if (*(char *)(local_180 + local_1b0) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar26 = *(char *)(lVar38 + lVar45);
    local_180 = **(longlong **)(*(longlong *)(lVar38 + 0xec0) + 0x2060);
    *(longlong *)(lVar21 + 0x20) = local_180;
    if (cVar26 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar38 + 0xec0);
    *(longlong *)(lVar31 + 0x1520) = lVar21;
    *(longlong *)(lVar31 + 0x28d8) =
         (longlong)(*(int *)(lVar31 + 0x14f0) + -1) * 0x78 + *(longlong *)(lVar31 + 0x14f8) + 0x58;
    if (*(int *)(lVar21 + 0x1d0) == -1) {
      lVar45 = 0;
    }
    else {
      lVar45 = (longlong)*(int *)(lVar21 + 0x1d0) * 0x250 + *(longlong *)(lVar31 + 0x2390);
    }
    *(longlong *)(lVar31 + 0x2368) = lVar45;
    *(undefined4 *)(lVar31 + 0x1248) = 0x3f800000;
    if ((*(byte *)(lVar31 + 0x2c) & 0x10) != 0) {
      fVar47 = *(float *)(*(longlong *)(lVar21 + 0x20) + 0x18);
      if (fVar47 == 0.0) {
        fVar47 = *(float *)(lVar31 + 0x38);
      }
      *(float *)(lVar31 + 0x1244) = fVar47;
    }
    uVar14 = *(undefined1 *)(lVar21 + 0xd1);
    *(undefined1 *)(lVar21 + 0xd1) = 0;
    FUN_18027a710();
    *(undefined1 *)(lVar21 + 0xd1) = uVar14;
    FUN_1802834c0();
    if ((param_3 & 0x1000000) == 0) {
      if (((param_3 & 0x6000000) == 0) || ((param_3 >> 0x1b & 1) != 0)) {
        fVar47 = *(float *)(lVar9 + 0xc98);
      }
      else {
        fVar47 = *(float *)(lVar9 + 0xcc0);
      }
    }
    else {
      fVar47 = *(float *)(lVar9 + 0xcb8);
    }
    *(float *)(lVar21 + 100) = fVar47;
    *(undefined8 *)(lVar21 + 0x58) = *(undefined8 *)(lVar9 + 0xc8c);
    if ((((param_3 & 0x1000000) != 0) && (local_18c == 0)) &&
       (((*(byte *)(lVar21 + 0x18) & 2) == 0 && (fVar47 == 0.0)))) {
      if ((param_3 >> 10 & 1) == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined4 *)(lVar9 + 0xc90);
      }
      *(undefined4 *)(lVar21 + 0x5c) = uVar20;
      *(undefined4 *)(lVar21 + 0x58) = 0;
    }
    fVar47 = *(float *)(lVar21 + 0x58);
    if (*(float *)(lVar21 + 0x58) <= *(float *)(lVar9 + 0xcd4)) {
      fVar47 = *(float *)(lVar9 + 0xcd4);
    }
    if (fVar47 <= *(float *)(lVar9 + 0x1fb4)) {
      fVar47 = *(float *)(lVar9 + 0x1fb4);
    }
    *(float *)(lVar21 + 0x17c) = fVar47;
    fVar47 = *(float *)(lVar9 + 0x1fb8);
    *(float *)(lVar21 + 0x180) = fVar47;
    uVar29 = param_3 & 1;
    if ((param_3 & 1) == 0) {
      fVar53 = *(float *)(lVar9 + 0xcc8);
      fVar53 = fVar53 + fVar53 + *(float *)(lVar9 + 0x1238);
    }
    else {
      fVar53 = 0.0;
    }
    *(float *)(lVar21 + 0x68) = fVar53;
    if ((param_3 >> 10 & 1) == 0) {
      fVar47 = 0.0;
    }
    else {
      fVar48 = *(float *)(lVar9 + 0xcc8);
      fVar47 = fVar47 + *(float *)(lVar9 + 0x1238) + fVar48 + fVar48;
    }
    *(float *)(lVar21 + 0x6c) = fVar47;
    *(undefined4 *)(lVar21 + 0x2c0) = *(undefined4 *)(lVar9 + 0x1238);
    uVar30 = local_1dc & 0xff;
    local_1e0 = local_1dc & 0xff;
    if ((cVar16 != '\0') && (*(float *)(lVar21 + 0x50) != 0.0)) {
      local_1dc = (uint)CONCAT71((uint7)(uint3)(local_1dc >> 8),1);
    }
    if ((local_1e8 != '\0') && (*(float *)(lVar21 + 0x54) != 0.0)) {
      uVar30 = 1;
      local_1e0 = 1;
    }
    if (((param_3 & 1) == 0) && ((param_3 & 0x20) == 0)) {
      if ((((*(longlong *)(lVar9 + 0x1528) == lVar21) && (*(uint *)(lVar9 + 0x157c) == uVar29)) &&
          (*(uint *)(lVar9 + 0x1580) == uVar29)) && (*(uint *)(lVar9 + 0x1594) == uVar29)) {
        fVar47 = *(float *)(lVar21 + 0x28);
        fVar53 = fVar53 + *(float *)(lVar21 + 0x2c);
        fVar48 = *(float *)(lVar21 + 0x2c);
        fVar54 = fVar47 + *(float *)(lVar21 + 0x38);
        if (*(char *)(lVar38 + local_1b0) == (char)uVar29) {
          __dyn_tls_on_demand_init();
        }
        lVar31 = *(longlong *)(lVar38 + 0xec0);
        lVar45 = *(longlong *)(lVar31 + 0x1520);
        if (fVar47 <= *(float *)(lVar45 + 0x268)) {
          fVar47 = *(float *)(lVar45 + 0x268);
        }
        if (fVar47 - *(float *)(lVar31 + 0xcec) <= *(float *)(lVar31 + 0x100)) {
          if (fVar48 <= *(float *)(lVar45 + 0x26c)) {
            fVar48 = *(float *)(lVar45 + 0x26c);
          }
          if (fVar48 - *(float *)(lVar31 + 0xcf0) <= *(float *)(lVar31 + 0x104)) {
            if (*(float *)(lVar45 + 0x270) <= fVar54) {
              fVar54 = *(float *)(lVar45 + 0x270);
            }
            if (*(float *)(lVar31 + 0x100) < fVar54 + *(float *)(lVar31 + 0xcec)) {
              if (*(float *)(lVar45 + 0x274) <= fVar53) {
                fVar53 = *(float *)(lVar45 + 0x274);
              }
              if ((*(float *)(lVar31 + 0x104) < fVar53 + *(float *)(lVar31 + 0xcf0)) &&
                 (*(short *)(lVar9 + 0xb3a) == 2)) {
                if (*(char *)(lVar38 + local_1b0) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                if (*(int *)(*(longlong *)(lVar38 + 0xec0) + 0x1ccc) == -1) {
                  *(undefined1 *)(lVar21 + 0xd0) = 1;
                }
              }
            }
          }
        }
      }
      if (*(char *)(lVar21 + 0xd0) != '\0') {
        cVar26 = *(char *)(lVar21 + 0xcf);
        *(bool *)(lVar21 + 0xcf) = cVar26 == '\0';
        if (cVar26 != '\0') {
          uVar30 = 1;
        }
        local_1e0 = uVar30;
        FUN_180287ee0(lVar21);
      }
      cVar26 = *(char *)(lVar21 + 0xcf);
    }
    else {
      *(undefined1 *)(lVar21 + 0xcf) = 0;
      cVar26 = '\0';
    }
    uVar29 = 0;
    fVar53 = *(float *)(lVar21 + 0xc0);
    fVar47 = *(float *)(lVar21 + 0xc4);
    *(undefined1 *)(lVar21 + 0xd0) = 0;
    *(undefined4 *)(lVar21 + 0x70) = 0;
    *(undefined8 *)(lVar21 + 0x78) = 0;
    *(undefined8 *)(lVar21 + 0xc0) = 0;
    *(float *)(lVar21 + 0x74) = *(float *)(lVar21 + 0x6c) + *(float *)(lVar21 + 0x68);
    if (((cVar16 == '\0') && ((param_3 & 0x40) != 0)) && (cVar26 == '\0')) {
      bVar46 = true;
    }
    else {
      bVar46 = false;
    }
    if (((local_1e8 == '\0') && ((param_3 & 0x40) != 0)) && (cVar26 == '\0')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if ((local_1e6 == '\0') && ('\0' < *(char *)(lVar21 + 0xe8))) {
      bVar40 = true;
    }
    else {
      bVar40 = false;
    }
    if ((local_1e8 == '\0') && ('\0' < *(char *)(lVar21 + 0xe9))) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if ((bVar46) || (bVar40)) {
      uVar29 = 1;
    }
    if ((bVar12) || (bVar13)) {
      uVar29 = uVar29 | 2;
    }
    uVar24 = FUN_180274030(&local_1b8,lVar21,lVar21 + 0x48,uVar29);
    fVar48 = *(float *)(lVar21 + 0x38);
    fVar54 = *(float *)(lVar21 + 0x3c);
    fVar49 = local_1b8;
    if (bVar46) {
LAB_180277591:
      *(float *)(lVar21 + 0x38) = fVar49;
      local_1dc = (uint)CONCAT71((int7)((ulonglong)uVar24 >> 8),1);
    }
    else {
      fVar49 = fVar48;
      if (bVar40) {
        fVar49 = local_1b8;
        if ((*(char *)(lVar21 + 0xea) != '\0') && (fVar49 = fVar48, fVar48 <= local_1b8)) {
          fVar49 = local_1b8;
        }
        goto LAB_180277591;
      }
    }
    if (bVar12) {
LAB_1802775c4:
      *(float *)(lVar21 + 0x3c) = local_1b4;
      uVar29 = 1;
    }
    else {
      uVar29 = local_1e0;
      if (bVar13) {
        if (*(char *)(lVar21 + 0xea) == '\0') goto LAB_1802775c4;
        fVar55 = *(float *)(lVar21 + 0x3c);
        if (*(float *)(lVar21 + 0x3c) <= local_1b4) {
          fVar55 = local_1b4;
        }
        *(float *)(lVar21 + 0x3c) = fVar55;
        uVar29 = 1;
      }
    }
    cVar16 = (char)uVar29;
    if ((fVar48 != fVar49) || (fVar54 != *(float *)(lVar21 + 0x3c))) {
      FUN_180287ee0(lVar21);
    }
    pfVar25 = (float *)FUN_180273d40(local_130);
    lVar31 = local_1c8;
    fVar48 = *pfVar25;
    fVar54 = pfVar25[1];
    *(float *)(lVar21 + 0x38) = fVar48;
    *(float *)(lVar21 + 0x3c) = fVar54;
    if ((*(char *)(lVar21 + 0xcf) != '\0') && ((param_3 >> 0x18 & 1) == 0)) {
      fVar48 = (*(float *)(lVar21 + 0x28) + fVar48) - *(float *)(lVar21 + 0x28);
      fVar54 = (*(float *)(lVar21 + 0x68) + *(float *)(lVar21 + 0x2c)) - *(float *)(lVar21 + 0x2c);
    }
    *(float *)(lVar21 + 0x30) = fVar48;
    *(float *)(lVar21 + 0x34) = fVar54;
    if (((local_1e5 != '\0') &&
        (*(undefined4 *)(lVar21 + 0xe4) = 0xffffffff, (param_3 & 0xc000000) == 0x4000000)) &&
       (local_1e4 == '\0')) {
      lVar45 = (longlong)*(int *)(lVar9 + 0x2038) * 0x38;
      uVar20 = *(undefined4 *)(lVar45 + -0x14 + *(longlong *)(lVar9 + 0x2040));
      *(undefined4 *)(lVar21 + 0x2c) =
           *(undefined4 *)(lVar45 + -0x10 + *(longlong *)(lVar9 + 0x2040));
      *(undefined4 *)(lVar21 + 0x28) = uVar20;
    }
    if ((param_3 >> 0x18 & 1) != 0) {
      *(undefined2 *)(lVar21 + 0xde) = *(undefined2 *)(local_1c8 + 0x1b0);
      iVar17 = *(int *)(local_1c8 + 0x1b4);
      if (*(int *)(local_1c8 + 0x1b0) == iVar17) {
        iVar37 = *(int *)(local_1c8 + 0x1b0) + 1;
        if (iVar17 == 0) {
          iVar18 = 8;
        }
        else {
          iVar18 = iVar17 / 2 + iVar17;
        }
        if (iVar37 < iVar18) {
          iVar37 = iVar18;
        }
        if (iVar17 < iVar37) {
          pvVar22 = (void *)FUN_18026f580((longlong)iVar37 << 3);
          if (*(void **)(lVar31 + 0x1b8) != (void *)0x0) {
            memcpy(pvVar22,*(void **)(lVar31 + 0x1b8),(longlong)*(int *)(lVar31 + 0x1b0) << 3);
            FUN_18026f680(*(undefined8 *)(lVar31 + 0x1b8));
          }
          *(void **)(lVar31 + 0x1b8) = pvVar22;
          *(int *)(lVar31 + 0x1b4) = iVar37;
        }
      }
      *(longlong *)(*(longlong *)(lVar31 + 0x1b8) + (longlong)*(int *)(lVar31 + 0x1b0) * 8) = lVar21
      ;
      *(int *)(lVar31 + 0x1b0) = *(int *)(lVar31 + 0x1b0) + 1;
      if ((((param_3 >> 0x1a & 1) == 0) && (local_1e4 == '\0')) && (local_1e7 == '\0')) {
        *(undefined8 *)(lVar21 + 0x28) = *(undefined8 *)(lVar31 + 0x118);
      }
    }
    cVar15 = local_1e4;
    cVar26 = local_1e5;
    if ((*(float *)(lVar21 + 0xf4) == DAT_180381308) || (*(char *)(lVar21 + 0xec) != '\0')) {
      if ((param_3 >> 0x1c & 1) == 0) {
        if ((((param_3 >> 0x1a & 1) == 0) || (local_1e4 != '\0')) || (local_1d8 < '\x01')) {
          if ((((param_3 >> 0x19 & 1) == 0) || (local_1e4 != '\0')) || (local_1e7 != '\0'))
          goto LAB_180277839;
          puVar32 = local_118;
        }
        else {
          puVar32 = local_120;
        }
      }
      puVar39 = (undefined4 *)FUN_180281ed0(puVar32);
      uVar20 = *puVar39;
      *(undefined4 *)(lVar21 + 0x2c) = puVar39[1];
      *(undefined4 *)(lVar21 + 0x28) = uVar20;
    }
    else {
      local_1a8 = CONCAT44(*(float *)(lVar21 + 0xf8) -
                           *(float *)(lVar21 + 0x34) * *(float *)(lVar21 + 0x100),
                           *(float *)(lVar21 + 0xf4) -
                           *(float *)(lVar21 + 0x30) * *(float *)(lVar21 + 0xfc));
      FUN_1802795a0(lVar21);
    }
LAB_180277839:
    local_ec = *(float *)(lVar9 + 0xd94);
    if (*(float *)(lVar9 + 0xd94) <= *(float *)(lVar9 + 0xd9c)) {
      local_ec = *(float *)(lVar9 + 0xd9c);
    }
    local_160 = *(float *)(local_180 + 8);
    fStack_15c = *(float *)(local_180 + 0xc);
    fStack_158 = local_160 + *(float *)(local_180 + 0x10);
    fStack_154 = fStack_15c + *(float *)(local_180 + 0x14);
    local_f0 = *(float *)(lVar9 + 0xd90);
    if (*(float *)(lVar9 + 0xd90) <= *(float *)(lVar9 + 0xd98)) {
      local_f0 = *(float *)(lVar9 + 0xd98);
    }
    local_e4 = (*(float *)(local_180 + 0x24) + *(float *)(local_180 + 0x2c)) - local_ec;
    local_ec = local_ec + *(float *)(local_180 + 0x24);
    local_e8 = (*(float *)(local_180 + 0x20) + *(float *)(local_180 + 0x28)) - local_f0;
    local_f0 = local_f0 + *(float *)(local_180 + 0x20);
    if (((cVar15 == '\0') && ((param_3 >> 0x18 & 1) == 0)) &&
       ((0.0 < fStack_158 - local_160 && (0.0 < fStack_154 - fStack_15c)))) {
      fVar48 = *(float *)(lVar21 + 0x34);
      if (((*(byte *)(lVar21 + 0xf0) & 1) == 0) && ((*(byte *)(lVar21 + 0x14) & 1) == 0)) {
        fVar48 = *(float *)(lVar21 + 0x68);
      }
      fVar49 = local_f0 - *(float *)(lVar21 + 0x30);
      fVar48 = local_ec - fVar48;
      fVar54 = *(float *)(lVar21 + 0x2c);
      if ((fVar48 <= fVar54) && (fVar48 = local_e4, fVar54 <= local_e4)) {
        fVar48 = fVar54;
      }
      fVar54 = *(float *)(lVar21 + 0x28);
      if ((fVar49 <= fVar54) && (fVar49 = local_e8, fVar54 <= local_e8)) {
        fVar49 = fVar54;
      }
      *(float *)(lVar21 + 0x28) = fVar49;
      *(float *)(lVar21 + 0x2c) = fVar48;
    }
    local_1e0 = (uint)*(float *)(lVar21 + 0x28);
    *(float *)(lVar21 + 0x2c) = (float)(int)*(float *)(lVar21 + 0x2c);
    *(float *)(lVar21 + 0x28) = (float)(int)local_1e0;
    if ((param_3 >> 0x18 & 1) == 0) {
      local_1e0 = param_3 & 0xc000000;
      if (local_1e0 == 0x4000000) {
        fVar48 = *(float *)(lVar9 + 0xcbc);
      }
      else {
        fVar48 = *(float *)(lVar9 + 0xc94);
      }
    }
    else {
      fVar48 = *(float *)(lVar9 + 0xcb4);
    }
    local_1e0 = local_1e0 & 0xffffff00;
    *(float *)(lVar21 + 0x60) = fVar48;
    if ((cVar26 != '\0') && ((param_3 >> 0xc & 1) == 0)) {
      if ((param_3 >> 0x1a & 1) == 0) {
        local_1e0 = (uint)((param_3 & 0x3000000) == 0);
      }
      else {
        uVar29 = local_1e0 >> 8;
        local_1e0 = CONCAT31((int3)uVar29,1);
      }
    }
    bVar46 = true;
    if ((param_3 >> 0x18 & 1) != 0) {
      bVar46 = *(char *)(*(longlong *)(lVar21 + 0x3b0) + 0xd1) == '\0';
    }
    local_f8 = 0xffffffff;
    local_f4 = 0xffffffff;
    local_e0[0] = 0.0;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    local_e0[3] = 0.0;
    if ((param_3 & 0x5000000) == 0x1000000) {
      uVar29 = (uint)(((byte)*(undefined4 *)(lVar21 + 0x18) & 0xc) == 0xc);
    }
    else {
      uVar29 = (*(char *)(lVar9 + 0x7e) != '\0') + 1;
    }
    fVar54 = *(float *)(lVar9 + 0x1238) * DAT_180380bc4;
    fVar50 = fVar48 + fVar50 + *(float *)(lVar9 + 0x1238) * DAT_180380a3c;
    if (fVar54 <= fVar50) {
      fVar54 = fVar50;
    }
    uVar30 = local_1dc;
    if ((bVar46 != false) && (*(char *)(lVar21 + 0xcf) == '\0')) {
      local_200 = &local_f0;
      local_208 = local_e0;
      uVar19 = FUN_180274650(lVar21,&local_f8,&local_f4,uVar29);
      uVar30 = local_1dc;
      if (uVar19 != 0) {
        uVar30 = local_1dc & 0xff;
        if ((uVar19 & 1) != 0) {
          uVar30 = 1;
        }
        if ((uVar19 & 2) != 0) {
          cVar16 = '\x01';
        }
      }
    }
    lVar31 = local_1c8;
    *(undefined1 *)(lVar21 + 0xd8) = (undefined1)local_f8;
    *(undefined1 *)(lVar21 + 0xd9) = (undefined1)local_f4;
    if (*(char *)(lVar21 + 0xcf) == '\0') {
      if (local_1c0 == 0) {
        fVar50 = 0.0;
        fVar48 = 0.0;
      }
      else {
        fVar50 = *(float *)(lVar21 + 0x58) + *(float *)(lVar21 + 0x58) + *(float *)(lVar21 + 0x40);
        fVar48 = *(float *)(lVar21 + 0x5c) + *(float *)(lVar21 + 0x5c) + *(float *)(lVar21 + 0x44);
      }
      if ((char)uVar30 == '\0') {
        fVar53 = (*(float *)(lVar21 + 0x230) - *(float *)(lVar21 + 0x228)) + fVar53;
      }
      else {
        fVar53 = *(float *)(lVar21 + 0x38);
      }
      if (cVar16 == '\0') {
        fVar47 = (*(float *)(lVar21 + 0x234) - *(float *)(lVar21 + 0x22c)) + fVar47;
      }
      else {
        fVar47 = *(float *)(lVar21 + 0x3c) - (*(float *)(lVar21 + 0x7c) + *(float *)(lVar21 + 0x74))
        ;
      }
      cVar16 = *(char *)(lVar21 + 200);
      if (((param_3 >> 0xe & 1) != 0) || ((fVar47 < fVar48 && ((param_3 & 8) == 0)))) {
        cVar26 = '\x01';
      }
      else {
        cVar26 = '\0';
      }
      *(char *)(lVar21 + 0xc9) = cVar26;
      if ((param_3 >> 0xf & 1) == 0) {
        if (cVar26 == '\0') {
          fVar49 = 0.0;
        }
        else {
          fVar49 = *(float *)(lVar9 + 0xcfc);
        }
        if ((fVar53 - fVar49 < fVar50) && ((param_3 & 0x808) == 0x800)) goto LAB_180277bb3;
        cVar15 = '\0';
      }
      else {
LAB_180277bb3:
        cVar15 = '\x01';
      }
      *(char *)(lVar21 + 200) = cVar15;
      bVar27 = cVar16 != cVar15 | *(char *)(lVar21 + 0xcb) * '\x02';
      *(byte *)(lVar21 + 0xcb) = bVar27;
      if (bVar27 == 0) {
LAB_180277bf8:
        uVar14 = 0;
      }
      else {
        uVar30 = 0;
        do {
          uVar30 = uVar30 + 1;
          bVar27 = bVar27 & bVar27 - 1;
        } while (bVar27 != 0);
        if (uVar30 < 4) goto LAB_180277bf8;
        uVar14 = 1;
        *(undefined1 *)(lVar21 + 200) = 1;
      }
      *(undefined1 *)(lVar21 + 0xca) = uVar14;
      if (*(char *)(lVar21 + 200) == '\0') {
        fVar50 = 0.0;
      }
      else {
        if (cVar26 == '\0') {
          if ((fVar47 - *(float *)(lVar9 + 0xcfc) < fVar48) && ((param_3 & 8) == 0)) {
            *(undefined1 *)(lVar21 + 0xc9) = 1;
            fVar50 = *(float *)(lVar9 + 0xcfc);
            goto LAB_180277c49;
          }
          *(undefined1 *)(lVar21 + 0xc9) = 0;
        }
        fVar50 = *(float *)(lVar9 + 0xcfc);
      }
LAB_180277c49:
      if (*(char *)(lVar21 + 0xc9) == '\0') {
        fVar47 = 0.0;
      }
      else {
        fVar47 = *(float *)(lVar9 + 0xcfc);
      }
      *(float *)(lVar21 + 0xc0) = fVar47;
      *(float *)(lVar21 + 0xc4) = fVar50;
      *(float *)(lVar21 + 0x78) = fVar47 + *(float *)(lVar21 + 0x78);
      *(float *)(lVar21 + 0x7c) = fVar50 + *(float *)(lVar21 + 0x7c);
    }
    if (((param_3 & 0x5000000) == 0x1000000) && (local_1e7 == '\0')) {
      pfVar25 = (float *)(local_1c8 + 0x268);
    }
    else {
      pfVar25 = &local_160;
    }
    uVar24 = *(undefined8 *)pfVar25;
    uVar11 = *(undefined8 *)(pfVar25 + 2);
    local_19c = *(float *)(lVar21 + 0x2c);
    local_1a0 = *(float *)(lVar21 + 0x28);
    local_198 = local_1a0 + *(float *)(lVar21 + 0x38);
    local_194 = local_19c + *(float *)(lVar21 + 0x68);
    *(float *)(lVar21 + 0x218) = local_1a0;
    *(float *)(lVar21 + 0x21c) = local_19c;
    *(float *)(lVar21 + 0x220) = local_1a0 + *(float *)(lVar21 + 0x30);
    *(float *)(lVar21 + 0x224) = local_19c + *(float *)(lVar21 + 0x34);
    local_178._0_4_ = (float)uVar24;
    local_178._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
    fVar50 = *(float *)(lVar21 + 0x218);
    if (*(float *)(lVar21 + 0x218) <= (float)local_178) {
      fVar50 = (float)local_178;
    }
    uStack_170._0_4_ = (float)uVar11;
    fVar47 = local_19c;
    if (local_19c <= local_178._4_4_) {
      fVar47 = local_178._4_4_;
    }
    uStack_170._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    *(float *)(lVar21 + 0x218) = fVar50;
    *(float *)(lVar21 + 0x21c) = fVar47;
    fVar50 = *(float *)(lVar21 + 0x220);
    if ((float)uStack_170 <= *(float *)(lVar21 + 0x220)) {
      fVar50 = (float)uStack_170;
    }
    fVar47 = *(float *)(lVar21 + 0x224);
    if (uStack_170._4_4_ <= *(float *)(lVar21 + 0x224)) {
      fVar47 = uStack_170._4_4_;
    }
    *(float *)(lVar21 + 0x220) = fVar50;
    *(float *)(lVar21 + 0x224) = fVar47;
    fVar50 = *(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x70);
    fVar48 = *(float *)(lVar21 + 0x2c) + *(float *)(lVar21 + 0x74);
    fVar47 = (*(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x30)) - *(float *)(lVar21 + 0x78);
    fVar53 = (*(float *)(lVar21 + 0x2c) + *(float *)(lVar21 + 0x34)) - *(float *)(lVar21 + 0x7c);
    *(float *)(lVar21 + 0x228) = fVar50;
    *(float *)(lVar21 + 0x22c) = fVar48;
    *(float *)(lVar21 + 0x230) = fVar47;
    *(float *)(lVar21 + 0x234) = fVar53;
    if ((param_3 & 0x401) == 1) {
      fVar49 = *(float *)(lVar21 + 100);
    }
    else {
      fVar49 = *(float *)(lVar9 + 0xcd0);
    }
    fVar55 = *(float *)(lVar21 + 100) * DAT_180380ac0;
    fVar50 = fVar50 + DAT_180380ac0 + fVar55;
    iVar17 = (int)fVar50;
    if ((fVar50 < 0.0) && ((float)iVar17 != fVar50)) {
      iVar17 = iVar17 + -1;
    }
    fVar50 = fVar49 * DAT_180380ac0 + fVar48 + DAT_180380ac0;
    *(float *)(lVar21 + 0x238) = (float)iVar17;
    iVar17 = (int)fVar50;
    if ((fVar50 < 0.0) && ((float)iVar17 != fVar50)) {
      iVar17 = iVar17 + -1;
    }
    fVar47 = fVar47 - fVar55;
    *(float *)(lVar21 + 0x23c) = (float)iVar17;
    iVar17 = (int)fVar47;
    if ((fVar47 < 0.0) && ((float)iVar17 != fVar47)) {
      iVar17 = iVar17 + -1;
    }
    fVar53 = fVar53 - fVar55;
    *(float *)(lVar21 + 0x240) = (float)iVar17;
    iVar17 = (int)fVar53;
    if ((fVar53 < 0.0) && ((float)iVar17 != fVar53)) {
      iVar17 = iVar17 + -1;
    }
    *(float *)(lVar21 + 0x244) = (float)iVar17;
    fVar50 = *(float *)(lVar21 + 0x23c);
    fVar47 = local_178._4_4_;
    if ((local_178._4_4_ <= fVar50) && (fVar47 = uStack_170._4_4_, fVar50 <= uStack_170._4_4_)) {
      fVar47 = fVar50;
    }
    fVar50 = *(float *)(lVar21 + 0x238);
    fVar53 = (float)local_178;
    if (((float)local_178 <= fVar50) && (fVar53 = (float)uStack_170, fVar50 <= (float)uStack_170)) {
      fVar53 = fVar50;
    }
    *(float *)(lVar21 + 0x238) = fVar53;
    *(float *)(lVar21 + 0x23c) = fVar47;
    fVar50 = *(float *)(lVar21 + 0x244);
    if ((local_178._4_4_ <= fVar50) &&
       (local_178._4_4_ = uStack_170._4_4_, fVar50 <= uStack_170._4_4_)) {
      local_178._4_4_ = fVar50;
    }
    fVar50 = *(float *)(lVar21 + 0x240);
    if (((float)local_178 <= fVar50) &&
       (local_178._0_4_ = (float)uStack_170, fVar50 <= (float)uStack_170)) {
      local_178._0_4_ = fVar50;
    }
    *(float *)(lVar21 + 0x240) = (float)local_178;
    *(float *)(lVar21 + 0x244) = local_178._4_4_;
    fVar47 = (*(float *)(lVar21 + 0x58) + *(float *)(lVar21 + 0x58) + *(float *)(lVar21 + 0x40)) -
             (*(float *)(lVar21 + 0x230) - *(float *)(lVar21 + 0x228));
    fVar50 = 0.0;
    if (0.0 <= fVar47) {
      fVar50 = fVar47;
    }
    *(float *)(lVar21 + 0xa0) = fVar50;
    fVar47 = (*(float *)(lVar21 + 0x5c) + *(float *)(lVar21 + 0x5c) + *(float *)(lVar21 + 0x44)) -
             (*(float *)(lVar21 + 0x234) - *(float *)(lVar21 + 0x22c));
    fVar50 = 0.0;
    if (0.0 <= fVar47) {
      fVar50 = fVar47;
    }
    *(float *)(lVar21 + 0xa4) = fVar50;
    local_178 = uVar24;
    uStack_170 = uVar11;
    puVar39 = (undefined4 *)FUN_1802801e0(local_110,lVar21);
    uVar20 = puVar39[1];
    *(undefined4 *)(lVar21 + 0x98) = *puVar39;
    *(undefined4 *)(lVar21 + 0x9c) = uVar20;
    *(undefined4 *)(lVar21 + 0xa8) = 0x7f7fffff;
    *(undefined4 *)(lVar21 + 0xac) = 0x7f7fffff;
    *(undefined8 *)(lVar21 + 0x80) = 0;
    lVar45 = *(longlong *)(*(longlong *)(lVar9 + 0x1228) + 8);
    local_108 = *(undefined8 *)(lVar45 + 0x28);
    uStack_100 = *(undefined8 *)(lVar45 + 0x30);
    FUN_1802926d0(*(undefined8 *)(lVar21 + 0x2c8),&local_108);
    lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar45 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar45 = *(longlong *)(lVar45 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar45 + 0x1520) + 0xce) = 1;
    lVar45 = *(longlong *)(lVar45 + 0x1520);
    FUN_180292550(*(undefined8 *)(lVar45 + 0x2c8),&local_178,&uStack_170,0);
    lVar33 = (longlong)*(int *)(*(longlong *)(lVar45 + 0x2c8) + 0xa0);
    lVar38 = *(longlong *)(*(longlong *)(lVar45 + 0x2c8) + 0xa8);
    uVar20 = *(undefined4 *)(lVar38 + -0xc + lVar33 * 0x10);
    uVar2 = *(undefined4 *)(lVar38 + -8 + lVar33 * 0x10);
    uVar3 = *(undefined4 *)(lVar38 + -4 + lVar33 * 0x10);
    *(undefined4 *)(lVar45 + 0x268) = *(undefined4 *)(lVar38 + -0x10 + lVar33 * 0x10);
    *(undefined4 *)(lVar45 + 0x26c) = uVar20;
    *(undefined4 *)(lVar45 + 0x270) = uVar2;
    *(undefined4 *)(lVar45 + 0x274) = uVar3;
    bVar12 = false;
    if (((param_3 & 0x5000000) == 0x1000000) && (local_1e7 == '\0')) {
      if ((*(int *)(lVar31 + 0x1b0) < 2) ||
         (lVar45 = *(longlong *)
                    (*(longlong *)(lVar31 + 0x1b8) + -0x10 + (longlong)*(int *)(lVar31 + 0x1b0) * 8)
         , lVar45 == 0)) {
LAB_180278130:
        bVar40 = false;
      }
      else {
        if ((*(float *)(lVar45 + 0x2c) + *(float *)(lVar45 + 0x34) <= *(float *)(lVar21 + 0x2c)) ||
           (*(float *)(lVar21 + 0x2c) + *(float *)(lVar21 + 0x34) <= *(float *)(lVar45 + 0x2c)))
        goto LAB_180278130;
        if ((*(float *)(lVar45 + 0x28) + *(float *)(lVar45 + 0x30) <= *(float *)(lVar21 + 0x28)) ||
           (*(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x30) <= *(float *)(lVar45 + 0x28)))
        goto LAB_180278130;
        bVar40 = true;
      }
      if (((*(int *)(*(longlong *)(*(int **)(lVar21 + 0x2c8) + 2) + -0x20 +
                    (longlong)**(int **)(lVar21 + 0x2c8) * 0x48) == 0) &&
          (*(int *)(*(longlong *)(lVar31 + 0x2c8) + 0x20) != 0)) && (!bVar40)) {
        bVar12 = true;
        *(longlong *)(lVar21 + 0x2c8) = *(longlong *)(lVar31 + 0x2c8);
      }
    }
    lVar31 = *(longlong *)(lVar9 + 0x2258);
    if (lVar31 == 0) {
      lVar31 = *(longlong *)(lVar9 + 0x2070);
    }
    cVar16 = (char)local_1e0;
    if ((cVar16 == '\0') &&
       ((lVar31 == 0 || (*(longlong *)(lVar21 + 0x3d0) != *(longlong *)(lVar31 + 0x3d0))))) {
      uVar24 = 0;
    }
    else {
      uVar24 = 1;
    }
    local_200 = local_e0;
    local_208 = (float *)CONCAT44(local_208._4_4_,uVar29);
    local_1f8 = (float)(int)fVar54;
    FUN_180275820(lVar21,&local_1a0,uVar24,bVar46);
    if (bVar12) {
      *(longlong *)(lVar21 + 0x2c8) = lVar21 + 0x2d0;
    }
    if (((param_3 & 8) == 0) && ((param_3 >> 0xb & 1) != 0)) {
      bVar46 = true;
    }
    else {
      bVar46 = false;
    }
    fVar50 = *(float *)(lVar21 + 0x50);
    fVar47 = fVar50;
    if (fVar50 == 0.0) {
      fVar53 = (*(float *)(lVar21 + 0x30) - (*(float *)(lVar21 + 0x58) + *(float *)(lVar21 + 0x58)))
               - (*(float *)(lVar21 + 0x78) + *(float *)(lVar21 + 0x70));
      if (bVar46) {
        fVar47 = *(float *)(lVar21 + 0x40);
        if (*(float *)(lVar21 + 0x40) <= fVar53) {
          fVar47 = fVar53;
        }
      }
      else {
        fVar47 = 0.0;
        if (0.0 <= fVar53) {
          fVar47 = fVar53;
        }
      }
    }
    fVar53 = *(float *)(lVar21 + 0x54);
    fVar48 = fVar53;
    if (fVar53 == 0.0) {
      fVar54 = (*(float *)(lVar21 + 0x34) - (*(float *)(lVar21 + 0x5c) + *(float *)(lVar21 + 0x5c)))
               - (*(float *)(lVar21 + 0x7c) + *(float *)(lVar21 + 0x74));
      if ((param_3 & 8) == 0) {
        fVar48 = *(float *)(lVar21 + 0x44);
        if (*(float *)(lVar21 + 0x44) <= fVar54) {
          fVar48 = fVar54;
        }
      }
      else {
        fVar48 = 0.0;
        if (0.0 <= fVar54) {
          fVar48 = fVar54;
        }
      }
    }
    fVar54 = *(float *)(lVar21 + 0x58);
    fVar49 = *(float *)(lVar21 + 0x98);
    fVar55 = fVar54;
    if (fVar54 <= *(float *)(lVar21 + 100)) {
      fVar55 = *(float *)(lVar21 + 100);
    }
    fVar52 = (float)(int)(fVar55 + (*(float *)(lVar21 + 0x228) - fVar49));
    *(float *)(lVar21 + 0x248) = fVar52;
    fVar55 = *(float *)(lVar21 + 0x5c);
    fVar4 = *(float *)(lVar21 + 0x9c);
    fVar51 = fVar55;
    if (fVar55 <= *(float *)(lVar21 + 100)) {
      fVar51 = *(float *)(lVar21 + 100);
    }
    fVar51 = (float)(int)((*(float *)(lVar21 + 0x22c) - fVar4) + fVar51);
    *(float *)(lVar21 + 0x24c) = fVar51;
    *(float *)(lVar21 + 0x250) = fVar52 + fVar47;
    *(float *)(lVar21 + 0x254) = fVar48 + fVar51;
    *(undefined8 *)(lVar21 + 600) = *(undefined8 *)(lVar21 + 0x248);
    *(undefined8 *)(lVar21 + 0x260) = *(undefined8 *)(lVar21 + 0x250);
    fVar47 = *(float *)(lVar21 + 0x70);
    fVar51 = (*(float *)(lVar21 + 0x28) - fVar49) + fVar54 + fVar47;
    *(float *)(lVar21 + 0x278) = fVar51;
    fVar48 = *(float *)(lVar21 + 0x74);
    fVar52 = (*(float *)(lVar21 + 0x2c) - fVar4) + fVar55 + fVar48;
    *(float *)(lVar21 + 0x27c) = fVar52;
    if (fVar50 == 0.0) {
      fVar50 = (*(float *)(lVar21 + 0x30) - (fVar54 + fVar54)) -
               (fVar47 + *(float *)(lVar21 + 0x78));
    }
    *(float *)(lVar21 + 0x280) = fVar51 + fVar50;
    if (fVar53 == 0.0) {
      fVar53 = (*(float *)(lVar21 + 0x34) - (fVar55 + fVar55)) -
               (fVar48 + *(float *)(lVar21 + 0x7c));
    }
    *(float *)(lVar21 + 0x284) = fVar52 + fVar53;
    *(float *)(lVar21 + 0x15c) = (fVar54 + fVar47) - fVar49;
    *(undefined8 *)(lVar21 + 0x160) = 0;
    fVar50 = ((*(float *)(lVar21 + 0x28) + fVar54) - fVar49) + fVar47 + 0.0;
    fVar48 = ((fVar55 + *(float *)(lVar21 + 0x2c)) - fVar4) + fVar48;
    *(float *)(lVar21 + 0x128) = fVar50;
    *(float *)(lVar21 + 300) = fVar48;
    *(float *)(lVar21 + 0x168) = fVar50 - *(float *)(lVar21 + 0x128);
    *(float *)(lVar21 + 0x16c) = fVar48 - *(float *)(lVar21 + 300);
    uVar20 = *(undefined4 *)(lVar21 + 300);
    uVar2 = *(undefined4 *)(lVar21 + 0x128);
    *(undefined4 *)(lVar21 + 0x118) = uVar2;
    *(undefined4 *)(lVar21 + 0x11c) = uVar20;
    *(undefined4 *)(lVar21 + 0x120) = uVar2;
    *(undefined4 *)(lVar21 + 0x124) = uVar20;
    *(undefined4 *)(lVar21 + 0x130) = uVar2;
    *(undefined4 *)(lVar21 + 0x134) = uVar20;
    *(undefined4 *)(lVar21 + 0x138) = uVar2;
    *(undefined4 *)(lVar21 + 0x13c) = uVar20;
    *(undefined8 *)(lVar21 + 0x148) = 0;
    *(undefined8 *)(lVar21 + 0x140) = 0;
    *(undefined8 *)(lVar21 + 0x150) = 0;
    *(undefined2 *)(lVar21 + 0x158) = 0;
    *(undefined4 *)(lVar21 + 0x170) = 0;
    *(undefined2 *)(lVar21 + 0x174) = *(undefined2 *)(lVar21 + 0x176);
    *(undefined4 *)(lVar21 + 0x176) = 0x10000;
    *(bool *)(lVar21 + 0x17a) = 0.0 < *(float *)(lVar21 + 0xa4);
    *(undefined1 *)(lVar21 + 0x17b) = 0;
    fVar50 = *(float *)(lVar9 + 0xcd4);
    if (local_1e5 != '\0') {
      *(undefined8 *)(lVar21 + 0x196) = 0;
    }
    sVar34 = (short)(int)fVar50;
    *(short *)(lVar21 + 0x18c) = sVar34;
    sVar28 = *(short *)(lVar21 + 0x196);
    sVar7 = *(short *)(lVar21 + 0x198);
    bVar46 = sVar28 != 0;
    if ((sVar28 != 0) && (sVar7 != 0)) {
      sVar28 = sVar28 + sVar34;
    }
    *(short *)(lVar21 + 400) = sVar28;
    sVar28 = sVar28 + sVar7;
    sVar8 = *(short *)(lVar21 + 0x19a);
    if ((sVar7 != 0 || bVar46) && (sVar8 != 0)) {
      sVar28 = sVar28 + sVar34;
    }
    *(short *)(lVar21 + 0x192) = sVar28;
    sVar28 = sVar28 + sVar8;
    if ((sVar8 != 0 || (sVar7 != 0 || bVar46)) && (*(short *)(lVar21 + 0x19c) != 0)) {
      sVar28 = sVar28 + sVar34;
    }
    *(short *)(lVar21 + 0x194) = sVar28;
    *(uint *)(lVar21 + 0x188) = (uint)(ushort)(sVar28 + *(short *)(lVar21 + 0x19c));
    *(undefined8 *)(lVar21 + 0x196) = 0;
    *(undefined4 *)(lVar21 + 0x184) = *(undefined4 *)(lVar21 + 0x188);
    *(undefined4 *)(lVar21 + 0x188) = 0;
    *(undefined8 *)(lVar21 + 0x1a0) = 0;
    *(undefined4 *)(lVar21 + 0x1a8) = 0;
    FUN_18028a390(lVar21 + 0x1b0);
    lVar31 = local_1c8;
    *(longlong *)(lVar21 + 0x1c0) = lVar21 + 0x298;
    *(undefined8 *)(lVar21 + 0x1c8) = 0;
    *(undefined4 *)(lVar21 + 0x1d4) = 1;
    if (local_1c8 == 0) {
      uVar20 = 1;
    }
    else {
      uVar20 = *(undefined4 *)(local_1c8 + 0x1d4);
    }
    *(undefined4 *)(lVar21 + 0x1d8) = uVar20;
    fVar50 = *(float *)(lVar21 + 0x30);
    if ((param_3 >> 0x18 & 1) == 0) {
      if (0.0 < fVar50) {
        bVar46 = (param_3 & 0x40) == 0;
        goto LAB_180278676;
      }
LAB_18027867e:
      bVar46 = false;
    }
    else {
      if (fVar50 <= 0.0) goto LAB_18027867e;
      bVar46 = (*(byte *)(lVar21 + 0x18) & 0x50) == 0;
LAB_180278676:
      if (!bVar46) goto LAB_18027867e;
      bVar46 = true;
    }
    if (bVar46) {
      fVar50 = fVar50 * DAT_180380afc;
    }
    else {
      fVar50 = *(float *)(lVar9 + 0x1238) * DAT_180380fe8;
    }
    *(float *)(lVar21 + 0x1ec) = (float)(int)fVar50;
    *(float *)(lVar21 + 0x1e8) = (float)(int)fVar50;
    FUN_18028a6d0(lVar21 + 0x1f8);
    *(undefined4 *)(lVar21 + 0x1f0) = 0xbf800000;
    FUN_18028a6d0(lVar21 + 0x208);
    uVar43 = (ulonglong)_tls_index;
    if ((param_3 >> 0x1b & 1) != 0) {
      lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar43 * 8);
      if (*(char *)(lVar45 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar20 = FUN_180268ed0(*(longlong *)(lVar45 + 0xec0) + 0x1170);
      *(undefined4 *)(lVar21 + 0x1dc) = uVar20;
    }
    if ('\0' < *(char *)(lVar21 + 0xe8)) {
      *(char *)(lVar21 + 0xe8) = *(char *)(lVar21 + 0xe8) + -1;
    }
    if ('\0' < *(char *)(lVar21 + 0xe9)) {
      *(char *)(lVar21 + 0xe9) = *(char *)(lVar21 + 0xe9) + -1;
    }
    if ((cVar16 != '\0') && (FUN_1802827b0(lVar21,2), lVar21 == *(longlong *)(lVar9 + 0x2070))) {
      FUN_180283e70(lVar21,0);
    }
    if ((((*(char *)(lVar9 + 0x80) != '\0') && (*(longlong *)(lVar9 + 0x2070) != 0)) &&
        (*(longlong *)(*(longlong *)(lVar9 + 0x2070) + 0x3c0) == lVar21)) &&
       ((*(int *)(lVar9 + 0x1594) == 0 && (cVar16 = FUN_18027e2e0(0x1224,0,0), cVar16 != '\0')))) {
      lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar43 * 8);
      if (*(char *)(lVar45 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)(lVar45 + 0xec0) + 0x2858) == '\0') {
        FUN_180287e40();
      }
    }
    fVar48 = local_194;
    fVar53 = local_198;
    fVar47 = local_19c;
    fVar50 = local_1a0;
    if ((param_3 & 1) == 0) {
      local_150 = local_1a0 + *(float *)(lVar21 + 100);
      local_14c = local_19c;
      local_148 = local_198 - *(float *)(lVar21 + 100);
      local_144 = local_194;
      FUN_180275f20(lVar21,&local_150,local_188,local_168);
    }
    *(undefined4 *)(lVar21 + 0x288) = 0;
    if ((param_3 >> 0x19 & 1) != 0) {
      *(longlong *)(lVar9 + 0x26d8) = lVar21;
    }
    if ((param_3 >> 0x18 & 1) == 0) {
      uVar14 = *(char *)(lVar9 + 0x7f) == '\0';
    }
    else {
      uVar14 = *(undefined1 *)(lVar31 + 0xf0);
    }
    *(undefined1 *)(lVar21 + 0xf0) = uVar14;
    pvVar22 = ThreadLocalStoragePointer;
    *(undefined4 *)(lVar21 + 0x1e0) = 0;
    lVar45 = *(longlong *)((longlong)pvVar22 + uVar43 * 8);
    if (*(char *)(lVar45 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar38 = *(longlong *)(lVar45 + 0xec0);
    if (*(float *)(lVar38 + 0x100) < fVar50 - *(float *)(lVar38 + 0xcec)) {
LAB_1802788f1:
      uVar29 = 0;
    }
    else {
      if (((*(float *)(lVar38 + 0x104) < fVar47 - *(float *)(lVar38 + 0xcf0)) ||
          (*(float *)(lVar38 + 0xcec) + fVar53 <= *(float *)(lVar38 + 0x100))) ||
         (*(float *)(lVar38 + 0xcf0) + fVar48 <= *(float *)(lVar38 + 0x104))) goto LAB_1802788f1;
      uVar29 = 1;
    }
    *(uint *)(lVar21 + 0x1e0) = *(uint *)(lVar21 + 0x1e0) | uVar29;
    if (*(char *)(lVar45 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    FUN_18026f490(*(undefined4 *)(lVar21 + 0x8c),
                  *(undefined4 *)(*(longlong *)(lVar45 + 0xec0) + 0x1eb8),
                  *(undefined4 *)(lVar21 + 0x1e0),&local_1a0);
    iVar37 = *(int *)(lVar9 + 0x1ebc);
    iVar17 = local_1d4;
    if ((iVar37 != 0) &&
       ((*(int *)(lVar21 + 0x10) == iVar37 || (*(int *)(lVar21 + 0x8c) == iVar37)))) {
      FUN_180289430();
      iVar17 = local_1d4;
    }
  }
  if (*(char *)(lVar21 + 0xd2) == '\0') {
    FUN_180271790(lVar21 + 0x238,lVar21 + 0x240,1);
  }
  *(undefined1 *)(lVar21 + 0xce) = 0;
  *(short *)(lVar21 + 0xda) = *(short *)(lVar21 + 0xda) + 1;
  *(undefined4 *)(lVar9 + 0x1f48) = 0;
  if (local_1d0 == iVar17) goto LAB_180278c9e;
  if (*(char *)(lVar21 + 0xd2) != '\0') {
    *(undefined1 *)(lVar21 + 0xd1) = 1;
    goto LAB_180278c9e;
  }
  if ((param_3 & 0x11000000) == 0x1000000) {
    if (((((*(uint *)(lVar21 + 0x18) & 0x100) == 0) || (*(char *)(lVar9 + 0x20d1) == '\0')) ||
        (*(longlong *)(lVar9 + 0x2070) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x2070) + 0x3d8) != *(longlong *)(lVar21 + 0x3d8))) {
      bVar46 = false;
    }
    else {
      bVar46 = true;
    }
    if (((*(char *)(lVar9 + 0x2858) == '\0') && (!bVar46)) &&
       ((*(float *)(lVar21 + 0x220) <= *(float *)(lVar21 + 0x218) ||
        (*(float *)(lVar21 + 0x224) <= *(float *)(lVar21 + 0x21c))))) {
      if ((*(char *)(lVar21 + 0xe8) < '\x01') && (*(char *)(lVar21 + 0xe9) < '\x01')) {
        *(undefined1 *)(lVar21 + 0xeb) = 1;
      }
      else {
        *(undefined1 *)(lVar21 + 0xec) = 1;
      }
    }
    if (lVar31 != 0) {
      if ((*(char *)(lVar31 + 0xcf) != '\0') || ('\0' < *(char *)(lVar31 + 0xeb))) {
        *(undefined1 *)(lVar21 + 0xeb) = 1;
      }
      if ('\0' < *(char *)(lVar31 + 0xec)) {
        *(undefined1 *)(lVar21 + 0xec) = 1;
      }
    }
  }
  if (*(float *)(lVar9 + 0xc84) <= 0.0) {
    *(undefined1 *)(lVar21 + 0xeb) = 1;
  }
  if ((*(char *)(lVar21 + 0xeb) < '\x01') && (*(char *)(lVar21 + 0xec) < '\x01')) {
    bVar46 = false;
    if ('\0' < *(char *)(lVar21 + 0xed)) goto LAB_180278c35;
    uVar14 = 0;
  }
  else {
    bVar46 = true;
LAB_180278c35:
    uVar14 = 1;
  }
  *(undefined1 *)(lVar21 + 0xd4) = uVar14;
  if ('\0' < *(char *)(lVar21 + 0xee)) {
    *(char *)(lVar21 + 0xee) = *(char *)(lVar21 + 0xee) + -1;
    *(uint *)(lVar21 + 0x14) = *(uint *)(lVar21 + 0x14) | 0x30200;
  }
  uVar14 = 0;
  if ((((*(char *)(lVar21 + 0xcf) != '\0') || (*(char *)(lVar21 + 0xcc) == '\0')) || (bVar46)) &&
     (((*(char *)(lVar21 + 0xe8) < '\x01' && (*(char *)(lVar21 + 0xe9) < '\x01')) &&
      (*(char *)(lVar21 + 0xec) < '\x01')))) {
    uVar14 = 1;
  }
  *(undefined1 *)(lVar21 + 0xd1) = uVar14;
LAB_180278c9e:
  if ((*(char *)(lVar21 + 0xd5) == '\0') &&
     (((*(char *)(lVar9 + 0xa3) != '\0' && (local_1c0 == 0)) ||
      ((*(char *)(lVar9 + 0xa4) != '\0' &&
       ((int)*(char *)(lVar9 + 0x2920) == *(int *)(lVar9 + 0x14f0))))))) {
    if ('\0' < *(char *)(lVar21 + 0xe8)) {
      *(char *)(lVar21 + 0xe8) = *(char *)(lVar21 + 0xe8) + '\x01';
    }
    if ('\0' < *(char *)(lVar21 + 0xe9)) {
      *(char *)(lVar21 + 0xe9) = *(char *)(lVar21 + 0xe9) + '\x01';
    }
    bVar46 = false;
  }
  else {
    bVar46 = *(char *)(lVar21 + 0xd1) == '\0';
  }
  return bVar46;
}



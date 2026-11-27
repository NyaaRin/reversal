// 0x1800859c0  FUN_1800859c0
// size=1759 thunk=false
// signature: undefined FUN_1800859c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800859c0(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  void *_Dst;
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined8 *_Src;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 auStack_1e8 [32];
  char local_1c8;
  bool local_1c7;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  float *local_198;
  uint local_188;
  undefined4 local_184;
  undefined8 local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulonglong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8 [3];
  ulonglong uStack_e0;
  
  uStack_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  *param_3 = 0.0;
  *param_4 = 0.0;
  if ((param_2 == (int *)0x0) || (*param_2 < 1)) {
    return 0;
  }
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  local_1c0 = param_4;
  local_1b8 = param_3;
  local_1b0 = param_4;
  local_1a8 = param_2;
  local_1a0 = param_1;
  local_198 = param_3;
  uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar15 = (*pcVar2)(DAT_1803fa360,uVar10);
  if (lVar15 != 0) {
    pfVar16 = (float *)FUN_18001d530(lVar15);
    fVar20 = pfVar16[2];
    fVar25 = pfVar16[1] * pfVar16[1] + *pfVar16 * *pfVar16;
    if (fVar25 < 0.0) {
      fVar25 = sqrtf(fVar25);
    }
    else {
      fVar25 = SQRT(fVar25);
    }
    *(float *)(param_1 + 0x58) = fVar25;
    *(uint *)(param_1 + 0x5c) = (uint)fVar20 & _DAT_1803817c0;
  }
  if ((DAT_1803feef0 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803feef0 = FUN_180016fb0("weapon_debug_max_inaccuracy");
  }
  lVar15 = DAT_1803feef0;
  if ((DAT_180425aa0 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180425aa0 = FUN_180016fb0("weapon_debug_inaccuracy_only_up");
  }
  lVar9 = DAT_180425aa0;
  if ((DAT_1804007b8 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1804007b8 = FUN_180016fb0("weapon_accuracy_shotgun_spread_patterns");
  }
  lVar8 = DAT_1804007b8;
  if ((lVar15 == 0) || (iVar11 = FUN_1800197a0(lVar15), iVar11 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (lVar9 == 0) {
LAB_180085bb2:
    local_1c8 = '\0';
  }
  else {
    iVar11 = FUN_1800197a0(lVar9);
    local_1c8 = '\x01';
    if (iVar11 == 0) goto LAB_180085bb2;
  }
  if (lVar8 == 0) {
    local_1c7 = true;
  }
  else {
    iVar11 = FUN_1800197a0(lVar8);
    local_1c7 = iVar11 != 0;
  }
  iVar11 = *param_2;
  uVar12 = 0xff;
  if (DAT_1803fedd0 == 0) {
    if (DAT_1803fa340 != 0) {
      DAT_1803fedd0 = FUN_180016fb0("swcs_weapon_max_spread_seed");
    }
    if (DAT_1803fedd0 == 0) goto LAB_180085c13;
  }
  uVar12 = FUN_1800197a0(DAT_1803fedd0);
LAB_180085c13:
  uVar17 = FUN_180012ac0(local_f8,0x18,&DAT_18033f570,iVar11);
  uVar18 = (uint)uVar17;
  uVar19 = uVar17 & 0xffffffff;
  if (uVar18 - 1 < 0x17) {
    local_188 = 0x67452301;
    local_184 = 0xefcdab89;
    local_180 = 0x1032547698badcfe;
    _Src = local_f8;
    uStack_178 = CONCAT44((int)(uVar17 >> 0x1d),uVar18 * 8) & 0x7ffffffff;
    while (0x3f < uVar18) {
      local_170 = *_Src;
      uStack_168 = _Src[1];
      local_160 = _Src[2];
      uStack_158 = _Src[3];
      local_150 = _Src[4];
      uStack_148 = _Src[5];
      local_140 = _Src[6];
      uStack_138 = _Src[7];
      FUN_180015630(&local_188,&local_170);
      _Src = _Src + 8;
      uVar18 = (int)uVar19 - 0x40;
      uVar19 = (ulonglong)uVar18;
    }
    memcpy(&local_170,_Src,(ulonglong)uVar18);
    uVar18 = (uint)uStack_178 >> 3 & 0x3f;
    *(undefined1 *)((longlong)&local_170 + (ulonglong)uVar18) = 0x80;
    _Dst = (void *)((longlong)&local_170 + (ulonglong)uVar18 + 1);
    uVar13 = -uVar18 + 0x3f;
    if (uVar13 < 8) {
      memset(_Dst,0,(ulonglong)uVar13);
      FUN_180015630(&local_188,&local_170);
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
    }
    else {
      memset(_Dst,0,(ulonglong)(-uVar18 + 0x37));
    }
    uStack_138 = uStack_178;
    FUN_180015630(&local_188,&local_170);
    uVar18 = (uint)(byte)((ulonglong)local_180 >> 0x38);
  }
  else {
    uVar18 = 0;
  }
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_188 = ~(uVar18 & uVar12);
  local_184 = 0;
  iVar11 = *(int *)(param_1 + 0x14);
  dVar3 = (double)*(float *)(param_1 + 0x10);
  iVar14 = FUN_180083d00(&local_188);
  dVar7 = DAT_1803813b0;
  dVar24 = DAT_180380d48;
  dVar5 = DAT_180380d08;
  dVar1 = DAT_180380d00;
  dVar23 = DAT_180380a08;
  dVar21 = DAT_180380d00;
  if ((double)iVar14 * DAT_180380a08 <= DAT_180380d00) {
    dVar21 = (double)iVar14 * DAT_180380a08;
  }
  dVar21 = dVar21 + 0.0;
  if ((*(char *)(param_1 + 0x24) == '\0') || (iVar11 != 1)) {
    if ((*(char *)(param_1 + 0x25) != '\0') && (dVar22 = DAT_180380d48, dVar3 < DAT_180380d48)) {
      do {
        dVar21 = dVar21 * dVar21;
        dVar22 = dVar22 + DAT_1803813b0;
      } while (dVar3 <= dVar22);
      dVar21 = DAT_180380d08 - dVar21;
    }
  }
  else {
    dVar21 = DAT_180380d08 - dVar21 * dVar21;
  }
  if (bVar4) {
    dVar21 = DAT_180380d08;
  }
  iVar14 = FUN_180083d00(&local_188);
  dVar6 = DAT_180380d90;
  dVar22 = dVar1;
  if ((double)iVar14 * dVar23 <= dVar1) {
    dVar22 = (double)iVar14 * dVar23;
  }
  dVar23 = DAT_180380d28;
  if (local_1c8 == '\0') {
    dVar23 = dVar22 * DAT_180380d90 + 0.0;
  }
  fVar20 = (float)FUN_180085870(param_1);
  dVar22 = cos(dVar23);
  local_1c0 = (float *)(dVar22 * (double)fVar20 * dVar21);
  dVar23 = sin(dVar23);
  iVar14 = *(int *)(param_1 + 0x18);
  dVar22 = floor((double)iVar14 * dVar3);
  if ((((local_1c7 == false) || (*(char *)(param_1 + 0x468) == '\0')) ||
      (*(char *)(param_1 + 0x61) == '\0')) ||
     ((iVar14 < 2 || (uVar12 = (uint)dVar22, 0x3f < uVar12)))) {
    iVar14 = FUN_180083d00(&local_188);
    dVar22 = dVar1;
    if ((double)iVar14 * DAT_180380a08 <= dVar1) {
      dVar22 = (double)iVar14 * DAT_180380a08;
    }
    dVar22 = dVar22 + 0.0;
    iVar14 = FUN_180083d00(&local_188);
    if ((double)iVar14 * DAT_180380a08 <= dVar1) {
      dVar1 = (double)iVar14 * DAT_180380a08;
    }
    dVar1 = dVar1 * dVar6 + 0.0;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x68 + (longlong)(int)uVar12 * 0x10);
    dVar22 = *(double *)(param_1 + ((longlong)(int)uVar12 + 7) * 0x10);
  }
  if ((*(char *)(param_1 + 0x23) == '\0') || (iVar11 != 1)) {
    if ((*(char *)(param_1 + 0x25) != '\0') && (dVar3 < dVar24)) {
      do {
        dVar22 = dVar22 * dVar22;
        dVar24 = dVar24 + dVar7;
      } while (dVar3 <= dVar24);
      dVar22 = dVar5 - dVar22;
    }
  }
  else {
    dVar22 = dVar5 - dVar22 * dVar22;
  }
  dVar22 = (double)*(float *)(param_1 + 0xc) * dVar22;
  dVar24 = cos(dVar1);
  *local_1b8 = (float)(dVar24 * dVar22 + (double)local_1c0);
  dVar24 = sin(dVar1);
  *local_1b0 = (float)(dVar24 * dVar22 + dVar23 * (double)fVar20 * dVar21);
  return 1;
}



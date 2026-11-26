// 0x1802acef0  FUN_1802acef0
// size=1833 thunk=false
// signature: undefined FUN_1802acef0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1802acef0(float *param_1,undefined4 param_2,int param_3,longlong *param_4,longlong param_5,
                  longlong param_6,undefined4 param_7)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  float local_168;
  float local_164;
  int local_160;
  undefined8 local_158;
  float local_150;
  float local_14c;
  float local_148 [4];
  float fStack_138;
  float fStack_134;
  float local_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  longlong *local_110;
  byte local_108;
  char local_107 [7];
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_110 = param_4;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_160 = param_3;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar3 = DAT_180380bb0;
  uVar6 = 0xec0;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  local_158 = *(longlong *)(lVar1 + 0x1520);
  if (*(char *)(local_158 + 0xd1) != '\0') {
LAB_1802ad5ae:
    return uVar6 & 0xffffff00;
  }
  fVar14 = param_1[2] - *param_1;
  if ((fVar14 <= 0.0) || (fVar16 = param_1[3] - param_1[1], fVar16 <= 0.0)) goto LAB_1802ad5ae;
  fVar21 = DAT_180380bb0;
  if ((local_160 == 1) && (fVar16 < fVar14)) {
    fVar18 = fVar14 + fVar14;
    if (fVar14 + fVar14 <= DAT_180380bb0) {
      fVar18 = DAT_180380bb0;
    }
    fVar18 = fVar16 / fVar18;
    if (0.0 <= fVar18) {
      if (fVar18 <= DAT_180380bb0) {
        fVar21 = fVar18;
      }
    }
    else {
      fVar21 = 0.0;
    }
    if (fVar21 <= 0.0) goto LAB_1802ad5ae;
  }
  if (fVar16 <= fVar14) {
    fVar14 = fVar16;
  }
  bVar2 = fVar21 < DAT_180380bb0;
  fVar16 = *(float *)(lVar1 + 0xd04);
  if (fVar14 * DAT_180380ac0 <= *(float *)(lVar1 + 0xd04)) {
    fVar16 = fVar14 * DAT_180380ac0;
  }
  uVar6 = (uint)fVar16;
  fVar16 = (float)((uint)(float)(int)uVar6 ^ DAT_1803817f0);
  fVar22 = param_1[3] + fVar16;
  fVar18 = param_1[1] - fVar16;
  fVar21 = param_1[2] + fVar16;
  fVar16 = *param_1 - fVar16;
  fStack_134 = fVar22;
  local_148[3] = fVar18;
  fStack_138 = fVar21;
  local_148[2] = fVar16;
  fVar14 = fVar22 - fVar18;
  if (local_160 == 0) {
    fVar14 = fVar21 - fVar16;
  }
  if (fVar14 < DAT_180380bb0) goto LAB_1802ad5ae;
  local_148[1] = fVar22 - fVar18;
  lVar11 = param_5;
  if (param_5 <= param_6) {
    lVar11 = param_6;
  }
  uVar12 = (ulonglong)local_160;
  lVar9 = 1;
  if (0 < lVar11) {
    lVar9 = lVar11;
  }
  local_148[0] = fVar21 - fVar16;
  fVar20 = local_148[uVar12];
  if (*(float *)(lVar1 + 0xd08) <= local_148[uVar12]) {
    fVar20 = *(float *)(lVar1 + 0xd08);
  }
  local_148[0] = (float)param_5;
  fVar17 = ((float)param_5 / (float)lVar9) * fVar14;
  if ((fVar20 <= fVar17) && (fVar20 = fVar14, fVar17 <= fVar14)) {
    fVar20 = fVar17;
  }
  local_100 = *(undefined8 *)param_1;
  uStack_f8 = *(undefined8 *)(param_1 + 2);
  fVar17 = *(float *)(lVar1 + 0xc98);
  lVar11 = *(longlong *)(local_158 + 0x3c0);
  local_130[0] = *(float *)(lVar11 + 0x28);
  local_130[1] = *(float *)(lVar11 + 0x2c);
  lVar9 = *(longlong *)(local_158 + 0x20);
  local_130[2] = *(float *)(lVar11 + 0x28) + *(float *)(lVar11 + 0x30);
  local_130[3] = *(float *)(lVar11 + 0x2c) + *(float *)(lVar11 + 0x34);
  local_11c = *(float *)(lVar9 + 0xc);
  local_120 = *(float *)(lVar9 + 8);
  uVar10 = uVar12 ^ 1;
  local_114 = *(float *)(lVar9 + 0xc) + *(float *)(lVar9 + 0x14);
  local_118 = *(float *)(lVar9 + 8) + *(float *)(lVar9 + 0x10);
  fVar19 = local_130[uVar10];
  if (((fVar19 == local_130[uVar10 + 4]) &&
      (fVar13 = *(float *)((longlong)&local_100 + uVar10 * 4), fVar19 < fVar13)) &&
     (fVar13 - fVar17 <= fVar19)) {
    *(float *)((longlong)&local_100 + uVar10 * 4) = fVar19;
  }
  fVar19 = local_130[uVar10 + 2];
  if (((fVar19 == local_130[uVar10 + 6]) &&
      (fVar13 = *(float *)((longlong)&uStack_f8 + uVar10 * 4), fVar13 < fVar19)) &&
     (fVar19 <= fVar13 + fVar17)) {
    *(float *)((longlong)&uStack_f8 + uVar10 * 4) = fVar19;
  }
  local_108 = 0;
  local_107[0] = '\0';
  local_164 = (float)(int)fVar20;
  FUN_18027f160(param_1,param_2,0,2);
  local_178 = 0x40000;
  FUN_1802ab600(&local_100,param_2,local_107,&local_108);
  plVar4 = local_110;
  param_6 = param_6 - param_5;
  if (param_6 < 2) {
    param_6 = 1;
  }
  local_168 = (float)param_6;
  fVar17 = (float)*local_110 / local_168;
  if (0.0 <= fVar17) {
    fVar19 = fVar3;
    if (fVar17 <= fVar3) {
      fVar19 = fVar17;
    }
  }
  else {
    fVar19 = 0.0;
  }
  fVar17 = fVar14 - (float)(int)fVar20;
  fVar20 = (fVar17 * fVar19) / fVar14;
  if (((local_108 == 0) || (bVar2)) || (fVar19 = local_164 / fVar14, fVar3 <= fVar19))
  goto LAB_1802ad48d;
  fVar13 = (*(float *)(lVar1 + 0x100 + uVar12 * 4) - local_148[uVar12 + 2]) / fVar14;
  if (0.0 <= fVar13) {
    fVar15 = fVar3;
    if (fVar13 <= fVar3) {
      fVar15 = fVar13;
    }
  }
  else {
    fVar15 = 0.0;
  }
  if (fVar20 <= fVar15) {
    uVar6 = (uint)(fVar19 + fVar20 < fVar15);
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (*(char *)(lVar1 + 0x15a0) == '\0') {
    fVar13 = fVar19 * DAT_180380ac0;
  }
  else {
    if (((*(char *)(lVar1 + 0x81) == '\0') || (*(char *)(lVar1 + 0x11d) != '\0')) || (uVar6 == 0)) {
      *(undefined2 *)(lVar1 + 0x26b6) = 0;
      if ((uVar6 == 0) && (*(char *)(lVar1 + 0x11d) == '\0')) {
        fVar13 = fVar19 * DAT_180380ac0;
        *(float *)(lVar1 + 0x26b8) = (fVar15 - fVar20) - fVar13;
        goto LAB_1802ad3c1;
      }
    }
    else {
      *(short *)(lVar1 + 0x26b6) = (short)uVar6;
    }
    fVar13 = fVar19 * DAT_180380ac0;
    *(undefined4 *)(lVar1 + 0x26b8) = 0;
  }
LAB_1802ad3c1:
  if (*(short *)(lVar1 + 0x26b6) == 0) {
    fVar20 = ((fVar15 - *(float *)(lVar1 + 0x26b8)) - fVar13) / (fVar3 - fVar19);
    if (0.0 <= fVar20) {
      fVar19 = fVar3;
      if (fVar20 <= fVar3) {
        fVar19 = fVar20;
      }
    }
    else {
      fVar19 = 0.0;
    }
    *local_110 = (longlong)(local_168 * fVar19);
  }
  else {
    cVar5 = FUN_18027bce0(0,1,0);
    if ((cVar5 != '\0') && (uVar6 == (int)*(short *)(lVar1 + 0x26b6))) {
      fVar20 = DAT_180381384;
      if (0.0 < (float)(int)*(short *)(lVar1 + 0x26b6)) {
        fVar20 = fVar3;
      }
      lVar11 = (longlong)(local_148[0] * fVar20) + *plVar4;
      if (lVar11 < 0) {
        lVar11 = 0;
      }
      else if (param_6 < lVar11) {
        lVar11 = param_6;
      }
      *plVar4 = lVar11;
    }
  }
  fVar19 = (float)*plVar4 / local_168;
  fVar20 = 0.0;
  if ((0.0 <= fVar19) && (fVar20 = fVar3, fVar19 <= fVar3)) {
    fVar20 = fVar19;
  }
  fVar20 = (fVar17 * fVar20) / fVar14;
LAB_1802ad48d:
  uVar7 = FUN_18026a6a0(0xe);
  if (local_108 == 0) {
    cVar5 = (local_107[0] != '\0') + '\x0f';
  }
  else {
    cVar5 = '\x11';
  }
  uVar8 = FUN_18026a6a0(cVar5);
  lVar11 = local_158;
  local_170 = param_7;
  local_178 = *(undefined4 *)(local_158 + 0x60);
  FUN_180295000(*(undefined8 *)(local_158 + 0x2c8),param_1,param_1 + 2,uVar7);
  if (local_160 == 0) {
    fVar16 = (fVar21 - fVar16) * fVar20 + fVar16;
    local_158 = CONCAT44(fVar18,fVar16);
    fVar21 = fVar16 + local_164;
  }
  else {
    fVar18 = (fVar22 - fVar18) * fVar20 + fVar18;
    local_158 = CONCAT44(fVar18,fVar16);
    fVar22 = fVar18 + local_164;
  }
  local_178 = *(undefined4 *)(lVar1 + 0xd00);
  local_170 = 0;
  local_150 = fVar21;
  local_14c = fVar22;
  FUN_180295000(*(undefined8 *)(lVar11 + 0x2c8),&local_158,&local_150,uVar8);
  return (uint)local_108;
}



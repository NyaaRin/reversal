// 0x180021600  FUN_180021600
// size=1206 thunk=false
// signature: undefined FUN_180021600()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180021600(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  uint local_15c;
  float local_158;
  float local_154;
  float local_150;
  uint local_14c;
  float local_148;
  float local_144;
  float local_140;
  uint local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128 [6];
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8 [12];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  fVar11 = 0.0;
  fVar8 = *(float *)(param_1 + 0x6c);
  if (((*(float *)(param_1 + 0x6c) <= 0.0) && (fVar8 = DAT_180380cc0, 0 < *(int *)(param_1 + 0x10)))
     && (0 < *(int *)(param_1 + 0x18))) {
    fVar8 = (float)*(int *)(param_1 + 0x10) / (float)*(int *)(param_1 + 0x18);
  }
  fVar12 = *(float *)(param_1 + 0x58);
  if (*(float *)(param_1 + 0x58) <= 0.0) {
    fVar12 = DAT_180380f90;
  }
  fVar13 = *(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x5c) <= 0.0) {
    fVar13 = DAT_1803812c8;
  }
  fVar14 = *(float *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x38) <= 0.0) {
    fVar14 = DAT_18038110c;
  }
  sVar3 = _fdclass();
  if (((((sVar3 < 1) && (DAT_180380980 < fVar8)) &&
       ((fVar8 <= DAT_180380fcc &&
        ((sVar3 = _fdclass(), sVar3 < 1 && (sVar3 = _fdclass(), fVar2 = DAT_180380964, sVar3 < 1))))
       )) && (0.0 < fVar12)) &&
     ((((fVar12 + DAT_180380964 < fVar13 &&
        (sVar3 = _fdclass(), local_128[0] = DAT_180380bb0, sVar3 < 1)) && (DAT_180380bb0 < fVar14))
      && (fVar14 < DAT_180381184)))) {
    FUN_1802d3e70(param_1 + 0x4c,&local_178,&local_198,&local_188);
    uVar10 = DAT_1803817f0;
    fVar9 = *(float *)(param_1 + 0x44);
    fVar7 = *(float *)(param_1 + 0x48);
    fVar1 = *(float *)(param_1 + 0x40);
    local_168 = local_198;
    local_164 = local_194;
    local_160 = local_190;
    local_158 = local_188;
    local_154 = local_184;
    local_15c = (uint)(fVar1 * local_198 + fVar9 * local_194 + fVar7 * local_190) ^ DAT_1803817f0;
    local_148 = local_178;
    local_138 = _DAT_180381630;
    uStack_130 = _UNK_180381638;
    local_150 = local_180;
    local_14c = (uint)(fVar1 * local_188 + fVar9 * local_184 + fVar7 * local_180) ^ DAT_1803817f0;
    local_144 = local_174;
    local_140 = local_170;
    local_13c = (uint)(fVar1 * local_178 + fVar9 * local_174 + fVar7 * local_170) ^ DAT_1803817f0;
    fVar7 = tanf(fVar14 * DAT_180380ac0 * DAT_180380994);
    fVar9 = DAT_180380948;
    if (DAT_180380948 <= fVar7) {
      fVar9 = fVar7;
    }
    local_128[1] = 0.0;
    local_128[2] = 0.0;
    local_128[3] = 0.0;
    local_128[4] = 0.0;
    local_110 = 0;
    local_108 = 0;
    local_128[0] = local_128[0] / fVar9;
    local_100 = fVar13 / (fVar13 - fVar12);
    local_fc = (float)((uint)fVar12 ^ uVar10) * local_100;
    local_128[5] = local_128[0] * fVar8;
    local_f8 = _DAT_1803814d0;
    uStack_f0 = _UNK_1803814d8;
    FUN_1802d47f0(local_128,&local_168);
    uVar6 = 0;
    do {
      uVar5 = 0;
      do {
        if ((local_e8[uVar6 * 4 + uVar5] & 0x7f800000) == 0x7f800000) {
          return 0;
        }
        uVar10 = (uint)_DAT_1803817c0;
        fVar8 = (float)(local_e8[uVar6 * 4 + uVar5] & uVar10);
        if (DAT_1803812f8 < fVar8) {
          return 0;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        fVar11 = fVar11 + fVar8;
      } while ((int)uVar4 < 4);
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while ((int)uVar4 < 4);
    if ((fVar2 < fVar11) &&
       (DAT_180380938 <
        (float)(local_b8 & uVar10) + (float)(local_b4 & uVar10) + (float)(local_b0 & uVar10))) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      FUN_1802d4780(&DAT_1805707c0,local_e8);
      DAT_1805c7c00 = *(undefined4 *)(param_1 + 0x40);
      DAT_1805c7c04 = *(undefined4 *)(param_1 + 0x44);
      DAT_1805c7c08 = *(undefined4 *)(param_1 + 0x48);
      DAT_1803fe650 = 1;
      DAT_180425428 = 1;
      DAT_1803da5c0 = fVar14;
      DAT_1803e7498 = param_2;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      return 1;
    }
  }
  return 0;
}



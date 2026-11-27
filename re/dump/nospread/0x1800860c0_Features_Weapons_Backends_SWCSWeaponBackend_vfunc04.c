// 1800860c0  Features_Weapons_Backends_SWCSWeaponBackend_vfunc04
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Weapons_Backends_SWCSWeaponBackend_vfunc04
                  (longlong param_1,float *param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_208 [32];
  double local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  uint local_1c8;
  uint local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined4 local_168;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  longlong local_148;
  undefined8 local_140;
  uint local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  if (param_4 == (undefined4 *)0x0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return param_2;
  }
  fVar13 = *(float *)(param_1 + 0x2c);
  fVar16 = *(float *)(param_1 + 0x28);
  local_158 = 0.0;
  local_154 = 0.0;
  local_150 = fVar16;
  local_14c = fVar13;
  local_148 = param_1;
  if ((DAT_180423a48 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180423a48 = FUN_180016fb0("swcs_weapon_sync_seed");
  }
  if ((DAT_180423a48 == 0) || (iVar11 = FUN_1800197a0(DAT_180423a48), iVar11 != 0)) {
    cVar10 = FUN_1800859c0(param_1,param_4,&local_158,&local_154);
    fVar9 = local_154;
    fVar14 = local_158;
    *(undefined1 *)(param_1 + 0x474) = 0;
    if ((cVar10 != '\0') && ((local_158 != 0.0 || (local_154 != 0.0)))) {
      iVar11 = 0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      while( true ) {
        local_140._4_4_ = (float)param_4[3] - fVar18;
        local_140._0_4_ = (float)param_4[2] - fVar17;
        local_138 = 0;
        uVar12 = FUN_1802d3e00((float)local_140);
        local_140 = (double)CONCAT44(local_140._4_4_,uVar12);
        fVar13 = (float)FUN_1802d3e00(local_140._4_4_);
        local_140._4_4_ = fVar13;
        if (((((uint)(float)local_140 & 0x7f800000) == 0x7f800000) ||
            (((uint)fVar13 & 0x7f800000) == 0x7f800000)) || ((local_138 & 0x7f800000) == 0x7f800000)
           ) break;
        FUN_1802d3e70(&local_140,&local_110,&local_120,&local_100);
        local_130 = 0.0;
        local_128 = 0;
        local_f0 = (float)local_120 * fVar14 + local_110 + local_100 * fVar9;
        local_ec = local_120._4_4_ * fVar14 + local_10c + local_fc * fVar9;
        local_e8 = local_118 * fVar14 + local_108 + local_f8 * fVar9;
        FUN_1802d4540(&local_f0,&local_130);
        fVar16 = local_130._4_4_ - local_140._4_4_;
        fVar13 = (float)FUN_1802d3e00((float)local_130 - (float)local_140);
        fVar16 = (float)FUN_1802d3e00(fVar16);
        if (((((uint)fVar13 & 0x7f800000) == 0x7f800000) ||
            (((uint)fVar16 & 0x7f800000) == 0x7f800000)) ||
           (iVar11 = iVar11 + 1, fVar17 = fVar13, fVar18 = fVar16, 2 < iVar11)) break;
      }
      fVar16 = local_150;
      if ((fVar17 != 0.0) || (fVar13 = local_14c, fVar18 != 0.0)) {
        fVar14 = (float)FUN_1802d3e00(fVar17 + local_150);
        fVar13 = local_14c;
        local_154 = fVar14;
        local_150 = (float)FUN_1802d3e00(fVar18 + local_14c);
        if ((((uint)fVar14 & 0x7f800000) != 0x7f800000) &&
           (((uint)local_150 & 0x7f800000) != 0x7f800000)) {
          if (((*(byte *)(param_4 + 8) & 1) != 0) &&
             ((iVar11 = DAT_180400a24 + 1, DAT_180400a24 < 0x1e ||
              (DAT_180400a24 = iVar11, iVar11 == (iVar11 / 100) * 100)))) {
            uVar12 = *param_4;
            cVar10 = *(char *)(param_1 + 0x49);
            local_120 = (double)*(float *)(param_1 + 0x10);
            uVar4 = *(undefined4 *)(param_1 + 0x14);
            uVar5 = *(undefined4 *)(param_1 + 0x18);
            fVar13 = *(float *)(param_1 + 0x4c);
            local_130 = (double)*(float *)(param_1 + 0xc);
            fVar17 = *(float *)(param_1 + 0x58);
            fVar18 = *(float *)(param_1 + 0x50);
            fVar1 = *(float *)(param_1 + 0x5c);
            cVar2 = *(char *)(local_148 + 0x55);
            local_140 = (double)*(float *)(param_1 + 8);
            cVar3 = *(char *)(local_148 + 0x468);
            dVar8 = (double)local_158;
            dVar6 = (double)local_150;
            dVar7 = (double)local_14c;
            DAT_180400a24 = iVar11;
            fVar15 = (float)FUN_180085870();
            local_1c0 = (uint)(cVar10 != '\0');
            local_1c8 = (uint)(cVar2 != '\0');
            local_1e8 = local_120;
            local_1e0 = uVar4;
            local_1d8 = uVar5;
            local_1d0 = (uint)(cVar3 != '\0');
            local_1b8 = (double)fVar1;
            local_1b0 = (double)fVar18;
            local_1a8 = (double)fVar17;
            local_1a0 = (double)fVar13;
            local_198 = dVar8;
            local_190 = (double)fVar9;
            local_188 = (double)fVar16;
            local_180 = dVar7;
            local_178 = (double)fVar14;
            local_170 = dVar6;
            local_168 = uVar12;
            FUN_180014410("[SWCS-NS] inacc=%.5f(cached %.5f) spread=%.5f recoilIdx=%.2f mode=%d bullets=%d pat=%d ground=%d/%d vz=%.0f/%.0f spd=%.0f/%.0f off=(%.5f,%.5f) punch=(%.3f,%.3f) comp=(%.4f,%.4f) cmd#%d\n"
                          ,(double)fVar15,local_140,local_130);
            fVar14 = local_154;
          }
          *param_2 = fVar14;
          param_2[1] = local_150;
          goto LAB_18008662b;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x474) == '\0') {
    *(undefined1 *)(param_1 + 0x474) = 1;
    FUN_180014410(
                 "[SWCS-NS] swcs_weapon_sync_seed 0 -- server and client seed the spread from unshared table CRCs, cone not predictable\n"
                 );
  }
  *param_2 = fVar16;
  param_2[1] = fVar13;
LAB_18008662b:
  param_2[2] = 0.0;
  return param_2;
}



// 0x18009ebc0  Features_Weapons_Backends_ZCityWeaponBackend_vfunc04
// size=1494 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
Features_Weapons_Backends_ZCityWeaponBackend_vfunc04
          (longlong param_1,undefined8 *param_2,longlong param_3,int *param_4)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined **local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  float local_170;
  undefined8 local_16c;
  float local_160;
  float local_15c;
  float local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_f8 [12];
  float local_ec;
  float local_e8;
  float local_e4;
  char local_c1;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  iVar5 = FUN_180097c30();
  if (((((iVar5 == 0) || (*(char *)(param_1 + 0xa9) == '\0')) || (param_3 == 0)) ||
      ((param_3 != *(longlong *)(param_1 + 8) || (param_4 == (int *)0x0)))) ||
     ((iVar5 != 3 &&
      (((*(double *)(param_1 + 0x58) < 0.0 || (DAT_1803fa608 == (float *)0x0)) ||
       ((dVar3 = *(double *)(DAT_1803fa608 + 4) - *(double *)(param_1 + 0x58), dVar3 < 0.0 ||
        (DAT_180380c48 < dVar3)))))))) goto LAB_18009f156;
  local_180 = *(undefined8 *)(param_4 + 2);
  local_178 = (float)param_4[4];
  if (*(char *)((longlong)param_4 + 0x3e) == '\0') {
LAB_18009ed13:
    if (((DAT_1803db4c0 == *param_4) && (((uint)DAT_1803db4b4 & 0x7f800000) != 0x7f800000)) &&
       ((((uint)DAT_1803db4b8 & 0x7f800000) != 0x7f800000 &&
        ((DAT_1803db4bc & 0x7f800000) != 0x7f800000)))) {
      local_180._4_4_ = (float)((ulonglong)local_180 >> 0x20);
      local_180 = CONCAT44(local_180._4_4_ + DAT_1803db4b8,(float)local_180 + DAT_1803db4b4);
    }
  }
  else {
    fVar7 = (float)param_4[0x10];
    if ((((((uint)fVar7 & 0x7f800000) == 0x7f800000) ||
         (fVar9 = (float)param_4[0x11], ((uint)fVar9 & 0x7f800000) == 0x7f800000)) ||
        (fVar1 = (float)param_4[0x12], ((uint)fVar1 & 0x7f800000) == 0x7f800000)) ||
       (fVar9 * fVar9 + fVar7 * fVar7 + fVar1 * fVar1 <= DAT_180380938)) goto LAB_18009ed13;
    FUN_1802d4540(param_4 + 0x10,&local_180);
  }
  local_178 = 0.0;
  uVar6 = FUN_1802d3e00((float)local_180);
  local_180 = CONCAT44(local_180._4_4_,uVar6);
  uVar6 = FUN_1802d3e00(local_180._4_4_);
  local_180 = CONCAT44(uVar6,(float)local_180);
  if (iVar5 != 3) {
    *(undefined8 *)(param_1 + 0x70) = local_180;
    *(float *)(param_1 + 0x78) = local_178;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x18);
    dVar3 = DAT_1803813b0;
    if (DAT_1803fa608 != (float *)0x0) {
      dVar3 = (double)*DAT_1803fa608;
    }
    *(double *)(param_1 + 0x88) = dVar3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    FUN_18009a610(param_1,param_2,&local_180);
    return param_2;
  }
  if ((DAT_1803db45d == '\0') && (cVar4 = FUN_180071c60(), cVar4 != '\0')) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    local_190 = (*pcVar2)(DAT_1803fa360,uVar6);
    if ((local_190 != 0) && (DAT_1803fa610 != (longlong *)0x0)) {
      FUN_18001c430(local_190,&local_1a8);
      FUN_1802d4050(&local_180,&local_160);
      if ((((((uint)local_1a8 & 0x7f800000) != 0x7f800000) &&
           (((uint)local_1a4 & 0x7f800000) != 0x7f800000)) &&
          (((uint)local_1a0 & 0x7f800000) != 0x7f800000)) &&
         (((((uint)local_160 & 0x7f800000) != 0x7f800000 &&
           (((uint)local_15c & 0x7f800000) != 0x7f800000)) &&
          (((uint)local_158 & 0x7f800000) != 0x7f800000)))) {
        local_198 = vftable_CDoubleTraceFilter;
        local_188 = DAT_1803ff0f0;
        local_108 = 0;
        local_134 = (local_15c * DAT_1803812d0 + local_1a4) - local_1a4;
        local_138 = (local_160 * DAT_1803812d0 + local_1a8) - local_1a8;
        local_130 = (local_158 * DAT_1803812d0 + local_1a0) - local_1a0;
        fVar7 = (float)(*(code *)PTR_FUN_1803da018)
                                 (local_134 * local_134 + local_138 * local_138 +
                                  local_130 * local_130);
        local_ff = fVar7 != 0.0;
        local_1b8 = local_f8;
        local_148 = local_1a8;
        local_144 = local_1a4;
        local_140 = local_1a0;
        local_114 = 0;
        local_118 = 0;
        local_108 = 0;
        local_100 = 1;
        local_124 = 0;
        local_128 = 0;
        (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_148,0x46004003,&local_198);
        if (((local_c1 == '\0') && (((uint)local_ec & 0x7f800000) != 0x7f800000)) &&
           ((((uint)local_e8 & 0x7f800000) != 0x7f800000 &&
            ((((uint)local_e4 & 0x7f800000) != 0x7f800000 &&
             (DAT_180380bb0 <=
              (local_e8 - local_1a4) * (local_e8 - local_1a4) +
              (local_ec - local_1a8) * (local_ec - local_1a8) +
              (local_e4 - local_1a0) * (local_e4 - local_1a0))))))) {
          local_16c = 0;
          local_170 = 0.0;
          cVar4 = FUN_1800745c0(&local_ec,&local_170);
          if (cVar4 != '\0') {
            uVar6 = (*(code *)PTR_FUN_1803da018)
                              ((local_e8 - local_1a4) * (local_e8 - local_1a4) +
                               (local_ec - local_1a8) * (local_ec - local_1a8) +
                               (local_e4 - local_1a0) * (local_e4 - local_1a0));
            cVar4 = FUN_180075ea0(DAT_1803e91f4,uVar6,DAT_180380c50);
            if (cVar4 != '\0') {
              DAT_1803e921c = *param_4;
              fVar7 = local_180._4_4_ - (float)local_16c;
              fVar9 = local_178 - local_16c._4_4_;
              DAT_180423a24 = 0;
              uVar6 = FUN_1802d3e00((float)local_180 - local_170);
              uVar8 = FUN_1802d3e00(fVar7);
              *(undefined4 *)param_2 = uVar6;
              *(undefined4 *)((longlong)param_2 + 4) = uVar8;
              *(float *)(param_2 + 1) = fVar9;
              return param_2;
            }
          }
        }
      }
    }
  }
LAB_18009f156:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



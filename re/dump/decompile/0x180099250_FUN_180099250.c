// 0x180099250  FUN_180099250
// size=1095 thunk=false
// signature: undefined FUN_180099250()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180099250(float *param_1,float param_2,double param_3,float param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res10 [2];
  undefined1 auStack_158 [32];
  float local_138;
  float local_134 [5];
  float local_120;
  float local_11c;
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
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  *param_6 = 0.0;
  *param_5 = 0.0;
  fVar8 = *param_1;
  if (((uint)fVar8 & 0x7f800000) != 0x7f800000) {
    fVar9 = param_1[1];
    if (((uint)fVar9 & 0x7f800000) != 0x7f800000) {
      fVar1 = param_1[2];
      if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
        param_3 = param_3 / _DAT_180380e00;
        local_res10[0] = param_2;
        dVar5 = sin(param_3 - DAT_180380d38);
        dVar6 = cos(param_3);
        dVar6 = dVar6 * DAT_180380d68;
        dVar7 = cos(param_3 + DAT_180380d08);
        fVar10 = (float)(dVar5 * dVar6 * dVar7);
        dVar5 = sin(param_3);
        dVar6 = sin(param_3 - DAT_180380d80);
        dVar7 = cos(param_3 + _DAT_180380df0);
        local_134[2] = (float)(dVar6 * (dVar5 + dVar5) * dVar7);
        if ((DAT_180380f74 < param_4) && (param_4 < DAT_180380fb4)) {
          fVar10 = fVar10 + fVar10;
          local_134[2] = local_134[2] + local_134[2];
        }
        local_134[0] = 0.9;
        local_138 = 0.0;
        local_134[3] = 90.0;
        local_134[1] = -90.0;
        local_11c = fVar9;
        pfVar4 = &local_138;
        if (0.0 <= param_2) {
          pfVar4 = local_res10;
        }
        local_118 = fVar1;
        local_108 = fVar1;
        local_10c = fVar9 + fVar10;
        pfVar3 = local_134;
        if (param_2 <= DAT_180380b68) {
          pfVar3 = pfVar4;
        }
        local_120 = (DAT_180380bb0 - *pfVar3) * fVar8;
        local_134[2] = local_120 + local_134[2];
        pfVar4 = local_134 + 1;
        if (DAT_180381414 <= local_134[2]) {
          pfVar4 = local_134 + 2;
        }
        pfVar3 = local_134 + 3;
        if (local_134[2] <= DAT_18038110c) {
          pfVar3 = pfVar4;
        }
        local_110 = *pfVar3;
        FUN_1802d3e70(param_1,&local_100,&local_d0,&local_c0);
        FUN_1802d4050(&local_120,&local_f0);
        FUN_1802d4050(&local_110,&local_e0);
        fVar9 = local_fc * local_ec + local_100 * local_f0 + local_f8 * local_e8;
        fVar8 = local_dc * local_fc + local_e0 * local_100 + local_d8 * local_f8;
        if ((DAT_180380a58 < fVar9) && (DAT_180380a58 < fVar8)) {
          *param_5 = (local_cc * local_dc + local_d0 * local_e0 + local_c8 * local_d8) / fVar8 -
                     (local_cc * local_ec + local_d0 * local_f0 + local_c8 * local_e8) / fVar9;
          fVar8 = (local_bc * local_dc + local_c0 * local_e0 + local_b8 * local_d8) / fVar8 -
                  (local_bc * local_ec + local_c0 * local_f0 + local_b8 * local_e8) / fVar9;
          *param_6 = fVar8;
          sVar2 = _fdclass(*param_5);
          if ((sVar2 < 1) && (sVar2 = _fdclass(fVar8), sVar2 < 1)) {
            return 1;
          }
          *param_6 = 0.0;
          *param_5 = 0.0;
        }
      }
    }
  }
  return 0;
}



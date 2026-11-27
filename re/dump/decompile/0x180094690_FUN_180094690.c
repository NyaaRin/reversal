// 0x180094690  FUN_180094690
// size=1429 thunk=false
// signature: undefined FUN_180094690()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180094690(float *param_1,float *param_2,uint *param_3,float *param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  undefined8 local_190;
  float local_188;
  float local_184;
  undefined4 local_180;
  float local_17c [3];
  undefined1 local_170 [16];
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
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
  ulonglong local_d0;
  
  uVar12 = DAT_18038120c;
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  if ((((((uint)*param_2 & 0x7f800000) != 0x7f800000) &&
       (((uint)param_2[1] & 0x7f800000) != 0x7f800000)) &&
      (((uint)param_2[2] & 0x7f800000) != 0x7f800000)) && ((*param_3 & 0x7f800000) != 0x7f800000)) {
    if ((param_3[1] & 0x7f800000) != 0x7f800000) {
      fVar1 = (float)param_3[2];
      if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
        fVar18 = (float)remainderf(param_3[1],DAT_18038120c);
        local_160 = (float)remainderf(*param_3,uVar12);
        local_15c = fVar18;
        local_158 = fVar1;
        FUN_1802d3e70(&local_160,0,0,&local_120);
        local_188 = local_160;
        local_184 = local_15c;
        local_180 = 0;
        FUN_1802d3e70(&local_188,0,0,&local_110);
        fVar6 = DAT_18038110c;
        fVar26 = DAT_180380bb0;
        fVar1 = *param_2;
        fVar18 = *param_1;
        fVar2 = param_1[1];
        fVar3 = param_2[1];
        fVar4 = param_1[2];
        fVar5 = param_2[2];
        fVar25 = param_1[9] + param_1[6];
        local_120 = local_120 * DAT_180380d30;
        local_17c[2] = 90.0;
        local_17c[0] = -90.0;
        local_11c = local_11c * DAT_180380d30;
        local_118 = local_118 * DAT_180380d30;
        local_17c[1] = (DAT_180380bb0 - param_1[0x20]) * local_160 + param_1[0x21];
        pfVar17 = local_17c;
        if (DAT_180381414 <= local_17c[1]) {
          pfVar17 = local_17c + 1;
        }
        local_14c = local_15c + param_1[0x22];
        pfVar16 = local_17c + 2;
        if (local_17c[1] <= DAT_18038110c) {
          pfVar16 = pfVar17;
        }
        local_150 = *pfVar16;
        local_148 = local_158 + DAT_18038110c;
        fVar24 = param_1[0xb] + param_1[8];
        fVar23 = param_1[10] + param_1[7];
        FUN_1802d3e70(&local_150,&local_100,&local_f0,&local_130);
        FUN_1800943f0(&local_140,param_1 + 0xf,&local_150);
        local_138 = local_138 + fVar6;
        FUN_1802d3e70(&local_140,0,0,&local_e0);
        local_188 = local_150;
        local_184 = local_14c;
        local_180 = 0;
        pfVar17 = (float *)FUN_1800938a0(local_170,param_1 + 0xc,&local_188);
        fVar14 = local_15c;
        fVar13 = local_160;
        uVar12 = DAT_18038120c;
        fVar22 = local_158 + DAT_180381188;
        fVar6 = *pfVar17;
        fVar7 = pfVar17[2];
        fVar8 = pfVar17[1];
        fVar19 = (float)remainderf(local_138 - fVar22,DAT_18038120c);
        fVar9 = param_1[0x1f];
        fVar20 = (float)remainderf(local_13c - fVar14,uVar12);
        fVar10 = param_1[0x1f];
        fVar21 = (float)remainderf(local_140 - fVar13,uVar12);
        fVar11 = param_1[0x1e];
        local_1a0 = param_1 + 0x1b;
        fVar26 = fVar26 - fVar11;
        local_1a8 = param_1 + 0x15;
        local_190 = param_5;
        local_140 = fVar21 * param_1[0x1f] + fVar13;
        local_12c = (param_1[4] + param_2[1]) * fVar26 +
                    ((fVar25 * local_fc - fVar23 * local_ec) + fVar24 * local_12c +
                     ((fVar2 + fVar3 + local_11c) - local_10c) + fVar8 + local_dc) * fVar11;
        local_130 = (*param_2 + param_1[3]) * fVar26 +
                    ((fVar25 * local_100 - fVar23 * local_f0) + fVar24 * local_130 +
                     ((fVar1 + fVar18 + local_120) - local_110) + fVar6 + local_e0) * fVar11;
        local_128 = (param_1[5] + param_2[2]) * fVar26 +
                    ((fVar25 * local_f8 - fVar23 * local_e8) + fVar24 * local_128 +
                     ((fVar4 + fVar5 + local_118) - local_108) + fVar7 + local_d8) * fVar11;
        local_198 = param_4;
        local_13c = fVar20 * fVar10 + fVar14;
        local_138 = fVar19 * fVar9 + fVar22;
        cVar15 = FUN_180093980(&local_130,&local_140,param_1 + 0x12,param_1 + 0x18);
        if ((cVar15 != '\0') &&
           ((param_4[1] - param_2[1]) * (param_4[1] - param_2[1]) +
            (*param_4 - *param_2) * (*param_4 - *param_2) +
            (param_4[2] - param_2[2]) * (param_4[2] - param_2[2]) <= DAT_1803812c4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



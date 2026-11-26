// 0x180093980  FUN_180093980
// size=1438 thunk=false
// signature: undefined FUN_180093980()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180093980(float *param_1,uint *param_2,uint *param_3,uint *param_4,float *param_5,
                       uint *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  uVar7 = (ulonglong)((uint)*param_1 & 0x7f800000);
  if (((((((uint)*param_1 & 0x7f800000) != 0x7f800000) &&
        (uVar7 = (ulonglong)((uint)param_1[1] & 0x7f800000),
        ((uint)param_1[1] & 0x7f800000) != 0x7f800000)) &&
       (uVar7 = (ulonglong)((uint)param_1[2] & 0x7f800000),
       ((uint)param_1[2] & 0x7f800000) != 0x7f800000)) &&
      (((uVar7 = (ulonglong)(*param_2 & 0x7f800000), (*param_2 & 0x7f800000) != 0x7f800000 &&
        (uVar7 = (ulonglong)(param_2[1] & 0x7f800000), (param_2[1] & 0x7f800000) != 0x7f800000)) &&
       ((uVar7 = (ulonglong)(param_2[2] & 0x7f800000), (param_2[2] & 0x7f800000) != 0x7f800000 &&
        ((uVar7 = (ulonglong)(*param_3 & 0x7f800000), (*param_3 & 0x7f800000) != 0x7f800000 &&
         (uVar7 = (ulonglong)(param_3[1] & 0x7f800000), (param_3[1] & 0x7f800000) != 0x7f800000)))))
       ))) && ((uVar7 = (ulonglong)(param_3[2] & 0x7f800000),
               (param_3[2] & 0x7f800000) != 0x7f800000 &&
               ((((((uVar7 = (ulonglong)(*param_4 & 0x7f800000),
                    (*param_4 & 0x7f800000) != 0x7f800000 &&
                    (uVar7 = (ulonglong)(param_4[1] & 0x7f800000),
                    (param_4[1] & 0x7f800000) != 0x7f800000)) &&
                   (uVar7 = (ulonglong)(param_4[2] & 0x7f800000),
                   (param_4[2] & 0x7f800000) != 0x7f800000)) &&
                  ((uVar7 = (ulonglong)((uint)*param_5 & 0x7f800000),
                   ((uint)*param_5 & 0x7f800000) != 0x7f800000 &&
                   (uVar7 = (ulonglong)((uint)param_5[1] & 0x7f800000),
                   ((uint)param_5[1] & 0x7f800000) != 0x7f800000)))) &&
                 ((uVar7 = (ulonglong)((uint)param_5[2] & 0x7f800000),
                  ((uint)param_5[2] & 0x7f800000) != 0x7f800000 &&
                  ((uVar7 = (ulonglong)(*param_6 & 0x7f800000),
                   (*param_6 & 0x7f800000) != 0x7f800000 &&
                   (uVar7 = (ulonglong)(param_6[1] & 0x7f800000),
                   (param_6[1] & 0x7f800000) != 0x7f800000)))))) &&
                (uVar7 = (ulonglong)(param_6[2] & 0x7f800000),
                (param_6[2] & 0x7f800000) != 0x7f800000)))))) {
    FUN_1802d3e70(param_4,&local_b8,&local_c8,&local_a8);
    FUN_1802d3e70(param_2,&local_88,&local_78,&local_98);
    fVar8 = local_78 * local_b4;
    fVar10 = local_98 * local_b0;
    fVar9 = local_70 * local_b4;
    local_b4 = (local_84 * local_b8 - local_74 * local_b4) + local_94 * local_b0;
    local_b0 = (local_80 * local_b8 - fVar9) + local_90 * local_b0;
    local_b8 = (local_88 * local_b8 - fVar8) + fVar10;
    FUN_1802d3e70(param_2,&local_98,&local_78,&local_88);
    fVar8 = local_78 * local_c4;
    fVar10 = local_88 * local_c0;
    fVar9 = local_70 * local_c4;
    local_c4 = (local_94 * local_c8 - local_74 * local_c4) + local_84 * local_c0;
    local_c0 = (local_90 * local_c8 - fVar9) + local_80 * local_c0;
    local_c8 = (local_98 * local_c8 - fVar8) + fVar10;
    FUN_1802d3e70(param_2,&local_98,&local_78,&local_88);
    local_78 = local_78 * local_a4;
    local_88 = local_88 * local_a0;
    local_70 = local_70 * local_a4;
    local_a4 = (local_94 * local_a8 - local_74 * local_a4) + local_84 * local_a0;
    local_a0 = (local_90 * local_a8 - local_70) + local_80 * local_a0;
    local_a8 = (local_98 * local_a8 - local_78) + local_88;
    pfVar6 = (float *)FUN_1800938a0(&local_98,param_3,param_2);
    fVar8 = *param_5;
    fVar9 = param_5[1];
    fVar10 = param_5[2];
    fVar1 = pfVar6[2];
    fVar2 = param_1[2];
    fVar3 = *pfVar6;
    fVar4 = *param_1;
    param_7[1] = (pfVar6[1] + param_1[1] + local_b4 * fVar8 + local_c4 * fVar9) - local_a4 * fVar10;
    param_7[2] = (fVar1 + fVar2 + local_b0 * fVar8 + local_c0 * fVar9) - local_a0 * fVar10;
    *param_7 = (local_b8 * fVar8 + fVar3 + fVar4 + local_c8 * fVar9) - local_a8 * fVar10;
    FUN_1802d4050(param_6,&local_d8);
    fVar10 = (local_c8 * local_d4 + local_b8 * local_d8) - local_a8 * local_d0;
    *param_8 = fVar10;
    fVar9 = (local_c4 * local_d4 + local_b4 * local_d8) - local_a4 * local_d0;
    param_8[1] = fVar9;
    fVar8 = (local_c0 * local_d4 + local_b0 * local_d8) - local_a0 * local_d0;
    param_8[2] = fVar8;
    uVar7 = (ulonglong)((uint)*param_7 & 0x7f800000);
    if ((((((uint)*param_7 & 0x7f800000) != 0x7f800000) &&
         (uVar7 = (ulonglong)((uint)param_7[1] & 0x7f800000),
         ((uint)param_7[1] & 0x7f800000) != 0x7f800000)) &&
        (uVar7 = (ulonglong)((uint)param_7[2] & 0x7f800000),
        ((uint)param_7[2] & 0x7f800000) != 0x7f800000)) &&
       ((uVar5 = (uint)fVar10 & 0x7f800000, uVar7 = (ulonglong)uVar5, uVar5 != 0x7f800000 &&
        (uVar5 = (uint)fVar9 & 0x7f800000, uVar7 = (ulonglong)uVar5, uVar5 != 0x7f800000)))) {
      uVar5 = (uint)fVar8 & 0x7f800000;
      uVar7 = (ulonglong)uVar5;
      if (uVar5 != 0x7f800000) {
        uVar7 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      }
    }
  }
  return uVar7;
}



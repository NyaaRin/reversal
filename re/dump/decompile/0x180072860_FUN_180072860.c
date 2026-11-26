// 0x180072860  FUN_180072860
// size=818 thunk=false
// signature: undefined FUN_180072860()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180072860(float *param_1,float *param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
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
  float *local_68;
  
  local_68 = (float *)(DAT_1803da4c0 ^ (ulonglong)auStack_f8);
  pfVar2 = local_68;
  if (((((DAT_180423985 != '\0') && (DAT_180423984 != '\0')) && (0.0 <= DAT_1803e9210)) &&
      ((pfVar2 = DAT_1803fa608, DAT_1803fa608 != (float *)0x0 &&
       (0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210)))) &&
     ((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90)) {
    fVar5 = DAT_180430180 - _DAT_1805ba370;
    pfVar2 = (float *)(ulonglong)((uint)fVar5 & 0x7f800000);
    if (((uint)fVar5 & 0x7f800000) != 0x7f800000) {
      fVar3 = DAT_180430184 - _DAT_1805ba374;
      pfVar2 = (float *)(ulonglong)((uint)fVar3 & 0x7f800000);
      if (((uint)fVar3 & 0x7f800000) != 0x7f800000) {
        fVar6 = DAT_180430188 - _DAT_1805ba378;
        pfVar2 = (float *)(ulonglong)((uint)fVar6 & 0x7f800000);
        if ((((uint)fVar6 & 0x7f800000) != 0x7f800000) &&
           (fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6 <= _DAT_180381284)) {
          if ((DAT_1803e9ad0 <= DAT_180381420) ||
             (local_d0 = DAT_1803e9ad0, DAT_180381188 <= DAT_1803e9ad0)) {
            local_d0 = 0.0;
          }
          local_d8 = DAT_1803e9ad8;
          local_d4 = DAT_1803e9adc;
          FUN_1802d3e70(&local_d8,&local_a8,&local_c8,&local_b8);
          fVar7 = fVar3 * local_a4 + fVar5 * local_a8 + fVar6 * local_a0;
          fVar4 = fVar3 * local_b4 + fVar5 * local_b8 + fVar6 * local_b0;
          fVar5 = fVar3 * local_c4 + fVar5 * local_c8 + fVar6 * local_c0;
          pfVar2 = (float *)FUN_1800723a0(&local_c8);
          if ((char)pfVar2 != '\0') {
            local_b0 = (float)FUN_180071bf0();
            local_b4 = param_1[1];
            local_b8 = *param_1;
            FUN_1802d3e70(&local_b8,&local_98,&local_88,&local_78);
            fVar3 = fVar7 * local_98 + local_c8 + fVar5 * local_88 + fVar4 * local_78;
            fVar6 = fVar7 * local_94 + local_c4 + fVar5 * local_84 + fVar4 * local_74;
            *param_2 = fVar3;
            fVar5 = fVar7 * local_90 + local_c0 + fVar5 * local_80 + fVar4 * local_70;
            uVar1 = (uint)fVar3 & 0x7f800000;
            pfVar2 = (float *)(ulonglong)uVar1;
            param_2[1] = fVar6;
            param_2[2] = fVar5;
            if ((uVar1 != 0x7f800000) &&
               (uVar1 = (uint)fVar6 & 0x7f800000, pfVar2 = (float *)(ulonglong)uVar1,
               uVar1 != 0x7f800000)) {
              uVar1 = (uint)fVar5 & 0x7f800000;
              pfVar2 = (float *)(ulonglong)uVar1;
              if (uVar1 != 0x7f800000) {
                return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return (ulonglong)pfVar2 & 0xffffffffffffff00;
}



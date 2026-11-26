// 0x180094d00  FUN_180094d00
// size=984 thunk=false
// signature: undefined FUN_180094d00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180094d00(float *param_1,undefined4 param_2,uint *param_3,float *param_4,
                       float *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_5[0] = 0.0;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  uVar2 = _fdclass(*param_1);
  if (((((short)uVar2 < 1) && (0.0 < *param_1)) && (uVar2 = _fdclass(param_1[6]), (short)uVar2 < 1))
     && (0.0 < param_1[6])) {
    fVar6 = param_1[2];
    uVar2 = _fdclass(fVar6);
    if ((short)uVar2 < 1) {
      fVar8 = param_1[3];
      uVar2 = _fdclass(fVar8);
      if (((short)uVar2 < 1) && (uVar2 = _fdclass(param_1[1]), (short)uVar2 < 1)) {
        fVar9 = param_1[4];
        uVar2 = _fdclass(fVar9);
        if ((((short)uVar2 < 1) &&
            ((uVar2 = _fdclass(param_1[5]), (short)uVar2 < 1 &&
             (uVar2 = (ulonglong)(*param_3 & 0x7f800000), (*param_3 & 0x7f800000) != 0x7f800000))))
           && ((uVar2 = (ulonglong)(param_3[1] & 0x7f800000),
               (param_3[1] & 0x7f800000) != 0x7f800000 &&
               (uVar2 = (ulonglong)(param_3[2] & 0x7f800000),
               (param_3[2] & 0x7f800000) != 0x7f800000)))) {
          fVar5 = DAT_180380d30;
          if ((((*(char *)(param_1 + 8) == '\0') && (*(char *)((longlong)param_1 + 0x21) == '\0'))
              && ((fVar4 = param_1[7], fVar4 != DAT_180380bb0 ||
                  (*(char *)((longlong)param_1 + 0x23) != '\0')))) &&
             ((fVar4 != DAT_180380f90 && (fVar4 != DAT_180380fa8)))) {
            fVar5 = DAT_180380b20;
          }
          fVar3 = (float)FUN_180094c30(param_1,param_2,fVar5 * DAT_1803809e8);
          fVar6 = fVar6 / DAT_180381088;
          fVar4 = DAT_180380e28;
          if (fVar6 <= DAT_180380e28) {
            fVar4 = fVar6;
          }
          fVar7 = fVar5 * DAT_180380a3c;
          fVar3 = fVar3 * DAT_180380a1c * fVar5 * fVar4 * fVar8 * DAT_180380e28;
          fVar4 = (float)FUN_180094c30(param_1,param_2,fVar7);
          fVar6 = param_1[6];
          fVar10 = ((fVar8 / *param_1) / DAT_180380e28) * DAT_180380ac0;
          FUN_1802d4050(param_3,&local_a8);
          fVar9 = (float)((uint)(fVar3 * fVar9) ^ DAT_1803817f0) * DAT_180380fc4;
          fVar6 = sinf(fVar4 / (fVar7 / fVar6));
          fVar8 = fVar6 * DAT_1803813c0 * fVar10;
          *param_4 = fVar9 * local_a8 - fVar6 * fVar10;
          param_4[1] = fVar9 * local_a4 + fVar6 * fVar10;
          param_4[2] = fVar9 * local_a0 + fVar10 * 0.0;
          param_5[1] = fVar8;
          if ((*(char *)((longlong)param_1 + 0x22) != '\0') || (*(char *)(param_1 + 8) != '\0')) {
            fVar6 = (float)FUN_180094c30(param_1,param_2,fVar5 * DAT_1803809c4);
            fVar6 = fVar6 * param_1[5];
            fVar9 = fVar6 * DAT_180380f00;
            fVar5 = fVar6 * DAT_180381024;
            param_5[2] = fVar6 * DAT_180380fcc + param_5[2];
            *param_5 = *param_5 - fVar9;
            param_5[1] = fVar5 + fVar8;
            param_4[1] = param_4[1] - fVar6;
          }
          uVar2 = (ulonglong)((uint)*param_4 & 0x7f800000);
          if ((((((uint)*param_4 & 0x7f800000) != 0x7f800000) &&
               (uVar2 = (ulonglong)((uint)param_4[1] & 0x7f800000),
               ((uint)param_4[1] & 0x7f800000) != 0x7f800000)) &&
              (uVar2 = (ulonglong)((uint)param_4[2] & 0x7f800000),
              ((uint)param_4[2] & 0x7f800000) != 0x7f800000)) &&
             ((uVar2 = (ulonglong)((uint)*param_5 & 0x7f800000),
              ((uint)*param_5 & 0x7f800000) != 0x7f800000 &&
              (uVar2 = (ulonglong)((uint)param_5[1] & 0x7f800000),
              ((uint)param_5[1] & 0x7f800000) != 0x7f800000)))) {
            uVar1 = (uint)param_5[2] & 0x7f800000;
            uVar2 = (ulonglong)uVar1;
            if (uVar1 != 0x7f800000) {
              return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



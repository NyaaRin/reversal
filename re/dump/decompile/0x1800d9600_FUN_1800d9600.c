// 0x1800d9600  FUN_1800d9600
// size=271 thunk=false
// signature: undefined FUN_1800d9600()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1800d9600(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  fVar3 = *param_2;
  if ((((((uint)fVar3 & 0x7f800000) != 0x7f800000) &&
       (fVar4 = param_2[1], ((uint)fVar4 & 0x7f800000) != 0x7f800000)) &&
      (fVar1 = param_2[2], ((uint)fVar1 & 0x7f800000) != 0x7f800000)) &&
     (DAT_180380938 < fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1)) {
    local_28 = *(undefined8 *)param_2;
    local_20 = param_2[2];
    (*(code *)PTR_FUN_1803da000)(&local_28);
    pfVar2 = (float *)*param_1;
    fVar4 = local_28._4_4_ * pfVar2[1] + (float)local_28 * *pfVar2 + local_20 * pfVar2[2];
    fVar3 = DAT_180381384;
    if (DAT_180381384 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = DAT_180380bb0;
    if (fVar3 <= DAT_180380bb0) {
      fVar4 = fVar3;
    }
    fVar3 = acosf(fVar4);
    if (!NAN(fVar3 * DAT_1803810c0)) {
      return fVar3 * DAT_1803810c0;
    }
  }
  return DAT_180381384;
}



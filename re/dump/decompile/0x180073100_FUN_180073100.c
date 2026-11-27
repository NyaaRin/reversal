// 0x180073100  FUN_180073100
// size=401 thunk=false
// signature: undefined FUN_180073100()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180073100(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  cVar2 = FUN_180072860(param_2,&local_68);
  if (cVar2 != '\0') {
    pfVar1 = (float *)*param_1;
    local_58 = *pfVar1 - local_68;
    local_54 = pfVar1[1] - local_64;
    local_50 = pfVar1[2] - local_60;
    if ((((((uint)local_58 & 0x7f800000) != 0x7f800000) &&
         (((uint)local_54 & 0x7f800000) != 0x7f800000)) &&
        (((uint)local_50 & 0x7f800000) != 0x7f800000)) &&
       (DAT_180380938 < local_54 * local_54 + local_58 * local_58 + local_50 * local_50)) {
      (*(code *)PTR_FUN_1803da000)(&local_58);
      FUN_1802d3e70(param_2,&local_48,local_28,local_38);
      fVar5 = local_44 * local_54 + local_48 * local_58 + local_40 * local_50;
      fVar3 = DAT_180381384;
      if (DAT_180381384 <= fVar5) {
        fVar3 = fVar5;
      }
      fVar5 = DAT_180380bb0;
      if (fVar3 <= DAT_180380bb0) {
        fVar5 = fVar3;
      }
      fVar3 = acosf(fVar5);
      fVar3 = fVar3 * DAT_1803810c0;
      if ((DAT_180381304 <= fVar3) || (uVar4 = extraout_XMM0_Db, fVar3 <= DAT_180381450)) {
        uVar4 = 0;
        fVar3 = DAT_180381384;
      }
      goto LAB_180073273;
    }
  }
  uVar4 = 0;
  fVar3 = DAT_180381384;
LAB_180073273:
  return CONCAT44(uVar4,fVar3);
}



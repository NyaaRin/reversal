// 0x180075970  FUN_180075970
// size=1314 thunk=false
// signature: undefined FUN_180075970()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_180075970(float *param_1,float *param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  float *local_d8;
  float *local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (((uint)*param_2 & 0x7f800000) == 0x7f800000) {
    return DAT_180381384;
  }
  if (((uint)param_2[1] & 0x7f800000) == 0x7f800000) {
    return DAT_180381384;
  }
  if (((uint)param_2[2] & 0x7f800000) == 0x7f800000) {
    return DAT_180381384;
  }
  if (DAT_180423985 != '\0') {
    if ((((DAT_180423984 != '\0') && (0.0 <= DAT_1803e9210)) && (DAT_1803fa608 != (float *)0x0)) &&
       ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210 &&
        ((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90)))) {
      cVar1 = FUN_180072860(param_1,&local_c0);
      if (cVar1 == '\0') {
        return DAT_180381384;
      }
      local_a0 = *param_2 - local_c0;
      local_9c = param_2[1] - local_bc;
      local_98 = param_2[2] - local_b8;
      if (((uint)local_a0 & 0x7f800000) == 0x7f800000) {
        return DAT_180381384;
      }
      if (((uint)local_9c & 0x7f800000) == 0x7f800000) {
        return DAT_180381384;
      }
      if (((uint)local_98 & 0x7f800000) == 0x7f800000) {
        return DAT_180381384;
      }
      if (local_9c * local_9c + local_a0 * local_a0 + local_98 * local_98 <= DAT_180380938) {
        return DAT_180381384;
      }
      (*(code *)PTR_FUN_1803da000)(&local_a0);
      FUN_1802d3e70(param_1,&local_90,local_40,local_50);
      fVar7 = local_8c * local_9c + local_90 * local_a0 + local_88 * local_98;
      fVar5 = DAT_180381384;
      if (DAT_180381384 <= fVar7) {
        fVar5 = fVar7;
      }
      fVar7 = DAT_180380bb0;
      if (fVar5 <= DAT_180380bb0) {
        fVar7 = fVar5;
      }
      fVar5 = acosf(fVar7);
      if (DAT_180381304 <= fVar5 * DAT_1803810c0) {
        return DAT_180381384;
      }
      return fVar5 * DAT_1803810c0;
    }
    if (DAT_180423985 != '\0') {
      return DAT_180381384;
    }
  }
  if (((DAT_180423988 != '\0') && (cVar1 = FUN_180071c60(), cVar1 != '\0')) &&
     (cVar1 = FUN_180071d10(&local_c0,&local_90), cVar1 != '\0')) {
    cVar1 = FUN_1800723a0(&local_60);
    fVar7 = DAT_180381304;
    fVar5 = DAT_180380bb0;
    if (cVar1 == '\0') {
      local_60 = DAT_180430190;
      local_58 = DAT_180430198;
      local_5c = DAT_180430194;
    }
    pcVar4 = DAT_180423978;
    fVar6 = (float)FUN_180071bf0();
    if (pcVar4 == (code *)0x0) {
      if (DAT_180423964 == '\0') {
        local_c4 = 0.9;
        local_c8 = 0.0;
        pfVar3 = &local_c8;
        local_98 = fVar6;
        if (0.0 <= DAT_180423980) {
          pfVar3 = &DAT_180423980;
        }
        pfVar2 = &local_c4;
        if (DAT_180423980 <= DAT_180380b68) {
          pfVar2 = pfVar3;
        }
        local_a0 = (fVar5 - *pfVar2) * *param_1;
        local_9c = param_1[1];
      }
      else {
        local_a0 = *param_1;
        local_9c = param_1[1];
        local_98 = 0.0;
      }
      local_d0 = &local_b0;
      local_d8 = &local_80;
      FUN_1800720d0(&local_60,&local_a0,&local_c0,&local_90);
    }
    else {
      local_90 = *param_1;
      local_8c = param_1[1];
      local_88 = fVar6;
      cVar1 = (*pcVar4)(&local_60,&local_90,&local_80,&local_b0);
      if (cVar1 == '\0') {
        local_80 = 1e+30;
        local_b0 = 0.0;
        local_ac = 0.0;
        local_a8 = 0.0;
        local_7c = 1e+30;
        local_78 = 1e+30;
      }
    }
    local_70 = *param_2 - local_80;
    local_6c = param_2[1] - local_7c;
    local_68 = param_2[2] - local_78;
    if ((((((uint)local_70 & 0x7f800000) != 0x7f800000) &&
         (((uint)local_6c & 0x7f800000) != 0x7f800000)) &&
        (((uint)local_68 & 0x7f800000) != 0x7f800000)) &&
       (((DAT_180380938 < local_6c * local_6c + local_70 * local_70 + local_68 * local_68 &&
         (((uint)local_b0 & 0x7f800000) != 0x7f800000)) &&
        ((((uint)local_ac & 0x7f800000) != 0x7f800000 &&
         ((((uint)local_a8 & 0x7f800000) != 0x7f800000 &&
          (DAT_180380938 < local_ac * local_ac + local_b0 * local_b0 + local_a8 * local_a8)))))))) {
      (*(code *)PTR_FUN_1803da000)(&local_70);
      (*(code *)PTR_FUN_1803da000)(&local_b0);
      fVar8 = local_6c * local_ac + local_70 * local_b0 + local_68 * local_a8;
      fVar6 = DAT_180381384;
      if (DAT_180381384 <= fVar8) {
        fVar6 = fVar8;
      }
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      fVar5 = acosf(fVar5);
      if (fVar5 * DAT_1803810c0 < fVar7) {
        return fVar5 * DAT_1803810c0;
      }
    }
  }
  return DAT_180381384;
}



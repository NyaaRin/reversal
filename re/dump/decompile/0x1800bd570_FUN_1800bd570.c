// 0x1800bd570  FUN_1800bd570
// size=614 thunk=false
// signature: undefined FUN_1800bd570()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800bd570(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  if ((param_1 != 0) && (DAT_1803fa610 != 0)) {
    local_f8 = 0;
    local_f0 = 0.0;
    pfVar4 = (float *)FUN_18001c430(param_1,&local_dc);
    fVar7 = *pfVar4;
    fVar1 = pfVar4[1];
    local_f8 = *(undefined8 *)pfVar4;
    fVar2 = pfVar4[2];
    local_f0 = fVar2;
    local_a4 = FUN_1802d3e00(param_2);
    local_a8 = 0;
    local_a0 = 0;
    FUN_1802d3e70(&local_a8,local_98,&local_b8,local_88);
    fVar5 = (float)FUN_1800bd3e0(&local_f8,local_98,param_1);
    fVar3 = DAT_18038107c;
    local_c4 = local_b8 * DAT_18038107c;
    local_c0 = local_b4 * DAT_18038107c;
    local_bc = local_b0 * DAT_18038107c;
    local_f8 = CONCAT44(fVar1 - local_c0,fVar7 - local_c4);
    local_f0 = fVar2 - local_bc;
    local_d0 = fVar5;
    fVar6 = (float)FUN_1800bd3e0(&local_f8,local_98,param_1);
    local_dc = local_b8 * fVar3;
    local_d8 = local_b4 * fVar3;
    local_d4 = local_b0 * fVar3;
    local_e8 = local_dc + fVar7;
    local_e4 = local_d8 + fVar1;
    local_e0 = local_d4 + fVar2;
    local_cc = fVar6;
    fVar7 = (float)FUN_1800bd3e0(&local_e8,local_98,param_1);
    if ((fVar6 + DAT_180381024 < fVar7) && (fVar5 + DAT_180381024 < fVar7)) {
      return 0xffffffff;
    }
    if ((fVar7 + DAT_180381024 < fVar6) && (fVar5 + DAT_180381024 < fVar6)) {
      return 1;
    }
  }
  return 0;
}



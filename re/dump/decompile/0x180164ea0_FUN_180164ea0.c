// 0x180164ea0  FUN_180164ea0
// size=604 thunk=false
// signature: undefined FUN_180164ea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180164ea0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  local_b8 = *param_3 - fVar1;
  fVar3 = param_2[2];
  local_b4 = param_3[1] - fVar2;
  local_b0 = param_3[2] - fVar3;
  (*(code *)PTR_FUN_1803da000)(&local_b8);
  local_a8 = param_4[1] * local_b0 - param_4[2] * local_b4;
  local_a4 = param_4[2] * local_b8 - *param_4 * local_b0;
  local_a0 = *param_4 * local_b4 - param_4[1] * local_b8;
  (*(code *)PTR_FUN_1803da000)(&local_a8);
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = local_a8;
  fVar7 = local_a0 * local_b4 - local_b0 * local_a4;
  param_1[2] = local_b8;
  param_1[4] = local_a4;
  param_1[6] = local_b4;
  param_1[1] = fVar7;
  fVar6 = local_b0 * local_a8 - local_a0 * local_b8;
  param_1[8] = local_a0;
  param_1[10] = local_b0;
  param_1[5] = fVar6;
  fVar5 = local_a4 * local_b8 - local_b4 * local_a8;
  param_1[9] = fVar5;
  uVar4 = DAT_1803817f0;
  param_1[0xc] = (float)((uint)(fVar2 * local_a4 + fVar1 * local_a8 + fVar3 * local_a0) ^
                        DAT_1803817f0);
  param_1[0xf] = 1.0;
  param_1[0xd] = (float)((uint)(fVar6 * fVar2 + fVar7 * fVar1 + fVar5 * fVar3) ^ uVar4);
  param_1[0xe] = (float)((uint)(fVar2 * local_b4 + fVar1 * local_b8 + fVar3 * local_b0) ^ uVar4);
  return param_1;
}



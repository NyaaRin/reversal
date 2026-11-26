// 0x1800bd3e0  FUN_1800bd3e0
// size=400 thunk=false
// signature: undefined FUN_1800bd3e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bd3e0(float *param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  local_f8 = vftable_CDoubleTraceFilter;
  local_e8 = DAT_1803ff0f0;
  local_c4 = (param_2[1] * DAT_180381120 + param_1[1]) - param_1[1];
  local_98 = 0;
  local_c8 = (*param_2 * DAT_180381120 + *param_1) - *param_1;
  local_c0 = (param_2[2] * DAT_180381120 + param_1[2]) - param_1[2];
  local_f0 = param_3;
  fVar1 = (float)(*(code *)PTR_FUN_1803da018)
                           (local_c4 * local_c4 + local_c8 * local_c8 + local_c0 * local_c0);
  local_8f = fVar1 != 0.0;
  local_d8 = *param_1;
  local_108 = local_88;
  local_d4 = param_1[1];
  local_d0 = param_1[2];
  local_a4 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 1;
  local_b4 = 0;
  local_b8 = 0;
  (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_d8,0x46004003,&local_f8);
  (*(code *)PTR_FUN_1803da018)
            ((local_78 - param_1[1]) * (local_78 - param_1[1]) +
             (local_7c - *param_1) * (local_7c - *param_1) +
             (local_74 - param_1[2]) * (local_74 - param_1[2]));
  return;
}



// 0x1800c2f60  FUN_1800c2f60
// size=387 thunk=false
// signature: undefined FUN_1800c2f60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800c2f60(undefined8 param_1,float *param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  fVar2 = *param_2 + 0.0;
  local_68 = 0;
  fVar4 = param_2[2] + DAT_180380d30;
  local_98 = (*param_2 - 0.0) - fVar2;
  fVar3 = param_2[1] + 0.0;
  local_90 = (param_2[2] - param_3) - fVar4;
  local_94 = (param_2[1] - 0.0) - fVar3;
  fVar1 = (float)(*(code *)PTR_FUN_1803da018)
                           (local_94 * local_94 + local_98 * local_98 + local_90 * local_90);
  local_5f = fVar1 != 0.0;
  local_74 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 1;
  local_84 = 0;
  local_88 = 0;
  local_b8 = vftable_CTraceFilter;
  local_c8 = param_4;
  local_b0 = param_1;
  local_a8 = fVar2;
  local_a4 = fVar3;
  local_a0 = fVar4;
  (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_a8,0x201400b,&local_b8);
  return;
}



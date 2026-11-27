// 0x1800720d0  FUN_1800720d0
// size=394 thunk=false
// signature: undefined FUN_1800720d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800720d0(float *param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  FUN_1802d3e70(param_2,&local_58,&local_68,&local_48);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_1[1];
  fVar5 = *param_1;
  param_5[2] = fVar1 * local_50 + param_1[2] + fVar2 * local_60 + fVar3 * local_40;
  param_5[1] = fVar1 * local_54 + fVar4 + fVar2 * local_64 + fVar3 * local_44;
  *param_5 = fVar1 * local_58 + fVar5 + fVar2 * local_68 + fVar3 * local_48;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  *param_6 = fVar2 * local_68 + fVar1 * local_58 + fVar3 * local_48;
  param_6[1] = fVar2 * local_64 + fVar1 * local_54 + fVar3 * local_44;
  param_6[2] = fVar2 * local_60 + fVar1 * local_50 + fVar3 * local_40;
  return;
}



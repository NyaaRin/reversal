// 0x1800938a0  FUN_1800938a0
// size=221 thunk=false
// signature: undefined FUN_1800938a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1800938a0(float *param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  FUN_1802d3e70(param_3,&local_58,&local_48,&local_38);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  *param_1 = (fVar2 * local_58 - fVar1 * local_48) + fVar3 * local_38;
  param_1[1] = (fVar2 * local_54 - fVar1 * local_44) + fVar3 * local_34;
  param_1[2] = (fVar2 * local_50 - fVar1 * local_40) + fVar3 * local_30;
  return param_1;
}



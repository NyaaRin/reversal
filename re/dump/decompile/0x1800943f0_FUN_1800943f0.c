// 0x1800943f0  FUN_1800943f0
// size=662 thunk=false
// signature: undefined FUN_1800943f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1800943f0(float *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float _X;
  undefined1 auStack_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  FUN_1802d3e70(param_2,&local_c8,&local_b8,&local_78);
  FUN_1802d3e70(param_3,&local_a8,&local_98,&local_88);
  fVar1 = local_98 * local_c4;
  fVar3 = local_88 * local_c0;
  fVar2 = local_90 * local_c4;
  local_c4 = (local_a4 * local_c8 - local_94 * local_c4) + local_84 * local_c0;
  local_c0 = (local_a0 * local_c8 - fVar2) + local_80 * local_c0;
  local_c8 = (local_a8 * local_c8 - fVar1) + fVar3;
  FUN_1802d3e70(param_3,&local_88,&local_98,&local_a8);
  local_98 = local_98 * local_b4;
  local_a8 = local_a8 * local_b0;
  fVar1 = local_90 * local_b4;
  local_b4 = (local_84 * local_b8 - local_94 * local_b4) + local_a4 * local_b0;
  local_b0 = (local_80 * local_b8 - fVar1) + local_a0 * local_b0;
  local_b8 = (local_88 * local_b8 - local_98) + local_a8;
  FUN_1802d3e70(param_3,&local_88,&local_98,&local_a8);
  fVar1 = _hypotf(local_c8,local_c4);
  if (fVar1 <= DAT_18038093c) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = atan2f((float)((uint)local_b0 ^ DAT_1803817f0),
                   (local_78 * local_80 - local_74 * local_90) + local_70 * local_a0);
    fVar2 = fVar2 * DAT_1803810c0;
  }
  fVar3 = local_c4;
  _X = local_c8;
  if (fVar1 <= DAT_18038093c) {
    fVar3 = local_b8;
    _X = (float)((uint)local_b4 ^ DAT_1803817f0);
  }
  fVar3 = atan2f(fVar3,_X);
  fVar1 = atan2f((float)((uint)local_c0 ^ DAT_1803817f0),fVar1);
  fVar3 = fVar3 * DAT_1803810c0;
  *param_1 = fVar1 * DAT_1803810c0;
  param_1[2] = fVar2;
  param_1[1] = fVar3;
  return param_1;
}



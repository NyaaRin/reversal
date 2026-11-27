// 0x1800c79f0  FUN_1800c79f0
// size=260 thunk=false
// signature: undefined FUN_1800c79f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800c79f0(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  pfVar1 = (float *)*param_1;
  local_48 = *param_2 - *pfVar1;
  local_44 = param_2[1] - pfVar1[1];
  local_34 = 0;
  local_38 = 0;
  local_40 = param_2[2] - pfVar1[2];
  FUN_1802d4540(&local_48,&local_38);
  FUN_1800221c0(&local_38);
  puVar2 = (undefined4 *)param_1[1];
  fVar3 = (float)FUN_180022110(local_38,*puVar2);
  fVar4 = (float)FUN_180022110((undefined4)local_34,puVar2[1]);
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 < *(float *)param_1[2]) {
    *(float *)param_1[2] = fVar3;
  }
  return;
}



// 0x18008b430  FUN_18008b430
// size=409 thunk=false
// signature: undefined FUN_18008b430()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_18008b430(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    fVar5 = *(float *)(param_1 + 0x1c);
    fVar1 = *param_3;
    fVar2 = *(float *)(param_1 + 0x20);
    fVar3 = param_3[1];
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_2 = 0.0;
    *param_2 = fVar5 + fVar1 + *(float *)(param_1 + 0x28);
    param_2[1] = fVar2 + fVar3 + *(float *)(param_1 + 0x2c);
    fVar5 = (float)FUN_1802d3e00();
    *param_2 = fVar5;
    fVar5 = (float)FUN_1802d3e00(param_2[1]);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x38);
    fVar1 = *(float *)(param_1 + 0x2c);
    uVar6 = FUN_1802d3e00(*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x28));
    uVar7 = FUN_1802d3e00(fVar5 + fVar1);
    uVar8 = FUN_1802d3e70(param_3,local_58,local_48,local_68);
    local_98 = uVar7;
    uVar8 = FUN_18008b270(uVar8,&local_78,local_58,local_68);
    local_98 = uVar6 ^ DAT_1803817f0;
    puVar4 = (undefined8 *)FUN_18008b270(uVar8,local_88,&local_78,local_48);
    local_78 = *puVar4;
    local_70 = *(undefined4 *)(puVar4 + 1);
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    FUN_1802d4540(&local_78,param_2);
    *param_2 = *param_2 + *(float *)(param_1 + 0x40);
    fVar5 = *(float *)(param_1 + 0x44);
    param_2[2] = 0.0;
    param_2[1] = fVar5 + param_2[1];
    fVar5 = (float)FUN_1802d3e00();
    *param_2 = fVar5;
    fVar5 = (float)FUN_1802d3e00(param_2[1]);
  }
  param_2[1] = fVar5;
  return param_2;
}



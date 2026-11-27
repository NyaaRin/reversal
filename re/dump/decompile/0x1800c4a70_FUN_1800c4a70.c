// 0x1800c4a70  FUN_1800c4a70
// size=143 thunk=false
// signature: undefined FUN_1800c4a70()
// status: ok


undefined8
FUN_1800c4a70(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_38 [24];
  
  puVar2 = (undefined4 *)FUN_18001c430(param_1,local_38);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  puVar2 = (undefined4 *)FUN_1800c4970(local_38,param_1);
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  uVar3 = FUN_18001c0d0(param_1);
  *param_4 = uVar3;
  puVar2 = (undefined4 *)FUN_18001daf0(param_1,local_38);
  *param_5 = *puVar2;
  param_5[1] = puVar2[1];
  uVar1 = puVar2[2];
  param_5[2] = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



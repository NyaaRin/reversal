// 0x180204f70  FUN_180204f70
// size=113 thunk=false
// signature: undefined FUN_180204f70()
// status: ok


undefined8 *
FUN_180204f70(undefined8 *param_1,undefined8 param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  sVar2 = wcslen(param_3);
  puVar3 = (undefined8 *)FUN_180211740(param_2,param_3,sVar2,param_4,uVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  uVar1 = puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = uVar1;
  *(undefined2 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 7;
  return param_1;
}



// 0x1801fd1b0  FUN_1801fd1b0
// size=113 thunk=false
// signature: undefined FUN_1801fd1b0()
// status: ok


undefined8 * FUN_1801fd1b0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  strlen(param_2);
  puVar2 = (undefined8 *)FUN_18022a630(param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  *(undefined1 *)puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  return param_1;
}



// 0x180140d70  FUN_180140d70
// size=106 thunk=false
// signature: undefined FUN_180140d70()
// status: ok


undefined8 * FUN_180140d70(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 < (char *)0x10000) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[3] = 0;
    sVar1 = strlen(param_2);
    FUN_18001d080(param_1,param_2,sVar1,param_4,uVar2);
  }
  return param_1;
}



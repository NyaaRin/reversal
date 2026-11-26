// 0x180196f70  FUN_180196f70
// size=180 thunk=false
// signature: undefined FUN_180196f70()
// status: ok


undefined8 FUN_180196f70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong local_res20;
  
  param_3[2] = 0;
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar2 = 0;
  local_res20 = 0;
  cVar1 = FUN_180196f10(param_1,param_2,&local_res20);
  if ((cVar1 == '\0') || (local_res20 == 0)) {
    return 0;
  }
  FUN_18020e770(param_3,local_res20);
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  cVar1 = FUN_180196f40(puVar2,param_1,local_res20);
  if (cVar1 == '\0') {
    param_3[2] = 0;
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    *(undefined1 *)param_3 = 0;
    return 0;
  }
  return 1;
}



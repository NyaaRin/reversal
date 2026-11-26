// 0x180197030  FUN_180197030
// size=239 thunk=false
// signature: undefined FUN_180197030()
// status: ok


undefined8 FUN_180197030(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_3[2] = 0;
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar3 = 0;
  *param_4 = 0;
  if ((param_1 == 0) || (0x3fffff < param_2 - 1U)) {
    return 0;
  }
  FUN_18020e770(param_3);
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  cVar2 = FUN_180196f40(puVar3,param_1,param_2);
  if (cVar2 != '\0') {
    puVar1 = param_3 + 2;
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    uVar4 = 0xcbf29ce484222325;
    uVar5 = 0;
    if (*puVar1 != 0) {
      do {
        uVar4 = (uVar4 ^ *(byte *)((longlong)param_3 + uVar5)) * 0x100000001b3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
    }
    *param_4 = uVar4;
    return 1;
  }
  param_3[2] = 0;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined1 *)param_3 = 0;
  return 0;
}



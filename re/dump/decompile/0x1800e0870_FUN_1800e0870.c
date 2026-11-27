// 0x1800e0870  FUN_1800e0870
// size=154 thunk=false
// signature: undefined FUN_1800e0870()
// status: ok


longlong FUN_1800e0870(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  sVar1 = strlen(param_2);
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (sVar1 != 0) {
    if (sVar1 <= (ulonglong)param_1[2]) {
      lVar2 = thunk_FUN_1802d5870(puVar4,sVar1 + (longlong)puVar4,param_2,sVar1);
      lVar3 = -1;
      if (lVar2 != sVar1 + (longlong)puVar4) {
        lVar3 = lVar2 - (longlong)puVar4;
      }
      return lVar3;
    }
    return -1;
  }
  return 0;
}



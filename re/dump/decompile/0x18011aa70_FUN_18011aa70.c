// 0x18011aa70  FUN_18011aa70
// size=110 thunk=false
// signature: undefined FUN_18011aa70()
// status: ok


longlong FUN_18011aa70(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*puVar1 <= *puVar2) {
    if (*puVar1 == 0) {
      return 0;
    }
    lVar3 = *puVar2 + (longlong)param_1;
    lVar4 = thunk_FUN_1802d6b60(param_1,lVar3,param_2);
    if (lVar4 != lVar3) {
      return lVar4 - (longlong)param_1;
    }
  }
  return -1;
}



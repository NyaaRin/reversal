// 0x180028e90  FUN_180028e90
// size=100 thunk=false
// signature: undefined FUN_180028e90()
// status: ok


longlong FUN_180028e90(undefined8 *param_1,undefined1 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*puVar1 <= param_3) {
    return -1;
  }
  lVar2 = *puVar1 + (longlong)param_1;
  lVar3 = thunk_FUN_1802d5c20(param_3 + (longlong)param_1,lVar2,param_2);
  lVar4 = -1;
  if (lVar3 != lVar2) {
    lVar4 = lVar3 - (longlong)param_1;
  }
  return lVar4;
}



// 0x18020e6e0  FUN_18020e6e0
// size=129 thunk=false
// signature: undefined FUN_18020e6e0()
// status: ok


longlong FUN_18020e6e0(undefined8 *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 == 0) {
    return -1;
  }
  lVar2 = *plVar1 + -1;
  lVar3 = -1;
  if (lVar2 != -1) {
    lVar3 = lVar2;
  }
  lVar4 = lVar3 + 1 + (longlong)param_1;
  lVar2 = thunk_FUN_1802d5fe0(param_1,lVar4,param_2);
  lVar3 = -1;
  if (lVar2 != lVar4) {
    lVar3 = lVar2 - (longlong)param_1;
  }
  return lVar3;
}



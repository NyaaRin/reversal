// 0x18007f2b0  FUN_18007f2b0
// size=135 thunk=false
// signature: undefined FUN_18007f2b0()
// status: ok


undefined8 FUN_18007f2b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = param_1 + 2;
  plVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar2 = (longlong *)*param_1;
  }
  if (*plVar1 == 0xc) {
    lVar3 = *plVar2 + -0x5f6e75675f616674;
    if (lVar3 == 0) {
      lVar3 = (ulonglong)*(uint *)(plVar2 + 1) - 0x65736162;
    }
    if (lVar3 == 0) {
      return 1;
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  if (*plVar1 == 0xd) {
    lVar3 = *param_1 + -0x6c7665645f616674;
    if ((lVar3 == 0) && (lVar3 = (ulonglong)*(uint *)(param_1 + 1) - 0x7361625f, lVar3 == 0)) {
      lVar3 = (ulonglong)*(byte *)((longlong)param_1 + 0xc) - 0x65;
    }
    if (lVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



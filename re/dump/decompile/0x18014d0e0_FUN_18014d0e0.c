// 0x18014d0e0  FUN_18014d0e0
// size=182 thunk=false
// signature: undefined FUN_18014d0e0()
// status: ok


undefined8 FUN_18014d0e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[2];
  if (0x7f < lVar2 - 1U) {
    return 0;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((lVar2 != 0) &&
      (lVar3 = thunk_FUN_1802d5c20(puVar4,lVar2 + (longlong)puVar4,0x5b),
      lVar3 != lVar2 + (longlong)puVar4)) && (lVar3 - (longlong)puVar4 != -1)) {
    return 0;
  }
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (((*plVar1 != 0) &&
      (lVar2 = *plVar1 + (longlong)param_1, lVar3 = thunk_FUN_1802d5c20(param_1,lVar2,0x5d),
      lVar3 != lVar2)) && (lVar3 - (longlong)param_1 != -1)) {
    return 0;
  }
  return 1;
}



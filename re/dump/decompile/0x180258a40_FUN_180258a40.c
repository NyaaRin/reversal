// 0x180258a40  FUN_180258a40
// size=66 thunk=false
// signature: undefined FUN_180258a40()
// status: ok


undefined8 FUN_180258a40(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 8) == 0x400000) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    FUN_18020e770(plVar1,(longlong)*(int *)(param_1 + 0x30));
    if (0xf < (ulonglong)plVar1[3]) {
      plVar1 = (longlong *)*plVar1;
    }
    *(longlong **)(param_1 + 0x28) = plVar1;
  }
  return 0;
}



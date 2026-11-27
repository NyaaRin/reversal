// 0x1802d2b00  FUN_1802d2b00
// size=93 thunk=false
// signature: undefined FUN_1802d2b00()
// status: ok


undefined8 FUN_1802d2b00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0x400000) {
    plVar3 = (longlong *)*puVar1;
    FUN_18020e770(plVar3,(longlong)*(int *)(param_1 + 0x30));
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    *(longlong **)(param_1 + 0x28) = plVar3;
  }
  else if (puVar1[1] != 0) {
    *(undefined8 *)(param_1 + 0x10) = puVar1[2];
                    /* WARNING: Could not recover jumptable at 0x0001802d2b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[1])();
    return uVar2;
  }
  return 0;
}



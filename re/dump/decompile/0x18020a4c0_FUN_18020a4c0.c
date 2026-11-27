// 0x18020a4c0  FUN_18020a4c0
// size=214 thunk=false
// signature: undefined FUN_18020a4c0()
// status: ok


void FUN_18020a4c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_18;
  undefined8 *local_10;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18021c010(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      local_18 = puVar1 + 2;
      local_10 = puVar1 + 3;
      FUN_18020a5a0(puVar1 + 4);
      free(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_18 = *(undefined8 **)(param_1 + 8);
    FUN_180214d00(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_18);
  }
  return;
}



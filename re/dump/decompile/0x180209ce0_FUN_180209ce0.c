// 0x180209ce0  FUN_180209ce0
// size=164 thunk=false
// signature: undefined FUN_180209ce0()
// status: ok


void FUN_180209ce0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18 [2];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18021bb30(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      free(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_18[0] = *(undefined8 *)(param_1 + 8);
    FUN_180214d00(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_18);
  }
  return;
}



// 0x180266ea0  FUN_180266ea0
// size=178 thunk=false
// signature: undefined FUN_180266ea0()
// status: ok


void FUN_180266ea0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_18 [2];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      FUN_180266f60(lVar1,*puVar2,puVar2);
      return;
    }
    *(undefined8 *)puVar2[1] = 0;
    puVar2 = (undefined8 *)*puVar2;
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      free(puVar2);
      puVar2 = puVar3;
    }
    *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_18[0] = *(undefined8 *)(lVar1 + 8);
    FUN_180214d00(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),local_18);
  }
  return;
}



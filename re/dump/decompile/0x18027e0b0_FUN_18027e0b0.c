// 0x18027e0b0  FUN_18027e0b0
// size=331 thunk=false
// signature: undefined FUN_18027e0b0()
// status: ok


void FUN_18027e0b0(uint param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)_tls_index;
  if ((param_1 >> 0xc & 1) != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined4 *)(lVar1 + 0x1d24) = param_2;
    *(undefined4 *)(lVar1 + 0x1d20) = param_2;
    *(undefined2 *)(lVar1 + 0x1d28) = 0;
  }
  if ((param_1 >> 0xd & 1) != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined4 *)(lVar1 + 0x1d30) = param_2;
    *(undefined4 *)(lVar1 + 0x1d2c) = param_2;
    *(undefined2 *)(lVar1 + 0x1d34) = 0;
  }
  if ((param_1 >> 0xe & 1) != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined4 *)(lVar1 + 0x1d3c) = param_2;
    *(undefined4 *)(lVar1 + 0x1d38) = param_2;
    *(undefined2 *)(lVar1 + 0x1d40) = 0;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined4 *)(lVar1 + 0x1d48) = param_2;
    *(undefined4 *)(lVar1 + 0x1d44) = param_2;
    *(undefined2 *)(lVar1 + 0x1d4c) = 0;
  }
  if ((param_1 & 0xffff0fff) == 0) {
    return;
  }
  FUN_18027dff0(param_1 & 0xffff0fff,param_2);
  return;
}



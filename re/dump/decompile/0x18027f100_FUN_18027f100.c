// 0x18027f100  FUN_18027f100
// size=96 thunk=false
// signature: undefined FUN_18027f100()
// status: ok


void FUN_18027f100(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(int *)(lVar1 + 0x1594) == param_1) {
    *(int *)(lVar1 + 0x1598) = param_1;
  }
  if (*(int *)(lVar1 + 0x15c4) == param_1) {
    *(undefined1 *)(lVar1 + 0x15cd) = 1;
  }
  return;
}



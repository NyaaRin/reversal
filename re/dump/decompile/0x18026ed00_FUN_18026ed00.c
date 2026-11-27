// 0x18026ed00  FUN_18026ed00
// size=134 thunk=false
// signature: undefined FUN_18026ed00()
// status: ok


void FUN_18026ed00(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(uint *)(lVar1 + 0x1f00) = *(uint *)(lVar1 + 0x1f00) | 0x800;
  if ((*(uint *)(lVar1 + 0x1efc) & 0x10000) == 0) {
    *(uint *)(lVar1 + 0x1f00) = *(uint *)(lVar1 + 0x1f00) | 4;
    if (((*(int *)(lVar1 + 0x1594) == param_1) || (*(int *)(lVar1 + 0x1594) == 0)) &&
       (*(undefined2 *)(lVar1 + 0x15a4) = 0x101, *(int *)(lVar1 + 0x15c4) == param_1)) {
      *(undefined1 *)(lVar1 + 0x15cc) = 1;
    }
  }
  return;
}



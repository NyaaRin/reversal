// 0x18027f740  FUN_18027f740
// size=169 thunk=false
// signature: undefined FUN_18027f740()
// status: ok


void FUN_18027f740(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1520);
  if (param_1 == 0.0) {
    param_1 = *(float *)(lVar2 + 0xcf4);
  }
  param_1 = param_1 + *(float *)(lVar1 + 0x15c);
  *(float *)(lVar1 + 0x15c) = param_1;
  *(float *)(lVar1 + 0x118) = param_1 + *(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x160);
  return;
}



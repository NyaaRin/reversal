// 0x180283be0  FUN_180283be0
// size=161 thunk=false
// signature: undefined FUN_180283be0()
// status: ok


void FUN_180283be0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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
  *(undefined2 *)(*(longlong *)(lVar1 + 0xec0) + 0x2110) = 0;
  FUN_180283e10();
  *(undefined1 *)(lVar2 + 0x2112) = 1;
  *(uint *)(lVar2 + 0x2114) = param_3 | 0x80;
  *(undefined4 *)(lVar2 + 0x2120) = param_1;
  *(undefined4 *)(lVar2 + 0x2128) = param_2;
  *(undefined4 *)(lVar2 + 0x2118) = param_4;
  return;
}



// 0x180267330  FUN_180267330
// size=155 thunk=false
// signature: undefined FUN_180267330()
// status: ok


longlong FUN_180267330(uint param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  return (longlong)(int)(param_1 - 0x200) * 0x10 + 0x124 + *(longlong *)(lVar1 + 0xec0);
}



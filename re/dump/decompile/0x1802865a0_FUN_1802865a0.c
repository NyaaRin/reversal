// 0x1802865a0  FUN_1802865a0
// size=156 thunk=false
// signature: undefined FUN_1802865a0()
// status: ok


longlong FUN_1802865a0(uint param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (-1 < (int)param_1) {
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    do {
      if (*(int *)(lVar1 + 0x14d0) <= (int)param_1) {
        return 0;
      }
      if (param_1 == param_2) {
        return 0;
      }
      lVar2 = *(longlong *)((ulonglong)param_1 * 8 + *(longlong *)(lVar1 + 0x14d8));
      if (((*(char *)(lVar2 + 0xcd) != '\0') && (lVar2 == *(longlong *)(lVar2 + 0x3c0))) &&
         ((*(uint *)(lVar2 + 0x14) & 0x20000) == 0)) {
        return lVar2;
      }
      param_1 = param_1 + param_3;
    } while (-1 < (int)param_1);
  }
  return 0;
}



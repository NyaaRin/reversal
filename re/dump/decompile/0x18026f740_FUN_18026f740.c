// 0x18026f740  FUN_18026f740
// size=60 thunk=false
// signature: undefined FUN_18026f740()
// status: ok


longlong FUN_18026f740(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return *(longlong *)(lVar1 + 0xec0) + 0x28;
}



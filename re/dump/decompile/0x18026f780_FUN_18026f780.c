// 0x18026f780  FUN_18026f780
// size=78 thunk=false
// signature: undefined FUN_18026f780()
// status: ok


char * FUN_18026f780(void)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pcVar2 = (char *)(**(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0x2060) + 0x58);
  if (*pcVar2 == '\0') {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}



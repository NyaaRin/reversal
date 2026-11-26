// 0x18003a890  FUN_18003a890
// size=127 thunk=false
// signature: undefined FUN_18003a890()
// status: ok


undefined8 FUN_18003a890(void)

{
  longlong lVar1;
  
  if (((DAT_1803ff8ed != '\0') || (DAT_1803ff8ec != '\0')) &&
     ((DAT_1803ff8ec == '\0' || (0 < DAT_1803ff8f0)))) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1520), lVar1 != 0)) {
      return *(undefined8 *)(lVar1 + 0x2c8);
    }
  }
  return 0;
}



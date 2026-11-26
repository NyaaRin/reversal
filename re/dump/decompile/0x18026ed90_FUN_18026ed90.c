// 0x18026ed90  FUN_18026ed90
// size=195 thunk=false
// signature: undefined FUN_18026ed90()
// status: ok


undefined8 FUN_18026ed90(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (((((*(longlong *)(lVar2 + 0x2070) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x2070) + 0x3c0), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0xcd) != '\0')) &&
      (lVar2 = *(longlong *)(param_1 + 0x3c0), lVar1 != lVar2)) &&
     ((((*(uint *)(lVar1 + 0x14) >> 0x1b & 1) != 0 ||
       (((*(uint *)(lVar1 + 0x14) >> 0x1a & 1) != 0 && ((param_2 & 0x20) == 0)))) &&
      (*(longlong *)(lVar2 + 0x3c0) != lVar1)))) {
    while (lVar2 != lVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x3b8);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



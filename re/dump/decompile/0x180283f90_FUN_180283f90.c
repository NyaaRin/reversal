// 0x180283f90  FUN_180283f90
// size=174 thunk=false
// signature: undefined FUN_180283f90()
// status: ok


char FUN_180283f90(uint param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (((*(int *)(lVar1 + 0x1594) == 0) || (*(char *)(lVar1 + 0x15a6) == '\0')) ||
     (*(int *)(lVar1 + 0x1594) != *(int *)(lVar1 + 0x1ef8))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((param_1 >> 0x1a & 1) != 0) && (bVar2)) {
    return '\x02';
  }
  if ((*(char *)(lVar1 + 0x2068) != '\0') && (*(char *)(lVar1 + 0x2069) != '\0')) {
    return (*(longlong *)(lVar1 + 0x2070) != 0) + '\x01';
  }
  return '\x01';
}



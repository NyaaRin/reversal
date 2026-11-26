// 0x1802822b0  FUN_1802822b0
// size=280 thunk=false
// signature: undefined FUN_1802822b0()
// status: ok


bool FUN_1802822b0(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  lVar3 = *(longlong *)(lVar4 + 0x2070);
  if (lVar3 == 0) {
    return false;
  }
  if ((param_1 & 4) == 0) {
    lVar4 = *(longlong *)(lVar4 + 0x1520);
    if (((param_1 & 2) != 0) && (lVar1 = lVar4, lVar4 != 0)) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x3c0);
        if ((param_1 & 8) == 0) {
          lVar4 = *(longlong *)(lVar4 + 0x3c8);
        }
        bVar5 = lVar1 != lVar4;
        lVar1 = lVar4;
      } while (bVar5);
    }
    if ((param_1 & 1) == 0) {
      return lVar3 == lVar4;
    }
    lVar1 = lVar3;
    if ((param_1 & 8) == 0) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x3c0) + 0x3c8);
        bVar5 = lVar1 != lVar2;
        lVar1 = lVar2;
      } while (bVar5);
    }
    else {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x3c0);
        bVar5 = lVar1 != lVar2;
        lVar1 = lVar2;
      } while (bVar5);
    }
    if (lVar2 != lVar4) {
      while( true ) {
        if (lVar3 == lVar4) {
          return true;
        }
        if (lVar3 == lVar2) break;
        lVar3 = *(longlong *)(lVar3 + 0x3b0);
        if (lVar3 == 0) {
          return false;
        }
      }
      return false;
    }
  }
  return true;
}



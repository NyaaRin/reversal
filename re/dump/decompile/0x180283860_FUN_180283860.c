// 0x180283860  FUN_180283860
// size=442 thunk=false
// signature: undefined FUN_180283860()
// status: ok


void FUN_180283860(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar4 + 0xec0);
  if ((param_3 >> 9 & 1) == 0) {
    if (*(int *)(lVar1 + 0x207c) != *(int *)(*(longlong *)(lVar1 + 0x1520) + 0x170)) {
      return;
    }
    if (*(int *)(lVar1 + 0x2078) != *(int *)(lVar1 + 0x1eb4)) {
      return;
    }
    if (((param_2 & 1) != 0) ||
       (((*(byte *)(lVar1 + 0x28) & 1) == 0 && ((param_2 >> 0x14 & 1) == 0)))) {
      bVar2 = false;
      goto LAB_1802838f0;
    }
  }
  bVar2 = true;
LAB_1802838f0:
  iVar3 = *(int *)(lVar1 + 0x2150);
  if (iVar3 == 1) {
    if (bVar2) {
      if (*(int *)(lVar1 + 0x2208) == 0) {
        FUN_1802833f0();
      }
      if ((0 < *(int *)(lVar1 + 0x2154)) &&
         (iVar3 = *(int *)(lVar1 + 0x2154) + -1, *(int *)(lVar1 + 0x2154) = iVar3, iVar3 == 0)) {
        if (*(char *)(lVar4 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        *(undefined1 *)(*(longlong *)(lVar4 + 0xec0) + 0x2111) = 0;
        FUN_1802833f0(lVar1 + 0x2158);
        FUN_180283e10();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x206c) != param_1) {
      return;
    }
    *(undefined4 *)(lVar1 + 0x2154) = 1;
    return;
  }
  if (iVar3 == -1) {
    if (*(int *)(lVar1 + 0x206c) == param_1) {
      if (*(int *)(lVar1 + 0x2160) == 0) {
        return;
      }
      *(undefined1 *)(lVar1 + 0x2111) = 0;
      FUN_180283e10();
      return;
    }
    if (!bVar2) {
      return;
    }
    lVar4 = lVar1 + 0x2158;
  }
  else {
    if (iVar3 != 0) {
      return;
    }
    if (!bVar2) {
      return;
    }
    if (*(int *)(lVar1 + 0x206c) == param_1) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(undefined1 *)(*(longlong *)(lVar4 + 0xec0) + 0x2111) = 0;
      FUN_1802833f0(lVar1 + 0x2158);
      FUN_180283e10();
    }
    lVar4 = lVar1 + 0x2200;
    if (*(int *)(lVar1 + 0x2208) != 0) {
      return;
    }
  }
  FUN_1802833f0(lVar4);
  return;
}



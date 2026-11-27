// 180281800  FUN_180281800
// signature: undefined FUN_180281800()
// status: ok


void FUN_180281800(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  if (((*(uint *)(lVar4 + 0x14) & 0x4000000) != 0) && (0 < *(int *)(lVar3 + 0x2038))) {
    if (*(longlong *)(lVar3 + 0x2070) == lVar4) {
      FUN_180283c90(lVar4,2);
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x148c);
    uVar2 = *(undefined4 *)(lVar3 + 0x1488);
    *(undefined4 *)(lVar3 + 0x148c) = *(undefined4 *)(lVar4 + 0x10);
    if ((*(uint *)(lVar4 + 0x14) & 0x1000000) != 0) {
      *(undefined4 *)(lVar3 + 0x1488) = *(undefined4 *)(lVar4 + 0x10);
    }
    FUN_180278d40();
    *(undefined4 *)(lVar3 + 0x148c) = uVar1;
    *(undefined4 *)(lVar3 + 0x1488) = uVar2;
    return;
  }
  FUN_18027e9c0("Calling EndPopup() in wrong window!");
  return;
}



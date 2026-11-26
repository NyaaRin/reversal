// 0x180279ea0  FUN_180279ea0
// size=243 thunk=false
// signature: undefined FUN_180279ea0()
// status: ok


void FUN_180279ea0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  if ((((*(char *)(lVar2 + 0xd3) != '\0') &&
       (*(longlong *)(lVar1 + 0x2070) == *(longlong *)(lVar2 + 0x3d8))) &&
      ((*(char *)(lVar1 + 0x20d2) != '\0' || (*(int *)(lVar1 + 0x20e0) != 0)))) &&
     (*(int *)(lVar1 + 0x207c) == *(int *)(lVar2 + 0x170))) {
    *(undefined1 *)(lVar1 + 0x20d2) = 0;
    FUN_1802833f0(lVar1 + 0x20d8);
    FUN_180283e10();
    if ((((*(float *)(lVar1 + 0x1f04) < *(float *)(lVar2 + 0x268)) ||
         (*(float *)(lVar1 + 0x1f08) < *(float *)(lVar2 + 0x26c))) ||
        (*(float *)(lVar2 + 0x270) < *(float *)(lVar1 + 0x1f0c))) ||
       (*(float *)(lVar2 + 0x274) < *(float *)(lVar1 + 0x1f10))) {
      FUN_180280400(local_res8,lVar2,(float *)(lVar1 + 0x1f04),0);
    }
  }
  return;
}



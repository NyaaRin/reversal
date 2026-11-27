// 0x1802af4c0  FUN_1802af4c0
// size=174 thunk=false
// signature: undefined FUN_1802af4c0()
// status: ok


void FUN_1802af4c0(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x1520);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    fVar4 = *(float *)(lVar1 + 0xcc8) + *(float *)(lVar1 + 0xcc8) + *(float *)(lVar1 + 0x1238);
    fVar3 = *(float *)(lVar2 + 0x144);
    if (*(float *)(lVar2 + 0x144) <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(lVar2 + 0x144) = fVar3;
    fVar3 = *(float *)(lVar2 + 0x150);
    if (*(float *)(lVar2 + 0x150) <= *(float *)(lVar1 + 0xcc8)) {
      fVar3 = *(float *)(lVar1 + 0xcc8);
    }
    *(float *)(lVar2 + 0x150) = fVar3;
  }
  return;
}



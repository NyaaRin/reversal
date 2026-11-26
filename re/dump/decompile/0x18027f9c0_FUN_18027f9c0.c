// 0x18027f9c0  FUN_18027f9c0
// size=219 thunk=false
// signature: undefined FUN_18027f9c0()
// status: ok


void FUN_18027f9c0(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if ((*(byte *)(lVar2 + 0x1ec0) & 1) == 0) {
    fVar3 = *(float *)(*(longlong *)(lVar2 + 0x1520) + 0x1e8);
  }
  else {
    fVar3 = *(float *)(lVar2 + 0x1ed8);
  }
  if ((fVar3 < 0.0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    __dyn_tls_on_demand_init();
  }
  return;
}



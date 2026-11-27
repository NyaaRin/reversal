// 0x18027f8a0  FUN_18027f8a0
// size=147 thunk=false
// signature: undefined FUN_18027f8a0()
// status: ok


void FUN_18027f8a0(float param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  FUN_18028a630(lVar3 + 0x1f8,lVar3 + 0x1e8);
  if (param_1 == 0.0) {
    param_1 = *(float *)(lVar3 + 0x1ec);
  }
  *(float *)(lVar3 + 0x1e8) = param_1;
  puVar1 = (uint *)(lVar2 + 0x1ec0);
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}



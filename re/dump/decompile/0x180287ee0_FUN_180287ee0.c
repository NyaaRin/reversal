// 0x180287ee0  FUN_180287ee0
// size=98 thunk=false
// signature: undefined FUN_180287ee0()
// status: ok


void FUN_180287ee0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((*(uint *)(param_1 + 0x14) & 0x100) == 0) &&
     (lVar1 = *(longlong *)(lVar1 + 0xec0), *(float *)(lVar1 + 0x27a4) <= 0.0)) {
    *(undefined4 *)(lVar1 + 0x27a4) = *(undefined4 *)(lVar1 + 0x44);
  }
  return;
}



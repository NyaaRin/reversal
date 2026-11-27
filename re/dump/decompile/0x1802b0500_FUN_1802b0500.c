// 0x1802b0500  FUN_1802b0500
// size=140 thunk=false
// signature: undefined FUN_1802b0500()
// status: ok


float FUN_1802b0500(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_1 < 1) {
    return DAT_180381308;
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  return ((*(float *)(lVar1 + 0xcd8) + *(float *)(lVar1 + 0x1238)) * (float)param_1 -
         *(float *)(lVar1 + 0xcd8)) + *(float *)(lVar1 + 0xc90) + *(float *)(lVar1 + 0xc90);
}



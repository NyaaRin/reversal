// 0x18027bec0  FUN_18027bec0
// size=154 thunk=false
// signature: undefined FUN_18027bec0()
// status: ok


ulonglong FUN_18027bec0(int param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(*(ulonglong *)(lVar1 + 0xec0) + 0x108 + (longlong)param_1) == '\0') {
    return *(ulonglong *)(lVar1 + 0xec0) & 0xffffffffffffff00;
  }
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (param_2 < 0.0) {
    param_2 = *(float *)(lVar1 + 0x90);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  param_2 * param_2 <= *(float *)(lVar1 + 0xbb4 + (longlong)param_1 * 4));
}



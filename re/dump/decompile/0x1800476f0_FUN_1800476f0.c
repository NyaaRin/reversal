// 0x1800476f0  FUN_1800476f0
// size=226 thunk=false
// signature: undefined FUN_1800476f0()
// status: ok


undefined8 * FUN_1800476f0(undefined8 *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228);
    if (lVar2 != 0) {
      if (param_3 <= 0.0) {
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        param_3 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238);
      }
      FUN_18029e350(param_1,lVar2,param_3,DAT_180381308,0,param_2,0,0,0);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



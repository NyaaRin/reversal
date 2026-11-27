// 0x180121e90  FUN_180121e90
// size=112 thunk=false
// signature: undefined FUN_180121e90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180121e90(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_18020e8a0(&DAT_1803ebbc0,param_1);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  _DAT_1803e897c = (float)*(double *)(*(longlong *)(lVar1 + 0xec0) + 0x10);
  FUN_18020e450(param_1);
  return;
}



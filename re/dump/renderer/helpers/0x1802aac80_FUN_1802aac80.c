// 1802aac80  FUN_1802aac80
// signature: undefined FUN_1802aac80()
// status: ok


void FUN_1802aac80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520) + 0x1f0);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    FUN_180279320();
    FUN_1802aab10(param_1,&local_res10);
    FUN_180279390();
    return;
  }
  FUN_1802aab10(param_1,&local_res10);
  return;
}



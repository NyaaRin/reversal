// 0x180287bb0  FUN_180287bb0
// size=105 thunk=false
// signature: undefined FUN_180287bb0()
// status: ok


void FUN_180287bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x2858) != '\0') {
    FUN_180287b10(lVar1,param_1,&local_res10);
  }
  return;
}



// 0x1802aac00  FUN_1802aac00
// size=122 thunk=false
// signature: undefined FUN_1802aac00()
// status: ok


void FUN_1802aac00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_18026a810(0,*(longlong *)(lVar1 + 0xec0) + 0xdc0);
  FUN_1802aab10(param_1,&local_res10);
  FUN_18026a890(1);
  return;
}



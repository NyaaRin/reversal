// 0x1802aab10  FUN_1802aab10
// size=155 thunk=false
// signature: undefined FUN_1802aab10()
// status: ok


void FUN_1802aab10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1520) + 0xd1) == '\0') {
    FUN_1802687f0(&local_res20,&local_res18,param_1,param_2);
    FUN_1802aa3c0(local_res20,local_res18,1);
  }
  return;
}



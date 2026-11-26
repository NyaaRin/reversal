// 1802ac330  FUN_1802ac330
// signature: undefined FUN_1802ac330()
// status: ok


void FUN_1802ac330(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_res10[0] = 0;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  uVar1 = *(undefined4 *)(lVar2 + 0xcc8);
  *(undefined4 *)(lVar2 + 0xcc8) = 0;
  FUN_1802abf60(param_1,local_res10,0x8000);
  *(undefined4 *)(lVar2 + 0xcc8) = uVar1;
  return;
}



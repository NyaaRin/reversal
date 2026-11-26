// 0x18026ce70  FUN_18026ce70
// size=166 thunk=false
// signature: undefined FUN_18026ce70()
// status: ok


undefined8 FUN_18026ce70(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res8 = param_1;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  local_res10 = FUN_18026f580(0x2b38);
  local_res18 = &local_res8;
  local_res20 = local_res10;
  if (local_res10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_18026cf20(local_res10,0);
  }
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar1 + 0xec0) = uVar3;
  FUN_18026e050();
  if (lVar2 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(longlong *)(lVar1 + 0xec0) = lVar2;
  }
  return uVar3;
}



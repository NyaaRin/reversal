// 0x1801d3aa0  FUN_1801d3aa0
// size=229 thunk=false
// signature: undefined FUN_1801d3aa0()
// status: ok


void FUN_1801d3aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_18026a810(0,param_1);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
  puVar1 = (undefined4 *)(lVar5 + 0x1f0);
  FUN_18028a630(lVar5 + 0x208,puVar1);
  *puVar1 = 0;
  FUN_1802aab10(param_2,&local_res18);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
  iVar2 = *(int *)(lVar4 + 0x208);
  if (iVar2 < 1) {
    FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(lVar4 + 0x210) + -4 + (longlong)iVar2 * 4);
    *(int *)(lVar4 + 0x208) = iVar2 + -1;
    *(undefined4 *)(lVar4 + 0x1f0) = uVar3;
  }
  FUN_18026a890(1);
  return;
}



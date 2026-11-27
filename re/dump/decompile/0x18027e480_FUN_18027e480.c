// 0x18027e480  FUN_18027e480
// size=202 thunk=false
// signature: undefined FUN_18027e480()
// status: ok


void FUN_18027e480(undefined2 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *param_1 = *(undefined2 *)(lVar1 + 0x14f0);
  param_1[1] = *(undefined2 *)(*(longlong *)(lVar1 + 0x1520) + 0x108);
  param_1[2] = *(undefined2 *)(*(longlong *)(lVar1 + 0x1520) + 0x1a0);
  param_1[3] = *(undefined2 *)(lVar1 + 0x1fc8);
  param_1[4] = *(undefined2 *)(lVar1 + 0x1fd8);
  param_1[5] = *(undefined2 *)(lVar1 + 0x1fe8);
  param_1[6] = *(undefined2 *)(lVar1 + 0x1ff8);
  param_1[7] = *(undefined2 *)(lVar1 + 0x2018);
  param_1[8] = *(undefined2 *)(lVar1 + 0x2008);
  param_1[9] = *(undefined2 *)(lVar1 + 0x2038);
  param_1[10] = *(undefined2 *)(lVar1 + 0x26d4);
  return;
}



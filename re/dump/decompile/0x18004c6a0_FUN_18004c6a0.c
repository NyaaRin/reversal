// 0x18004c6a0  FUN_18004c6a0
// size=143 thunk=false
// signature: undefined FUN_18004c6a0()
// status: ok


undefined8 FUN_18004c6a0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  lVar1 = FUN_180039770();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar1 + 0x1520) + 0xd1) == '\0') {
      local_res10[0] = 0;
      FUN_18027f400(local_res10,DAT_180381384);
    }
  }
  return 0;
}



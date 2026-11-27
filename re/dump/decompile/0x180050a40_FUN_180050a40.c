// 0x180050a40  FUN_180050a40
// size=105 thunk=false
// signature: undefined FUN_180050a40()
// status: ok


undefined8 FUN_180050a40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(9,"EndListBox");
    if (cVar1 != '\0') {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      FUN_180273410();
      FUN_18027fda0();
    }
  }
  return 0;
}



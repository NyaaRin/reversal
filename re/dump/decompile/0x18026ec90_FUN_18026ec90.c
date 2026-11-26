// 0x18026ec90  FUN_18026ec90
// size=101 thunk=false
// signature: undefined FUN_18026ec90()
// status: ok


void FUN_18026ec90(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(int *)(lVar1 + 0x157c) = param_1;
  *(undefined1 *)(lVar1 + 0x1590) = 0;
  if ((param_1 != 0) && (*(int *)(lVar1 + 0x1580) != param_1)) {
    *(undefined8 *)(lVar1 + 0x1588) = 0;
  }
  return;
}



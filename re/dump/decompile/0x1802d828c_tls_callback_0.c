// 0x1802d828c  tls_callback_0
// size=102 thunk=false
// signature: undefined tls_callback_0()
// status: ok


void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x10) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
    for (plVar2 = &DAT_18030d2b0; plVar2 != &DAT_18030d2b0; plVar2 = plVar2 + 1) {
      if (*plVar2 != 0) {
        (*(code *)PTR__guard_dispatch_icall_18030cca8)();
      }
    }
  }
  return;
}



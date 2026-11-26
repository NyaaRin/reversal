// 0x18027e3b0  FUN_18027e3b0
// size=130 thunk=false
// signature: undefined FUN_18027e3b0()
// status: ok


void FUN_18027e3b0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  *(undefined1 *)(lVar1 + 0x159) = 0;
  if (((*(float *)(lVar1 + 0x130) < *(float *)(lVar1 + 0x118)) ||
      (*(float *)(lVar1 + 0x134) < *(float *)(lVar1 + 0x11c))) && (*(char *)(lVar1 + 0xd1) == '\0'))
  {
    FUN_18027e9c0(
                 "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                 );
    return;
  }
  return;
}



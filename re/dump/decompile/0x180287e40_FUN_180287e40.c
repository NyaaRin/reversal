// 0x180287e40  FUN_180287e40
// size=145 thunk=false
// signature: undefined FUN_180287e40()
// status: ok


void FUN_180287e40(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(lVar1 + 0x1592) = 1;
  *(undefined1 *)(lVar1 + 0x2858) = 1;
  *(undefined4 *)(lVar1 + 0x285c) = 8;
  *(longlong *)(lVar1 + 0x2860) = *(longlong *)(lVar1 + 0x1520);
  *(undefined8 *)(lVar1 + 0x2888) = 0;
  *(undefined8 *)(lVar1 + 0x2880) = 0;
  *(undefined4 *)(lVar1 + 0x2894) = *(undefined4 *)(*(longlong *)(lVar1 + 0x1520) + 0x1a0);
  *(undefined4 *)(lVar1 + 0x2898) = 0;
  *(undefined4 *)(lVar1 + 0x2890) = 0x7f7fffff;
  *(undefined1 *)(lVar1 + 0x2859) = 1;
  return;
}



// 0x180287530  FUN_180287530
// size=240 thunk=false
// signature: undefined FUN_180287530()
// status: ok


void FUN_180287530(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if ((*(char *)(lVar1 + 0x2298) != '\0') && ((*(byte *)(lVar1 + 0x28e4) & 2) != 0)) {
    FUN_180289170("[dragdrop] ClearDragDrop()\n");
  }
  *(undefined1 *)(lVar1 + 0x2298) = 0;
  *(undefined8 *)(lVar1 + 0x22b4) = 0;
  *(undefined8 *)(lVar1 + 0x22a8) = 0;
  *(undefined4 *)(lVar1 + 0x22b0) = 0;
  *(undefined8 *)(lVar1 + 0x22c0) = 0;
  *(undefined8 *)(lVar1 + 0x22c8) = 0;
  *(undefined8 *)(lVar1 + 0x22d0) = 0;
  *(undefined8 *)(lVar1 + 0x22d8) = 0;
  *(undefined2 *)(lVar1 + 0x22e0) = 0;
  *(undefined4 *)(lVar1 + 0x22bc) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x22e2) = 0;
  *(undefined4 *)(lVar1 + 0x2310) = 0;
  *(undefined8 *)(lVar1 + 0x231c) = 0;
  *(undefined4 *)(lVar1 + 0x2318) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2324) = 0xffffffff;
  if (*(longlong *)(lVar1 + 0x2338) != 0) {
    *(undefined8 *)(lVar1 + 0x2330) = 0;
    FUN_18026f680();
    *(undefined8 *)(lVar1 + 0x2338) = 0;
  }
  *(undefined8 *)(lVar1 + 0x2340) = 0;
  *(undefined8 *)(lVar1 + 0x2348) = 0;
  return;
}



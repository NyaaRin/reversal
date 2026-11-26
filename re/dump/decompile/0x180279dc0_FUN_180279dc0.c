// 0x180279dc0  FUN_180279dc0
// size=221 thunk=false
// signature: undefined FUN_180279dc0()
// status: ok


void FUN_180279dc0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  if ((*(byte *)(lVar1 + 0x28e4) & 4) != 0) {
    FUN_180289170("SetKeyboardFocusHere(%d) in window \"%s\"\n",0,*(undefined8 *)(lVar2 + 8));
  }
  if ((*(char *)(lVar1 + 0x2298) == '\0') && (*(longlong *)(lVar1 + 0x1540) == 0)) {
    FUN_180282c60(lVar2);
    uVar3 = 3;
    if (*(char *)(lVar2 + 0xd3) != '\0') {
      uVar3 = 0x21;
    }
    FUN_180283a20(0xffffffff,3,0x5600,uVar3);
    *(undefined4 *)(lVar1 + 0x2150) = 1;
    *(undefined4 *)(lVar1 + 0x2154) = 1;
    return;
  }
  if ((*(byte *)(lVar1 + 0x28e4) & 4) != 0) {
    FUN_180289170("SetKeyboardFocusHere() ignored while DragDropActive!\n");
  }
  return;
}



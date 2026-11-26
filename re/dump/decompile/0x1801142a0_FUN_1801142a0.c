// 0x1801142a0  FUN_1801142a0
// size=110 thunk=false
// signature: undefined FUN_1801142a0()
// status: ok


void FUN_1801142a0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_1803fa608 != 0) {
    uVar2 = *(undefined4 *)(DAT_1803fa608 + 4);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0xfa8) = uVar2;
  *(undefined4 *)(lVar1 + 0xfc0) = 0;
  *(undefined1 *)(lVar1 + 4000) = 0;
  *(undefined4 *)(lVar1 + 0xfa4) = 0;
  *(undefined8 *)(lVar1 + 0xf98) = 0;
  *(undefined8 *)(lVar1 + 0xf90) = 0;
  *(undefined8 *)(lVar1 + 0xfb0) = 0;
  *(undefined8 *)(lVar1 + 0xfb8) = 0;
  return;
}



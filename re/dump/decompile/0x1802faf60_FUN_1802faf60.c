// 0x1802faf60  FUN_1802faf60
// size=319 thunk=false
// signature: undefined FUN_1802faf60()
// status: ok


void FUN_1802faf60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if ((*(char *)(param_2 + 0x40) != '\0') && (DAT_1803fa598 != (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
  }
  plVar3 = DAT_1803f9280;
  if ((*(char *)(param_2 + 0x41) != '\0') && (DAT_1803f9280 != (longlong *)0x0)) {
    *(undefined4 *)(param_2 + 0xc0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xc4) = 0x3f800000;
    *(undefined4 *)(param_2 + 200) = 0x3f800000;
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2 + 0xc0);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
  }
  if ((*(char *)(param_2 + 0x42) != '\0') && (DAT_1803fa630 != (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);
  }
  uVar4 = (ulonglong)_tls_index;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8);
    lVar2 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xdb8);
    *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) = 0;
    *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xdb8) = 0;
    if (lVar2 != 0) {
      FUN_1801e95c0(lVar2,uVar1);
    }
    FUN_180114540(uVar1);
  }
  return;
}



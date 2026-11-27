// 0x1801ebb90  FUN_1801ebb90
// size=128 thunk=false
// signature: undefined FUN_1801ebb90()
// status: ok


void FUN_1801ebb90(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_14;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar4 + 0xed0);
  if (0 < iVar1) {
    *(int *)(lVar4 + 0xed0) = iVar1 + -1;
    lVar4 = lVar4 + (longlong)iVar1 * 0x10;
    uVar2 = *(uint *)(lVar4 + 0xdb0);
    uVar3 = *(undefined8 *)(lVar4 + 0xdb8);
    *(undefined4 *)(lVar4 + 0xdb0) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0xdb4) = local_14;
    *(undefined8 *)(lVar4 + 0xdb8) = 0;
    FUN_180114540(uVar3);
    if (uVar2 < 2) {
      LOCK();
      (&DAT_1803ff278)[(int)uVar2] = (&DAT_1803ff278)[(int)uVar2] + -1;
      UNLOCK();
    }
  }
  return;
}



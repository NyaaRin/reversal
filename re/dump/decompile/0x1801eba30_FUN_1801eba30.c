// 0x1801eba30  FUN_1801eba30
// size=344 thunk=false
// signature: undefined FUN_1801eba30()
// status: ok


ulonglong FUN_1801eba30(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  void *in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong extraout_RAX;
  longlong lVar7;
  undefined4 local_24;
  
  if ((param_1 != (longlong *)0x0) &&
     (lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     in_RAX = ThreadLocalStoragePointer, *(int *)(lVar2 + 0xed0) < 0x10)) {
    *param_1 = 0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_1803ff290);
    uVar3 = DAT_1803da6a0;
    lVar7 = DAT_1803fa4c8;
    if ((DAT_1803da6a0 != 0) && (lVar7 = 0, DAT_1803da6a0 == 1)) {
      lVar7 = DAT_1803fa500;
    }
    if ((((DAT_1803ff284 == '\0') && (DAT_1803da6a0 < 2)) && (lVar7 != 0)) &&
       ((DAT_1803fa455 != '\0' && ((param_2 == '\0' || (DAT_1803fa453 != '\0')))))) {
      piVar1 = &DAT_1803ff278 + (int)DAT_1803da6a0;
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
      uVar5 = FUN_180114de0(lVar7);
      if ((char)uVar5 != '\0') {
        iVar4 = *(int *)(lVar2 + 0xed0);
        lVar6 = (longlong)iVar4 * 0x10 + lVar2;
        *param_1 = lVar7;
        *(uint *)(lVar6 + 0xdc0) = uVar3;
        *(undefined4 *)(lVar6 + 0xdc4) = local_24;
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0xed0) = iVar4;
        *(longlong *)(lVar6 + 0xdc8) = lVar7;
        return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
      uVar5 = extraout_RAX;
    }
    return uVar5 & 0xffffffffffffff00;
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



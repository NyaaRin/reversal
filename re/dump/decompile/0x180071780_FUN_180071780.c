// 0x180071780  FUN_180071780
// size=236 thunk=false
// signature: undefined FUN_180071780()
// status: ok


void FUN_180071780(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  if (*param_1 == DAT_1803e90bc) {
    iVar2 = DAT_1804236a0;
    if ((char)param_1[1] != '\0') {
      do {
        if (iVar2 == 0) break;
        LOCK();
        bVar3 = iVar2 != DAT_1804236a0;
        iVar1 = iVar2 + -1;
        if (bVar3) {
          iVar2 = DAT_1804236a0;
          iVar1 = DAT_1804236a0;
        }
        DAT_1804236a0 = iVar1;
        UNLOCK();
      } while (bVar3);
    }
    if (*(char *)((longlong)param_1 + 5) != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423640);
      if (DAT_1804236b0 != 0) {
        DAT_1804236b0 = DAT_1804236b0 + -1;
      }
      FUN_1800716a0();
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
    }
    if (((*(char *)((longlong)param_1 + 6) != '\0') && (DAT_18042359c != 0)) &&
       (DAT_18042359c = DAT_18042359c + -1, DAT_18042359c == 0)) {
      DAT_180423610 = 0;
    }
    if (((*(char *)((longlong)param_1 + 7) != '\0') && (DAT_180423678 != 0)) &&
       (DAT_180423678 = DAT_180423678 + -1, DAT_180423678 == 0)) {
      DAT_180423580 = 0;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00018007185f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  return;
}



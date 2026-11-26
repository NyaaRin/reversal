// 0x1801f1840  FUN_1801f1840
// size=480 thunk=false
// signature: undefined FUN_1801f1840()
// status: ok


void FUN_1801f1840(void)

{
  bool bVar1;
  char cVar2;
  ULONGLONG UVar3;
  int iVar4;
  bool bVar5;
  
  if (DAT_1803fa608 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(DAT_1803fa608 + 4);
  }
  UVar3 = GetTickCount64();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180423640);
  bVar5 = DAT_1804236b0 == 0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180423640);
  if ((((DAT_1804236a0 == 0) && (bVar5)) && (DAT_18042359c == 0)) && (DAT_180423678 == 0))
  goto LAB_1801f18bf;
  if (((iVar4 < 0) || (DAT_1803e90d4 < 0)) || (iVar4 == DAT_1803e90d4)) {
    bVar5 = false;
    if (-1 < iVar4) goto LAB_1801f18f8;
LAB_1801f18fc:
    if ((DAT_180423618 == 0) || (UVar3 - DAT_180423618 < 0x7d1)) goto LAB_1801f191a;
    bVar1 = true;
  }
  else {
    bVar5 = true;
LAB_1801f18f8:
    if (DAT_1803e90d4 < 0) goto LAB_1801f18fc;
LAB_1801f191a:
    bVar1 = false;
  }
  if ((bVar5) || (bVar1)) {
    DAT_1803e90bc = DAT_1803e90bc + 1;
    if (DAT_1803e90bc == 0) {
      DAT_1803e90bc = 1;
    }
    DAT_1804236a0 = 0;
    DAT_18042359c = 0;
    DAT_180423678 = 0;
    DAT_180423610 = 0;
    DAT_180423580 = 0;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423640);
    DAT_1804236b0 = 0;
    FUN_1800716a0();
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
    DAT_1803e90d4 = iVar4;
    DAT_180423618 = UVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423628);
    cVar2 = FUN_1801f1770();
    if (cVar2 == '\0') {
      DAT_1803fea28 = DAT_1803fea28 + 1;
      if (DAT_1803fea28 < 6) {
        FUN_180014410("[SP] abandoned Lua fullbright recovery failed #%d\n");
      }
    }
    cVar2 = FUN_1801f17f0();
    if (cVar2 == '\0') {
      DAT_1803fea28 = DAT_1803fea28 + 1;
      if (DAT_1803fea28 < 6) {
        FUN_180014410("[SP] abandoned Lua sky recovery failed #%d\n");
      }
    }
    cVar2 = FUN_1801f1810();
    if (cVar2 == '\0') {
      DAT_1803fea28 = DAT_1803fea28 + 1;
      if (DAT_1803fea28 < 6) {
        FUN_180014410("[SP] abandoned Lua world-tint recovery failed #%d\n");
      }
    }
    return;
  }
LAB_1801f18bf:
                    /* WARNING: Could not recover jumptable at 0x0001801f18d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  return;
}



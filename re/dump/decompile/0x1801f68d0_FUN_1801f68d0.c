// 0x1801f68d0  FUN_1801f68d0
// size=125 thunk=false
// signature: undefined FUN_1801f68d0()
// status: ok


void FUN_1801f68d0(undefined8 param_1)

{
  DAT_1803ff980 = 1;
  FUN_180071870();
  FUN_1801225a0();
  FUN_1801f66a0();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
  DAT_180425428 = 0;
  DAT_1803fe650 = 0;
  DAT_1803e7498 = 0xffffffff;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
  DAT_1803e78d0 = 0xffffffff;
  DAT_180425f80 = 0;
  if (DAT_1803fa420 != (code *)0x0) {
    (*DAT_1803fa420)(param_1);
  }
  FUN_1801225a0();
  return;
}



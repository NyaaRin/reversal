// 0x1801f6840  FUN_1801f6840
// size=135 thunk=false
// signature: undefined FUN_1801f6840()
// status: ok


void FUN_1801f6840(undefined8 param_1,undefined8 param_2)

{
  FUN_1801225a0();
  FUN_1801f66a0();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
  DAT_180425428 = 0;
  DAT_1803fe650 = 0;
  DAT_1803e7498 = 0xffffffff;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
  DAT_1803e78d0 = 0xffffffff;
  DAT_180425f80 = 0;
  if (DAT_1803fa410 != (code *)0x0) {
    (*DAT_1803fa410)(param_1,param_2);
  }
  DAT_1803ff980 = 0;
  FUN_180157e40();
  return;
}



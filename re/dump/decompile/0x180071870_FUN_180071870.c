// 0x180071870  FUN_180071870
// size=167 thunk=false
// signature: undefined FUN_180071870()
// status: ok


void FUN_180071870(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423628);
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
  if (DAT_1803fa608 == 0) {
    DAT_1803e90d4 = 0xffffffff;
  }
  else {
    DAT_1803e90d4 = *(undefined4 *)(DAT_1803fa608 + 4);
  }
  DAT_180423618 = GetTickCount64();
                    /* WARNING: Could not recover jumptable at 0x000180071910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  return;
}



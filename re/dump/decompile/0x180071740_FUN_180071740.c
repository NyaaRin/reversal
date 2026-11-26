// 0x180071740  FUN_180071740
// size=64 thunk=false
// signature: undefined FUN_180071740()
// status: ok


void FUN_180071740(char *param_1)

{
  if (*param_1 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423640);
    if (DAT_180423654 != 0) {
      DAT_180423654 = DAT_180423654 + -1;
    }
    FUN_1800716a0();
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
  }
  return;
}



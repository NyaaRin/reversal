// 0x180114560  FUN_180114560
// size=107 thunk=false
// signature: undefined FUN_180114560()
// status: ok


void FUN_180114560(void)

{
  undefined8 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
  uVar1 = DAT_18040a258;
  DAT_1803e8844 = DAT_1803e8844 + 1;
  DAT_18040a258 = 0;
  DAT_18040a26c = 0;
  LOCK();
  DAT_18040a389 = 0;
  UNLOCK();
  DAT_18040a370 = 0;
  DAT_18040a380 = 0;
  DAT_18040a368 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
  DAT_18040a38a = 0;
  FUN_180114540(uVar1);
  return;
}



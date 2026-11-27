// 0x1801924b0  FUN_1801924b0
// size=64 thunk=false
// signature: undefined FUN_1801924b0()
// status: ok


void FUN_1801924b0(void)

{
  char cVar1;
  
  cVar1 = DAT_1803e89e0;
  LOCK();
  DAT_1803e89e0 = 1;
  UNLOCK();
  FUN_180191a10();
  FUN_1801918f0();
  if ((cVar1 == '\0') && (DAT_18040a3d3 != '\0')) {
    FUN_180191780();
  }
  FUN_180191fa0();
  return;
}



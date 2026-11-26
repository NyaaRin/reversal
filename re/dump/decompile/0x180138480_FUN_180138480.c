// 0x180138480  FUN_180138480
// size=91 thunk=false
// signature: undefined FUN_180138480()
// status: ok


ulonglong FUN_180138480(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = DAT_180409c29;
  LOCK();
  DAT_180409c29 = 0;
  uVar2 = (ulonglong)bVar1;
  UNLOCK();
  if (bVar1 != 0) {
    if ((DAT_180409c78 != (longlong *)0x0) && (DAT_180409c38 != 0)) {
      *DAT_180409c78 = DAT_180409c38;
    }
    FUN_180137a30("restore");
    uVar2 = DAT_180409c50;
    DAT_180409c78 = (longlong *)0x0;
    DAT_180409c38 = 0;
    LOCK();
    DAT_180409c50 = 0;
    UNLOCK();
  }
  return uVar2;
}



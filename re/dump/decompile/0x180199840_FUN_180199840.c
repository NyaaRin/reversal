// 0x180199840  FUN_180199840
// size=71 thunk=false
// signature: undefined FUN_180199840()
// status: ok


char FUN_180199840(void)

{
  char cVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_1804096e7 == '\x01';
  cVar1 = DAT_1804096e7;
  if (bVar2) {
    DAT_1804096e7 = '\0';
    cVar1 = '\x01';
  }
  UNLOCK();
  if (bVar2) {
    cVar1 = FUN_180014410("[DUMP] Lua dumper disabled. Files: %d, dupes: %d, dropped: %d, queued: %zu KB\n"
                          ,DAT_18040975c,DAT_180409764,DAT_180409700,DAT_180409708 >> 10);
  }
  return cVar1;
}



// 0x180002e50  FUN_180002e50
// size=141 thunk=false
// signature: undefined FUN_180002e50()
// callers:
// status: ok


void FUN_180002e50(void)

{
  DAT_1803fad40 = 0;
  DAT_1803fad48 = FUN_1802d8350(0x60);
  *(longlong *)DAT_1803fad48 = DAT_1803fad48;
  *(longlong *)(DAT_1803fad48 + 8) = DAT_1803fad48;
  DAT_1803fad58 = 0;
  DAT_1803fad60 = 0;
  uRam00000001803fad68 = 0;
  DAT_1803fad70 = 7;
  DAT_1803fad78 = 8;
  DAT_1803fad40 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fad58,0x10,DAT_1803fad48);
  atexit(FUN_18030a600);
  return;
}



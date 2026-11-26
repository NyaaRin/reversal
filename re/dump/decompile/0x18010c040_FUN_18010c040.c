// 0x18010c040  FUN_18010c040
// size=258 thunk=false
// signature: undefined FUN_18010c040()
// status: ok


void FUN_18010c040(void)

{
  char cVar1;
  longlong lVar2;
  
  if ((((DAT_180409678 == '\0') && (0 < DAT_180409640)) && (DAT_1803fa608 != 0)) &&
     ((((DAT_1803e7b88 == *(int *)(DAT_1803fa608 + 4) && (0 < DAT_180401630)) &&
       ((DAT_1804236a5 == '\0' && ((DAT_180423650 == 0 && (DAT_1804236a0 == 0)))))) &&
      (DAT_1803fa46f == '\0')))) {
    lVar2 = FUN_180109640();
    if (((lVar2 != 0) && (DAT_180409680 != 0)) && (DAT_180409658 != 0)) {
      cVar1 = FUN_180109710(lVar2);
      if (cVar1 != '\0') {
        DAT_180401630 = 0;
        DAT_18042619c = DAT_18042619c + 1;
        if (DAT_18042619c < 4) {
          FUN_180014410("[GLOW] composite #%d (ctx=%p)\n",DAT_18042619c,lVar2);
        }
        FUN_18010b290(lVar2);
      }
    }
  }
  return;
}



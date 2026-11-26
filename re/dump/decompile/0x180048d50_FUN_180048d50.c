// 0x180048d50  FUN_180048d50
// size=46 thunk=false
// signature: undefined FUN_180048d50()
// status: ok


undefined8 FUN_180048d50(void)

{
  if (DAT_1803fcf04 == '\0') {
    DAT_1803fcf04 = '\x01';
    FUN_180014410("[LUAVGUI] script called %s -- not implemented on the overlay path, draw it from EngineDrawing instead\n"
                  ,"DrawTexturedRect");
  }
  return 0;
}



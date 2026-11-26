// 0x180048d80  FUN_180048d80
// size=46 thunk=false
// signature: undefined FUN_180048d80()
// status: ok


undefined8 FUN_180048d80(void)

{
  if (DAT_180423a40 == '\0') {
    DAT_180423a40 = '\x01';
    FUN_180014410("[LUAVGUI] script called %s -- not implemented on the overlay path, draw it from EngineDrawing instead\n"
                  ,"DrawTexturedRectRotated");
  }
  return 0;
}



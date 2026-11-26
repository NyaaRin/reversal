// 0x180048db0  FUN_180048db0
// size=46 thunk=false
// signature: undefined FUN_180048db0()
// status: ok


undefined8 FUN_180048db0(void)

{
  if (DAT_18042602c == '\0') {
    DAT_18042602c = '\x01';
    FUN_180014410("[LUAVGUI] script called %s -- not implemented on the overlay path, draw it from EngineDrawing instead\n"
                  ,"DrawPoly");
  }
  return 0;
}



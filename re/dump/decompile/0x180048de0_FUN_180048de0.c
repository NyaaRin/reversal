// 0x180048de0  FUN_180048de0
// size=46 thunk=false
// signature: undefined FUN_180048de0()
// status: ok


undefined8 FUN_180048de0(void)

{
  if (DAT_1803f91f8 == '\0') {
    DAT_1803f91f8 = '\x01';
    FUN_180014410("[LUAVGUI] script called %s -- not implemented on the overlay path, draw it from EngineDrawing instead\n"
                  ,"SetDrawColorMaterial");
  }
  return 0;
}



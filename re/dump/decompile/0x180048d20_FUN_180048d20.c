// 0x180048d20  FUN_180048d20
// size=46 thunk=false
// signature: undefined FUN_180048d20()
// status: ok


undefined8 FUN_180048d20(void)

{
  if (DAT_1803fed80 == '\0') {
    DAT_1803fed80 = '\x01';
    FUN_180014410("[LUAVGUI] script called %s -- not implemented on the overlay path, draw it from EngineDrawing instead\n"
                  ,"SetMaterial");
  }
  return 0;
}



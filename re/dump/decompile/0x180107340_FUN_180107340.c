// 0x180107340  FUN_180107340
// size=130 thunk=false
// signature: undefined FUN_180107340()
// status: ok


longlong * FUN_180107340(void)

{
  char cVar1;
  
  if ((DAT_1804015c0 == (longlong *)0x0) && (DAT_1803fa640 != (longlong *)0x0)) {
    DAT_1804015c0 =
         (longlong *)
         (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,"models/wireframe","Model textures",1,0);
    if (DAT_1804015c0 != (longlong *)0x0) {
      cVar1 = (**(code **)(*DAT_1804015c0 + 0x150))(DAT_1804015c0);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_1804015c0 + 0x60))();
        return DAT_1804015c0;
      }
    }
    DAT_1804015c0 = (longlong *)0x0;
  }
  return DAT_1804015c0;
}



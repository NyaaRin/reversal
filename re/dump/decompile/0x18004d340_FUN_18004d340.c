// 0x18004d340  FUN_18004d340
// size=65 thunk=false
// signature: undefined FUN_18004d340()
// status: ok


undefined8 FUN_18004d340(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(0xb,"EndDisabled");
    if (cVar1 != '\0') {
      FUN_180279200();
    }
  }
  return 0;
}



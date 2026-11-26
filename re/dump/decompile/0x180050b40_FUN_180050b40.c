// 0x180050b40  FUN_180050b40
// size=65 thunk=false
// signature: undefined FUN_180050b40()
// status: ok


undefined8 FUN_180050b40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(7,"EndTooltip");
    if (cVar1 != '\0') {
      FUN_180278d40();
    }
  }
  return 0;
}



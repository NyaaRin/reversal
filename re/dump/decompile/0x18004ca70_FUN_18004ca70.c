// 0x18004ca70  FUN_18004ca70
// size=65 thunk=false
// signature: undefined FUN_18004ca70()
// status: ok


undefined8 FUN_18004ca70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(3,"EndGroup");
    if (cVar1 != '\0') {
      FUN_18027fda0();
    }
  }
  return 0;
}



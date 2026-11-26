// 0x180147b40  FUN_180147b40
// size=50 thunk=false
// signature: undefined FUN_180147b40()
// status: ok


undefined8 FUN_180147b40(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_180147a10();
  if (((cVar1 == '\0') || (DAT_180409a80 == (code *)0x0)) || (DAT_180409a78 == 0)) {
    uVar2 = 0;
  }
  else {
    (*DAT_180409a80)();
    uVar2 = 1;
  }
  return uVar2;
}



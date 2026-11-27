// 0x180147b80  FUN_180147b80
// size=55 thunk=false
// signature: undefined FUN_180147b80()
// status: ok


undefined8 FUN_180147b80(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_180147a10();
  if (((cVar1 == '\0') || (DAT_180409a78 == 0)) || (DAT_180409a88 == 0)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(DAT_180409a88 + DAT_180409a78) = 0xffffffff;
    uVar2 = 1;
  }
  return uVar2;
}



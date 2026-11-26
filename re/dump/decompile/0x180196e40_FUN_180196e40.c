// 0x180196e40  FUN_180196e40
// size=42 thunk=false
// signature: undefined FUN_180196e40()
// status: ok


undefined8 FUN_180196e40(void)

{
  char cVar1;
  
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd8))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



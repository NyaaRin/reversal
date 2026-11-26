// 0x1800de470  FUN_1800de470
// size=64 thunk=false
// signature: undefined FUN_1800de470()
// status: ok


undefined1 FUN_1800de470(void)

{
  char cVar1;
  undefined1 uVar2;
  
  if (DAT_1803fa5a8 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*DAT_1803fa5a8 + 0x78))(DAT_1803fa5a8,0x6b);
    if ((cVar1 != '\0') ||
       (cVar1 = (**(code **)(*DAT_1803fa5a8 + 0x78))(DAT_1803fa5a8,0x6c), uVar2 = 0, cVar1 != '\0'))
    {
      uVar2 = 1;
    }
  }
  return uVar2;
}



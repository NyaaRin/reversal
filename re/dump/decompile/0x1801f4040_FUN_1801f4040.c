// 0x1801f4040  FUN_1801f4040
// size=44 thunk=false
// signature: undefined FUN_1801f4040()
// status: ok


bool FUN_1801f4040(void)

{
  int iVar1;
  
  if (DAT_1803fa660 == (longlong *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();
  return iVar1 == 0;
}



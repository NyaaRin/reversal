// 0x180120100  FUN_180120100
// size=101 thunk=false
// signature: undefined FUN_180120100()
// status: ok


void FUN_180120100(char param_1)

{
  int iVar1;
  
  if (DAT_1803fa660 != (longlong *)0x0) {
    if (param_1 == '\0') {
      iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();
      if (iVar1 != 0) {
        (**(code **)(*DAT_1803fa660 + 0x108))();
        DAT_180409bc3 = 0;
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();
      if (iVar1 == 0) {
        (**(code **)(*DAT_1803fa660 + 0x100))();
        DAT_180409bc3 = 1;
      }
    }
  }
  return;
}



// 0x1801136b0  FUN_1801136b0
// size=84 thunk=false
// signature: undefined FUN_1801136b0()
// status: ok


void FUN_1801136b0(char param_1)

{
  int iVar1;
  
  if (DAT_1803fa660 != (longlong *)0x0) {
    if (param_1 == '\0') {
      DAT_18040a5e0 = 0;
      (**(code **)(*DAT_1803fa660 + 0x108))();
    }
    else {
      iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();
      if (iVar1 == 0) {
        DAT_18040a5e0 = 1;
      }
      (**(code **)(*DAT_1803fa660 + 0x100))();
    }
  }
  return;
}



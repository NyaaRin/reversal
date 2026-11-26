// 0x18022ec00  FUN_18022ec00
// size=18 thunk=false
// signature: undefined FUN_18022ec00()
// status: ok


void FUN_18022ec00(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



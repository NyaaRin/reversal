// 0x180262180  FUN_180262180
// size=18 thunk=false
// signature: undefined FUN_180262180()
// status: ok


void FUN_180262180(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid vector subscript");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



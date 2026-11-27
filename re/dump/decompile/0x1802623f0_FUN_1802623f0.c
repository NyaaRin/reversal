// 0x1802623f0  FUN_1802623f0
// size=18 thunk=false
// signature: undefined FUN_1802623f0()
// status: ok


void FUN_1802623f0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid array<T, N> subscript");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



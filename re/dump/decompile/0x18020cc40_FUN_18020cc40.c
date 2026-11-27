// 0x18020cc40  FUN_18020cc40
// size=18 thunk=false
// signature: undefined FUN_18020cc40()
// status: ok


void FUN_18020cc40(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



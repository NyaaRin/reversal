// 0x180013b80  FUN_180013b80
// size=18 thunk=false
// signature: undefined FUN_180013b80()
// status: ok


void FUN_180013b80(void)

{
  code *pcVar1;
  
  std::_Xlength_error("map/set too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



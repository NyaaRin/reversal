// 0x1802d8348  FUN_1802d8348
// size=8 thunk=false
// signature: undefined FUN_1802d8348()
// status: ok


void FUN_1802d8348(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}



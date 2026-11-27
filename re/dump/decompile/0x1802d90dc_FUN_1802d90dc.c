// 0x1802d90dc  FUN_1802d90dc
// size=5 thunk=false
// signature: undefined FUN_1802d90dc()
// status: ok


void FUN_1802d90dc(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



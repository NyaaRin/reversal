// 0x1802ef42c  FUN_1802ef42c
// size=41 thunk=false
// signature: undefined FUN_1802ef42c()
// status: ok


void FUN_1802ef42c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}



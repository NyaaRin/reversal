// 0x1802eb0b3  FUN_1802eb0b3
// size=41 thunk=false
// signature: undefined FUN_1802eb0b3()
// status: ok


void FUN_1802eb0b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x1b0);
  }
  return;
}



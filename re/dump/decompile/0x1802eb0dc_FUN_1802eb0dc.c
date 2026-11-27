// 0x1802eb0dc  FUN_1802eb0dc
// size=41 thunk=false
// signature: undefined FUN_1802eb0dc()
// status: ok


void FUN_1802eb0dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 400);
  }
  return;
}



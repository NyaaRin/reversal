// 0x1802eb1a4  FUN_1802eb1a4
// size=41 thunk=false
// signature: undefined FUN_1802eb1a4()
// status: ok


void FUN_1802eb1a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(param_2 + 0x230);
  }
  return;
}



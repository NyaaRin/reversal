// 0x1802efdf2  FUN_1802efdf2
// size=46 thunk=false
// signature: undefined FUN_1802efdf2()
// status: ok


void FUN_1802efdf2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}



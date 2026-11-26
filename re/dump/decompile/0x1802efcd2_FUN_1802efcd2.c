// 0x1802efcd2  FUN_1802efcd2
// size=46 thunk=false
// signature: undefined FUN_1802efcd2()
// status: ok


void FUN_1802efcd2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));
  }
  return;
}



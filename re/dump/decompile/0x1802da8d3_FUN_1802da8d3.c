// 0x1802da8d3  FUN_1802da8d3
// size=41 thunk=false
// signature: undefined FUN_1802da8d3()
// status: ok


void FUN_1802da8d3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    FUN_180022e80(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}



// 0x1802ddfd0  FUN_1802ddfd0
// size=38 thunk=false
// signature: undefined FUN_1802ddfd0()
// status: ok


void FUN_1802ddfd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



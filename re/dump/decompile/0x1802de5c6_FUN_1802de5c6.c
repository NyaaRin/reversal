// 0x1802de5c6  FUN_1802de5c6
// size=38 thunk=false
// signature: undefined FUN_1802de5c6()
// status: ok


void FUN_1802de5c6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



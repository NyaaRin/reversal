// 0x1802ef5c8  FUN_1802ef5c8
// size=38 thunk=false
// signature: undefined FUN_1802ef5c8()
// status: ok


void FUN_1802ef5c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



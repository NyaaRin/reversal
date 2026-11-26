// 0x1802dec7a  FUN_1802dec7a
// size=41 thunk=false
// signature: undefined FUN_1802dec7a()
// status: ok


void FUN_1802dec7a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}



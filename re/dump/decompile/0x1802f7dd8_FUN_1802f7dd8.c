// 0x1802f7dd8  FUN_1802f7dd8
// size=38 thunk=false
// signature: undefined FUN_1802f7dd8()
// status: ok


void FUN_1802f7dd8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(param_2 + 0x38);
  }
  return;
}



// 0x1802f0edc  FUN_1802f0edc
// size=38 thunk=false
// signature: undefined FUN_1802f0edc()
// status: ok


void FUN_1802f0edc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



// 0x1802f0adc  FUN_1802f0adc
// size=38 thunk=false
// signature: undefined FUN_1802f0adc()
// status: ok


void FUN_1802f0adc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x10) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



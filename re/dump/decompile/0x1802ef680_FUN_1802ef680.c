// 0x1802ef680  FUN_1802ef680
// size=38 thunk=false
// signature: undefined FUN_1802ef680()
// status: ok


void FUN_1802ef680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x38);
  }
  return;
}



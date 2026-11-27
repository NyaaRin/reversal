// 0x1802f0146  FUN_1802f0146
// size=41 thunk=false
// signature: undefined FUN_1802f0146()
// status: ok


void FUN_1802f0146(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x178);
  }
  return;
}



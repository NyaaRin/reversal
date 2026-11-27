// 0x1802f7d48  FUN_1802f7d48
// size=38 thunk=false
// signature: undefined FUN_1802f7d48()
// status: ok


void FUN_1802f7d48(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x58);
  }
  return;
}



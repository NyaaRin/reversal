// 0x1802eedfe  FUN_1802eedfe
// size=38 thunk=false
// signature: undefined FUN_1802eedfe()
// status: ok


void FUN_1802eedfe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



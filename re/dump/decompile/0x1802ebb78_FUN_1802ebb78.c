// 0x1802ebb78  FUN_1802ebb78
// size=38 thunk=false
// signature: undefined FUN_1802ebb78()
// status: ok


void FUN_1802ebb78(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}



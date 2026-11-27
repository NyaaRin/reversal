// 0x1802f05ee  FUN_1802f05ee
// size=41 thunk=false
// signature: undefined FUN_1802f05ee()
// status: ok


void FUN_1802f05ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}



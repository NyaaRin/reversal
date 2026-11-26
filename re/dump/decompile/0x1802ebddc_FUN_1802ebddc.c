// 0x1802ebddc  FUN_1802ebddc
// size=43 thunk=false
// signature: undefined FUN_1802ebddc()
// status: ok


void FUN_1802ebddc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



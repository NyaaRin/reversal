// 0x1802efc46  FUN_1802efc46
// size=46 thunk=false
// signature: undefined FUN_1802efc46()
// status: ok


void FUN_1802efc46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x108));
  }
  return;
}



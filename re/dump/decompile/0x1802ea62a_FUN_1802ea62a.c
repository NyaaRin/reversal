// 0x1802ea62a  FUN_1802ea62a
// size=43 thunk=false
// signature: undefined FUN_1802ea62a()
// status: ok


void FUN_1802ea62a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



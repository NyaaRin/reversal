// 0x1802ef840  FUN_1802ef840
// size=43 thunk=false
// signature: undefined FUN_1802ef840()
// status: ok


void FUN_1802ef840(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



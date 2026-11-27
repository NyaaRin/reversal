// 0x1802debdb  FUN_1802debdb
// size=46 thunk=false
// signature: undefined FUN_1802debdb()
// status: ok


void FUN_1802debdb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}



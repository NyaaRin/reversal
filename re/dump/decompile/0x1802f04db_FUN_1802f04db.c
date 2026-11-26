// 0x1802f04db  FUN_1802f04db
// size=46 thunk=false
// signature: undefined FUN_1802f04db()
// status: ok


void FUN_1802f04db(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}



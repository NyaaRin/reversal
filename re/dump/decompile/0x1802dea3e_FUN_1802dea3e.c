// 0x1802dea3e  FUN_1802dea3e
// size=46 thunk=false
// signature: undefined FUN_1802dea3e()
// status: ok


void FUN_1802dea3e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}



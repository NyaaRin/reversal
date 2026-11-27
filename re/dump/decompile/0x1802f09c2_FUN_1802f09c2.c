// 0x1802f09c2  FUN_1802f09c2
// size=38 thunk=false
// signature: undefined FUN_1802f09c2()
// status: ok


void FUN_1802f09c2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



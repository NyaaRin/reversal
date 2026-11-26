// 0x1802ea84e  FUN_1802ea84e
// size=38 thunk=false
// signature: undefined FUN_1802ea84e()
// status: ok


void FUN_1802ea84e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



// 0x1802e516c  FUN_1802e516c
// size=38 thunk=false
// signature: undefined FUN_1802e516c()
// status: ok


void FUN_1802e516c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



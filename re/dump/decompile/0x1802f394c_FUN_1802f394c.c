// 0x1802f394c  FUN_1802f394c
// size=38 thunk=false
// signature: undefined FUN_1802f394c()
// status: ok


void FUN_1802f394c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180020a30(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



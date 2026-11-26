// 0x1802f3f9c  FUN_1802f3f9c
// size=41 thunk=false
// signature: undefined FUN_1802f3f9c()
// status: ok


void FUN_1802f3f9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x3c) & 1) != 0) {
    *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffe;
    FUN_180173460(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}



// 0x1802f419c  FUN_1802f419c
// size=41 thunk=false
// signature: undefined FUN_1802f419c()
// status: ok


void FUN_1802f419c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021bab0(*(undefined8 *)(param_2 + 0xd0));
  }
  return;
}



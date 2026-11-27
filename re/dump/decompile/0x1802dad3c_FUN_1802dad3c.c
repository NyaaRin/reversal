// 0x1802dad3c  FUN_1802dad3c
// size=38 thunk=false
// signature: undefined FUN_1802dad3c()
// status: ok


void FUN_1802dad3c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021d5c0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



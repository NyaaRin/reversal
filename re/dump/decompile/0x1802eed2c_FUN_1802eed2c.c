// 0x1802eed2c  FUN_1802eed2c
// size=38 thunk=false
// signature: undefined FUN_1802eed2c()
// status: ok


void FUN_1802eed2c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021c730(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



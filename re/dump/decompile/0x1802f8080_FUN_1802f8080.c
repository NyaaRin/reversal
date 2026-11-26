// 0x1802f8080  FUN_1802f8080
// size=38 thunk=false
// signature: undefined FUN_1802f8080()
// status: ok


void FUN_1802f8080(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x70);
  }
  return;
}



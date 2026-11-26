// 0x1802fbe64  FUN_1802fbe64
// size=38 thunk=false
// signature: undefined FUN_1802fbe64()
// status: ok


void FUN_1802fbe64(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    FUN_18020c610(param_2 + 0x30);
  }
  return;
}



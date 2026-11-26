// 0x1802ebe3e  FUN_1802ebe3e
// size=46 thunk=false
// signature: undefined FUN_1802ebe3e()
// status: ok


void FUN_1802ebe3e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;
    FUN_1800668e0(param_2 + 0x160);
  }
  return;
}



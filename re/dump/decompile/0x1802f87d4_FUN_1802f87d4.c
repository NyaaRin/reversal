// 0x1802f87d4  FUN_1802f87d4
// size=41 thunk=false
// signature: undefined FUN_1802f87d4()
// status: ok


void FUN_1802f87d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x100));
  }
  return;
}



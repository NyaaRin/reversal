// 0x1802ddeb0  FUN_1802ddeb0
// size=38 thunk=false
// signature: undefined FUN_1802ddeb0()
// status: ok


void FUN_1802ddeb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18020e450(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



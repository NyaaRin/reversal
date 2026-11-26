// 0x1802e08c0  FUN_1802e08c0
// size=38 thunk=false
// signature: undefined FUN_1802e08c0()
// status: ok


void FUN_1802e08c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x78);
  }
  return;
}



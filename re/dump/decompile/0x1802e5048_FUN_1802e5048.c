// 0x1802e5048  FUN_1802e5048
// size=41 thunk=false
// signature: undefined FUN_1802e5048()
// status: ok


void FUN_1802e5048(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0xa0);
  }
  return;
}



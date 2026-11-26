// 0x1802e1d00  FUN_1802e1d00
// size=38 thunk=false
// signature: undefined FUN_1802e1d00()
// status: ok


void FUN_1802e1d00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x70);
  }
  return;
}



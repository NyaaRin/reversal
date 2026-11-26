// 0x1802e0a00  FUN_1802e0a00
// size=41 thunk=false
// signature: undefined FUN_1802e0a00()
// status: ok


void FUN_1802e0a00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    FUN_18001bc60(param_2 + 200);
  }
  return;
}



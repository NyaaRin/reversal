// 0x1802fc590  FUN_1802fc590
// size=38 thunk=false
// signature: undefined FUN_1802fc590()
// status: ok


void FUN_1802fc590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b170(param_2 + 0x48);
  }
  return;
}



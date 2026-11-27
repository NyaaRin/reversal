// 0x1802da478  FUN_1802da478
// size=41 thunk=false
// signature: undefined FUN_1802da478()
// status: ok


void FUN_1802da478(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180020a30(param_2 + 0x80);
  }
  return;
}



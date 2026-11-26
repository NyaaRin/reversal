// 0x1802dea84  FUN_1802dea84
// size=41 thunk=false
// signature: undefined FUN_1802dea84()
// status: ok


void FUN_1802dea84(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0xd0));
  }
  return;
}



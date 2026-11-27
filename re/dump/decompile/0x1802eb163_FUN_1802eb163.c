// 0x1802eb163  FUN_1802eb163
// size=41 thunk=false
// signature: undefined FUN_1802eb163()
// status: ok


void FUN_1802eb163(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    FUN_1800668e0(param_2 + 0x150);
  }
  return;
}



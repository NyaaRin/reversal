// 0x1802de70c  FUN_1802de70c
// size=41 thunk=false
// signature: undefined FUN_1802de70c()
// status: ok


void FUN_1802de70c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}



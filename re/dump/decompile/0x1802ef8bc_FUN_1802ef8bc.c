// 0x1802ef8bc  FUN_1802ef8bc
// size=41 thunk=false
// signature: undefined FUN_1802ef8bc()
// status: ok


void FUN_1802ef8bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_1800668e0(param_2 + 0xa0);
  }
  return;
}



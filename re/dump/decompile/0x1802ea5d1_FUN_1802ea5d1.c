// 0x1802ea5d1  FUN_1802ea5d1
// size=41 thunk=false
// signature: undefined FUN_1802ea5d1()
// status: ok


void FUN_1802ea5d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1800668e0(param_2 + 200);
  }
  return;
}



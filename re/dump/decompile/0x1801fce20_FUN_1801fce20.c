// 0x1801fce20  FUN_1801fce20
// size=20 thunk=false
// signature: undefined FUN_1801fce20()
// status: ok


undefined8 FUN_1801fce20(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)((longlong)*(int *)(param_1 + 9) + 0xd + param_1);
}



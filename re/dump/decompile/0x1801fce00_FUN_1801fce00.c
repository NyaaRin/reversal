// 0x1801fce00  FUN_1801fce00
// size=20 thunk=false
// signature: undefined FUN_1801fce00()
// status: ok


undefined8 FUN_1801fce00(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)((longlong)*(int *)(param_1 + 3) + 7 + param_1);
}



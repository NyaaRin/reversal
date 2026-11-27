// 0x180114de0  FUN_180114de0
// size=31 thunk=false
// signature: undefined FUN_180114de0()
// status: ok


undefined8 FUN_180114de0(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 8))();
  return 1;
}



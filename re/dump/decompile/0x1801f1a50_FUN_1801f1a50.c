// 0x1801f1a50  FUN_1801f1a50
// size=42 thunk=false
// signature: undefined FUN_1801f1a50()
// status: ok


undefined8 FUN_1801f1a50(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1,1,1);
  return 1;
}



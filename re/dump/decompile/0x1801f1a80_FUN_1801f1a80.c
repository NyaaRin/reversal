// 0x1801f1a80  FUN_1801f1a80
// size=34 thunk=false
// signature: undefined FUN_1801f1a80()
// status: ok


undefined8 FUN_1801f1a80(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x358))();
  return 1;
}



// 0x18001bdc0  FUN_18001bdc0
// size=34 thunk=false
// signature: undefined FUN_18001bdc0()
// status: ok


undefined8 FUN_18001bdc0(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x570))();
  return 1;
}



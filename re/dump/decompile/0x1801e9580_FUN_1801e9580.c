// 0x1801e9580  FUN_1801e9580
// size=42 thunk=false
// signature: undefined FUN_1801e9580()
// status: ok


undefined8 FUN_1801e9580(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (undefined8 *)0x0)) {
    uVar1 = 0x8876086c;
  }
  else {
    *param_2 = 0;
    uVar1 = (**(code **)(*param_1 + 0x140))();
  }
  return uVar1;
}



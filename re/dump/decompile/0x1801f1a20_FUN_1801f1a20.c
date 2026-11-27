// 0x1801f1a20  FUN_1801f1a20
// size=41 thunk=false
// signature: undefined FUN_1801f1a20()
// status: ok


undefined8 FUN_1801f1a20(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (DAT_18040a378 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x348))();
    uVar1 = 1;
  }
  return uVar1;
}



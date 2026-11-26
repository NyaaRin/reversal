// 0x1801478f0  FUN_1801478f0
// size=38 thunk=false
// signature: undefined FUN_1801478f0()
// status: ok


undefined8 FUN_1801478f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (param_2 < 0)) || (DAT_180409b90 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*DAT_180409b90)();
    uVar1 = 1;
  }
  return uVar1;
}



// 0x1801eb750  FUN_1801eb750
// size=73 thunk=false
// signature: undefined FUN_1801eb750()
// status: ok


undefined8
FUN_1801eb750(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (DAT_1803fa4f8 == (code *)0x0)) {
    uVar1 = 0x8876086c;
  }
  else {
    uVar1 = (*DAT_1803fa4f8)(param_1,param_2,param_4,param_3,param_5,param_6);
  }
  return uVar1;
}



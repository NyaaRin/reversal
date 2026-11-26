// 0x1802b1470  FUN_1802b1470
// size=213 thunk=false
// signature: undefined FUN_1802b1470()
// status: ok


undefined8
FUN_1802b1470(undefined8 param_1,int param_2,int param_3,float *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 - 4U < 2) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,*param_4);
    return uVar1;
  }
  if (param_3 - 6U < 2) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,*(undefined8 *)param_4);
    return uVar1;
  }
  if (param_3 == 8) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,(double)*param_4);
    return uVar1;
  }
  if (param_3 == 9) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,*(undefined8 *)param_4);
    return uVar1;
  }
  if (param_3 == 0) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,(int)*(char *)param_4);
    return uVar1;
  }
  if (param_3 == 1) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,*(undefined1 *)param_4);
    return uVar1;
  }
  if (param_3 == 2) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,(int)*(short *)param_4);
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_180268750(param_1,(longlong)param_2,param_5,*(undefined2 *)param_4);
    return uVar1;
  }
  return 0;
}



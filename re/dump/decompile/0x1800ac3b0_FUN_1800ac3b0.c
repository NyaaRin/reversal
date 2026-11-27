// 0x1800ac3b0  FUN_1800ac3b0
// size=51 thunk=false
// signature: undefined FUN_1800ac3b0()
// status: ok


void FUN_1800ac3b0(longlong *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    while( true ) {
      iVar1 = (*(code *)**(undefined8 **)*param_1)();
      if (iVar1 <= (int)param_1[1]) break;
      (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,1);
    }
  }
  return;
}



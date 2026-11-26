// 0x180210220  FUN_180210220
// size=41 thunk=false
// signature: undefined FUN_180210220()
// status: ok


void FUN_180210220(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



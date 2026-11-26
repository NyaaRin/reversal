// 0x18021e210  FUN_18021e210
// size=36 thunk=false
// signature: undefined FUN_18021e210()
// status: ok


void FUN_18021e210(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// 0x180015460  FUN_180015460
// size=48 thunk=false
// signature: undefined FUN_180015460()
// status: ok


void FUN_180015460(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



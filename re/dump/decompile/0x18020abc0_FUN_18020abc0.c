// 0x18020abc0  FUN_18020abc0
// size=44 thunk=false
// signature: undefined FUN_18020abc0()
// status: ok


void FUN_18020abc0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



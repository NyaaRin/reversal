// 0x180241c50  FUN_180241c50
// size=57 thunk=false
// signature: undefined FUN_180241c50()
// status: ok


void FUN_180241c50(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_180241ba0(plVar1,*param_1,*(undefined8 *)(*plVar1 + 8));
    free((void *)*plVar1);
    return;
  }
  return;
}



// 0x180129d50  FUN_180129d50
// size=88 thunk=false
// signature: undefined FUN_180129d50()
// status: ok


void FUN_180129d50(undefined4 param_1)

{
  longlong *plVar1;
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x330))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
      (**(code **)(*plVar1 + 0x388))(plVar1,0,param_1);
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return;
}



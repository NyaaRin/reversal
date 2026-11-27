// 0x1800e8f60  FUN_1800e8f60
// size=67 thunk=false
// signature: undefined FUN_1800e8f60()
// status: ok


undefined8 FUN_1800e8f60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 200))(plVar1,1);
    FUN_1800e7970("freecam");
  }
  return 0;
}



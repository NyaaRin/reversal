// 0x1800e9f50  FUN_1800e9f50
// size=64 thunk=false
// signature: undefined FUN_1800e9f50()
// status: ok


undefined8 FUN_1800e9f50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d68);
    return 1;
  }
  return 0;
}



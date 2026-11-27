// 0x1800e9910  FUN_1800e9910
// size=173 thunk=false
// signature: undefined FUN_1800e9910()
// status: ok


undefined8 FUN_1800e9910(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
    if (DAT_18040a630 != '\0') {
      FUN_1800b5000();
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1);
    return 1;
  }
  return 0;
}



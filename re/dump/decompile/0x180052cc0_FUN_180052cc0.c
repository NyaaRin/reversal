// 0x180052cc0  FUN_180052cc0
// size=38 thunk=false
// signature: undefined FUN_180052cc0()
// status: ok


undefined8 FUN_180052cc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
    FUN_180051d40();
  }
  return 0;
}



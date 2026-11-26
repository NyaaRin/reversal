// 0x180159210  FUN_180159210
// size=88 thunk=false
// signature: undefined FUN_180159210()
// status: ok


undefined1 FUN_180159210(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_180159030();
  *param_2 = *puVar1;
  puVar1 = (undefined4 *)FUN_180159120(param_1);
  *param_3 = *puVar1;
  return 1;
}



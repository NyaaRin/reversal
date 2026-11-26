// 0x180066ee0  FUN_180066ee0
// size=80 thunk=false
// signature: undefined FUN_180066ee0()
// status: ok


void FUN_180066ee0(undefined8 *param_1)

{
  FUN_18020e450(param_1 + 0xd);
  FUN_18021e290();
  FUN_18021e290();
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  return;
}



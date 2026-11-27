// 0x180116970  FUN_180116970
// size=35 thunk=false
// signature: undefined FUN_180116970()
// status: ok


bool FUN_180116970(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return false;
  }
  lVar1 = (**(code **)(*param_1 + 0x28))();
  return lVar1 == 0;
}



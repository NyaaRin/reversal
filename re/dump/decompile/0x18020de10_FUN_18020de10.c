// 0x18020de10  FUN_18020de10
// size=17 thunk=false
// signature: undefined FUN_18020de10()
// status: ok


void FUN_18020de10(undefined1 *param_1,undefined1 param_2,int param_3)

{
  if ((param_3 != 0) && (param_3 != 3)) {
    LOCK();
    *param_1 = param_2;
    UNLOCK();
    return;
  }
  *param_1 = param_2;
  return;
}



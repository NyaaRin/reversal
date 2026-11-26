// 0x180220bc0  FUN_180220bc0
// size=49 thunk=false
// signature: undefined FUN_180220bc0()
// status: ok


longlong FUN_180220bc0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}



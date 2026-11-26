// 0x180220c00  FUN_180220c00
// size=48 thunk=false
// signature: undefined FUN_180220c00()
// status: ok


longlong FUN_180220c00(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



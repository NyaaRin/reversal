// 0x18023a4a0  FUN_18023a4a0
// size=52 thunk=false
// signature: undefined FUN_18023a4a0()
// status: ok


longlong FUN_18023a4a0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1 & 0xfffffffffffffff0U);
}



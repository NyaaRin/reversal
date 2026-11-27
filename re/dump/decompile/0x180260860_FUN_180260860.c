// 0x180260860  FUN_180260860
// size=70 thunk=false
// signature: undefined FUN_180260860()
// status: ok


undefined8 * FUN_180260860(longlong param_1,undefined8 *param_2,void *param_3)

{
  memmove(param_3,(void *)((longlong)param_3 + 0x30),
          *(longlong *)(param_1 + 8) - ((longlong)param_3 + 0x30));
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x30;
  *param_2 = param_3;
  return param_2;
}



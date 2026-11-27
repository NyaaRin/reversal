// 0x18023cb70  FUN_18023cb70
// size=102 thunk=false
// signature: undefined FUN_18023cb70()
// status: ok


undefined4 * FUN_18023cb70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18016d4c0(param_1 + 2,param_2 + 2);
  FUN_18020d910(param_1 + 10,param_2 + 10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  FUN_18016d4c0(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



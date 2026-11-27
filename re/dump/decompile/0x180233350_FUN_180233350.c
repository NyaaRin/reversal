// 0x180233350  FUN_180233350
// size=100 thunk=false
// signature: undefined FUN_180233350()
// status: ok


void FUN_180233350(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  FUN_18016d4c0(param_2 + 2,param_3 + 2);
  FUN_18020d910(param_2 + 10,param_3 + 10);
  *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
  *(undefined1 *)((longlong)param_2 + 0x41) = *(undefined1 *)((longlong)param_3 + 0x41);
  *(undefined1 *)((longlong)param_2 + 0x42) = *(undefined1 *)((longlong)param_3 + 0x42);
  FUN_18016d4c0(param_2 + 0x12,param_3 + 0x12);
  return;
}



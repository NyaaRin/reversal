// 0x180231d50  FUN_180231d50
// size=217 thunk=false
// signature: undefined FUN_180231d50()
// status: ok


void FUN_180231d50(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((longlong)param_2 + 5) = *(undefined1 *)((longlong)param_3 + 5);
  *(undefined1 *)((longlong)param_2 + 6) = *(undefined1 *)((longlong)param_3 + 6);
  *(undefined1 *)((longlong)param_2 + 7) = *(undefined1 *)((longlong)param_3 + 7);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  param_2[6] = param_3[6];
  FUN_18016d4c0(param_2 + 8,param_3 + 8);
  FUN_18016d4c0(param_2 + 0x10,param_3 + 0x10);
  FUN_18016d4c0(param_2 + 0x18,param_3 + 0x18);
  FUN_18016d4c0(param_2 + 0x20,param_3 + 0x20);
  param_2[0x28] = param_3[0x28];
  param_2[0x29] = param_3[0x29];
  *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_3 + 0x2a);
  *(undefined1 *)((longlong)param_2 + 0xa9) = *(undefined1 *)((longlong)param_3 + 0xa9);
  *(undefined1 *)((longlong)param_2 + 0xaa) = *(undefined1 *)((longlong)param_3 + 0xaa);
  return;
}



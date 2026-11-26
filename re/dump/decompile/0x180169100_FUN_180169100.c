// 0x180169100  FUN_180169100
// size=98 thunk=false
// signature: undefined FUN_180169100()
// status: ok


undefined8 * FUN_180169100(undefined8 *param_1)

{
  *param_1 = vftable_Features_Visual_ESP_Editor_Elements_BaseElement;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 1;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 3) = 0x451c4000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_18001d080(param_1 + 4,"Element",7);
  return param_1;
}



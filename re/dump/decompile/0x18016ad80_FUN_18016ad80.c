// 0x18016ad80  FUN_18016ad80
// size=227 thunk=false
// signature: undefined FUN_18016ad80()
// status: ok


undefined8 * FUN_18016ad80(undefined8 *param_1)

{
  FUN_180169100();
  *param_1 = vftable_Features_Visual_ESP_Editor_Elements_HealthBarElement;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  param_1[10] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f333333;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40000000;
  *(undefined2 *)(param_1 + 0xf) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f400000;
  param_1[0x16] = 0;
  FUN_180212700(param_1 + 4,"Health Bar",10);
  *(undefined4 *)(param_1 + 1) = 2;
  return param_1;
}



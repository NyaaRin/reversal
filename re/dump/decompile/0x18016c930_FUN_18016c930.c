// 0x18016c930  FUN_18016c930
// size=161 thunk=false
// signature: undefined FUN_18016c930()
// status: ok


undefined8 * FUN_18016c930(undefined8 *param_1)

{
  FUN_180169100();
  *param_1 = vftable_Features_Visual_ESP_Editor_Elements_TextElement;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f48c8ca;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_18001d080(param_1 + 0xc,"Sample text",0xb);
  *(undefined2 *)(param_1 + 0x10) = 1;
  FUN_180212700(param_1 + 4,&DAT_180342d00,4);
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



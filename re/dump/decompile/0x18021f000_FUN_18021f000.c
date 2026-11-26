// 0x18021f000  FUN_18021f000
// size=90 thunk=false
// signature: undefined FUN_18021f000()
// status: ok


undefined8 * FUN_18021f000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  param_1[6] = &PTR_Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09_18033daa8;
  param_1[7] = 0x1803ee0d2;
  return param_1;
}



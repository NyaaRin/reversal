// 0x18023a470  Features_Visual_ESP_Editor_Elements_CircleElement_vfunc11
// size=45 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_CircleElement_vfunc11()
// status: ok


void Features_Visual_ESP_Editor_Elements_CircleElement_vfunc11
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  return;
}



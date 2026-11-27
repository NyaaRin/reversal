// 0x18016ad30  Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc00
// size=71 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc00()
// status: ok


undefined8 *
Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_Features_Visual_ESP_Editor_Elements_BaseElement;
  FUN_18020e450(param_1 + 4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



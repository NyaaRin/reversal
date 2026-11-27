// 0x18016d430  Features_Visual_ESP_Editor_Elements_TextElement_vfunc00
// size=81 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_TextElement_vfunc00()
// status: ok


undefined8 *
Features_Visual_ESP_Editor_Elements_TextElement_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  FUN_18020e450(param_1 + 0xc);
  *param_1 = vftable_Features_Visual_ESP_Editor_Elements_BaseElement;
  FUN_18020e450(param_1 + 4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



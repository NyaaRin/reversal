// 0x180170e20  Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc00
// size=52 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc00()
// status: ok


void * Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc00
                 (void *param_1,ulonglong param_2)

{
  FUN_180170e60();
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



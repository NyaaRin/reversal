// 0x18016cc90  Features_Visual_ESP_Editor_Elements_TextElement_vfunc02
// size=40 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_TextElement_vfunc02()
// status: ok


undefined8
Features_Visual_ESP_Editor_Elements_TextElement_vfunc02(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  if (0xf < *(ulonglong *)(param_1 + 0x78)) {
    plVar1 = (longlong *)*plVar1;
  }
  FUN_18016ca30(param_2,plVar1);
  return param_2;
}



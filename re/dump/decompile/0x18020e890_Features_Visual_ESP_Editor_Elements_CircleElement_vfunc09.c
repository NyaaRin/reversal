// 0x18020e890  Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09
// size=5 thunk=true
// signature: undefined Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09()
// status: ok


void Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(longlong *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    puVar3 = auStack_28;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_20;
    }
    *(undefined8 *)(puVar3 + -8) = 0x18020e498;
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



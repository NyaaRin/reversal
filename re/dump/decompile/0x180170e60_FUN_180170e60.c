// 0x180170e60  FUN_180170e60
// size=258 thunk=false
// signature: undefined FUN_180170e60()
// status: ok


void FUN_180170e60(undefined8 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 *local_18;
  undefined8 *local_10;
  
  puVar3 = auStack_38;
  local_18 = param_1;
  FUN_18020e450(param_1 + 0x3c);
  local_10 = param_1 + 0x34;
  FUN_18020e450(param_1 + 0x38);
  FUN_18021d530(param_1 + 0x34);
  FUN_18020e450(param_1 + 0x30);
  pvVar1 = (void *)param_1[0x2d];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    puVar3 = auStack_38;
    if ((0xfff < (ulonglong)(param_1[0x2f] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_30;
    }
    *(undefined8 *)(puVar3 + -8) = 0x180170ef0;
    free(_Memory);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180170f13;
  FUN_18020e450(param_1 + 0x26);
  *(undefined8 *)(puVar3 + -8) = 0x180170f20;
  FUN_18020e450(param_1 + 0x22);
  *(undefined8 *)(puVar3 + -8) = 0x180170f2d;
  FUN_18020e450(param_1 + 0x15);
  *(undefined8 *)(puVar3 + -8) = 0x180170f3a;
  FUN_18020e450(param_1 + 0x11);
  *(undefined8 *)(puVar3 + -8) = 0x180170f44;
  FUN_18020e450(param_1 + 0xc);
  *param_1 = vftable_Features_Visual_ESP_Editor_Elements_BaseElement;
  FUN_18020e450(param_1 + 4);
  return;
}



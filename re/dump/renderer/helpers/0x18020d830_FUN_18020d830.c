// 18020d830  FUN_18020d830
// signature: undefined FUN_18020d830()
// status: ok


longlong * FUN_18020d830(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      lVar1 = param_1[1];
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
        FUN_18020e450(lVar4);
      }
      pvVar2 = (void *)*param_1;
      _Memory = pvVar2;
      puVar5 = auStack_38;
      if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
        pcVar3 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar3)(5);
        puVar5 = auStack_30;
      }
      *(undefined8 *)(puVar5 + -8) = 0x18020d8c3;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}



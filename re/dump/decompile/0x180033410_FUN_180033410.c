// 0x180033410  FUN_180033410
// size=218 thunk=false
// signature: undefined FUN_180033410()
// status: ok


longlong * FUN_180033410(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_18022a300(*param_1,param_1[1]);
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      puVar3 = auStack_28;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 4) << 4)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x180033497;
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
    puVar4 = puVar3;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  *(undefined8 *)(puVar4 + -8) = 0x1800334d7;
  FUN_18020e8a0(param_1 + 4,param_2 + 4);
  return param_1;
}



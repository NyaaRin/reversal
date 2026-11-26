// 0x180067660  FUN_180067660
// size=149 thunk=false
// signature: undefined FUN_180067660()
// status: ok


longlong * FUN_180067660(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      puVar4 = auStack_28;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar4 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        pcVar2 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x1800676b9;
      free(_Memory);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}



// 0x180209990  FUN_180209990
// size=133 thunk=false
// signature: undefined FUN_180209990()
// status: ok


void FUN_180209990(longlong *param_1)

{
  code *pcVar1;
  void *_Memory;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 != 0) {
    FUN_18022a210(*param_1,param_1[1]);
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar3 = auStack_28;
    if (0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 4) * 0x10)) {
      _Memory = *(void **)((longlong)pvVar2 + -8);
      pvVar2 = (void *)((longlong)pvVar2 + (-8 - (longlong)_Memory));
      puVar3 = auStack_28;
      if ((void *)0x1f < pvVar2) {
        pcVar1 = (code *)swi(0x29);
        _Memory = pvVar2;
        (*pcVar1)(5);
        puVar3 = auStack_20;
      }
    }
    *(undefined8 *)(puVar3 + -8) = 0x180209a02;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



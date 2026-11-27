// 0x18020cdb0  thunk_FUN_18021d530
// size=5 thunk=true
// signature: undefined thunk_FUN_18021d530()
// status: ok


void thunk_FUN_18021d530(longlong *param_1)

{
  code *pcVar1;
  void *_Memory;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 != 0) {
    FUN_18022a300(*param_1,param_1[1]);
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar3 = auStack_28;
    if (0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 4) << 4)) {
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
    *(undefined8 *)(puVar3 + -8) = 0x18021d5a3;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



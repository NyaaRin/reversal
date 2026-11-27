// 0x180022df0  FUN_180022df0
// size=129 thunk=false
// signature: undefined FUN_180022df0()
// status: ok


void FUN_180022df0(longlong param_1)

{
  code *pcVar1;
  void *_Memory;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong local_18;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    puVar3 = auStack_38;
    local_18 = param_1;
    if (0xfff < (ulonglong)((*(longlong *)(param_1 + 0x20) - (longlong)pvVar2 >> 3) * 8)) {
      _Memory = *(void **)((longlong)pvVar2 + -8);
      pvVar2 = (void *)((longlong)pvVar2 + (-8 - (longlong)_Memory));
      puVar3 = auStack_38;
      if ((void *)0x1f < pvVar2) {
        pcVar1 = (code *)swi(0x29);
        _Memory = pvVar2;
        (*pcVar1)(5);
        puVar3 = auStack_30;
      }
    }
    *(undefined8 *)(puVar3 + -8) = 0x180022e5d;
    free(_Memory);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



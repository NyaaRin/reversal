// 0x180239a50  FUN_180239a50
// size=123 thunk=false
// signature: undefined FUN_180239a50()
// status: ok


void FUN_180239a50(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  void *pvVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    _Memory = pvVar3;
    puVar2 = auStack_48;
    if (0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 2) * 4)) {
      _Memory = *(void **)((longlong)pvVar3 + -8);
      pvVar3 = (void *)((longlong)pvVar3 + (-8 - (longlong)_Memory));
      puVar2 = auStack_48;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        _Memory = pvVar3;
        (*pcVar1)(5);
        puVar2 = auStack_40;
      }
    }
    *(undefined8 *)(puVar2 + -8) = 0x180239aaf;
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



// 0x1800191d0  FUN_1800191d0
// size=168 thunk=false
// signature: undefined FUN_1800191d0()
// status: ok


longlong * FUN_1800191d0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      puVar3 = auStack_28;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 3) * 8)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x180019239;
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



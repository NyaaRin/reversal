// 0x180261ae0  FUN_180261ae0
// size=246 thunk=false
// signature: undefined FUN_180261ae0()
// status: ok


longlong * FUN_180261ae0(longlong *param_1,longlong *param_2)

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
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      puVar3 = auStack_28;
      if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        pcVar2 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar2)(5);
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x180261b3e;
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
  param_1[3] = param_2[3];
  *(char *)(param_1 + 4) = (char)param_2[4];
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(puVar4 + -8) = 0x180261bb3;
  FUN_1802608b0(param_1 + 8,param_2 + 8);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return param_1;
}



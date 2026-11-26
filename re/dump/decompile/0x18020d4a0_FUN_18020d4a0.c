// 0x18020d4a0  FUN_18020d4a0
// size=106 thunk=false
// signature: undefined FUN_18020d4a0()
// status: ok


void FUN_18020d4a0(longlong *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 != 0) {
    FUN_18022a400(*param_1,param_1[1]);
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    puVar3 = auStack_28;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_20;
    }
    *(undefined8 *)(puVar3 + -8) = 0x18020d4f7;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



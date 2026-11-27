// 0x180266550  FUN_180266550
// size=133 thunk=false
// signature: undefined FUN_180266550()
// status: ok


void FUN_180266550(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  if (*param_1 != 0) {
    FUN_18022a400(*param_1,param_1[1]);
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    puVar3 = auStack_48;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_48,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_40;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1802665b3;
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



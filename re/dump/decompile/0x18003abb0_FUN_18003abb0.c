// 0x18003abb0  FUN_18003abb0
// size=104 thunk=false
// signature: undefined FUN_18003abb0()
// status: ok


void FUN_18003abb0(longlong param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong local_18;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  local_18 = param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    puVar3 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x38) - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_30;
    }
    *(undefined8 *)(puVar3 + -8) = 0x18003abfd;
    free(_Memory);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_18020e450(param_1);
  return;
}



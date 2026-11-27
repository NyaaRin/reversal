// 0x180235b30  FUN_180235b30
// size=123 thunk=false
// signature: undefined FUN_180235b30()
// status: ok


void FUN_180235b30(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *_Memory;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_180214c90(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _Memory = *(void **)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x90)) {
    puVar1 = (undefined8 *)((longlong)_Memory + -8);
    _Memory = (void *)((longlong)_Memory + (-8 - (longlong)*puVar1));
    if (_Memory < (void *)0x20) {
      free((void *)*puVar1);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  free(_Memory);
  return;
}



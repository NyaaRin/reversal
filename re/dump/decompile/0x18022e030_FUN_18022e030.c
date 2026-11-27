// 0x18022e030  FUN_18022e030
// size=173 thunk=false
// signature: undefined FUN_18022e030()
// status: ok


void FUN_18022e030(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_2 < 0x8000000000000000) {
    pvVar1 = (void *)*param_1;
    uVar5 = param_1[2] - (longlong)pvVar1;
    uVar4 = 0x7fffffffffffffff;
    if ((uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1)) &&
       (uVar4 = uVar5 + (uVar5 >> 1), uVar4 < param_2)) {
      uVar4 = param_2;
    }
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      puVar3 = auStack_28;
      if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x18022e0b6;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    FUN_180238590(param_1,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020cc40();
}



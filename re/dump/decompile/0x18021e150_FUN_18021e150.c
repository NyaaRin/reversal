// 0x18021e150  FUN_18021e150
// size=189 thunk=false
// signature: undefined FUN_18021e150()
// status: ok


void FUN_18021e150(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_2 < 0x4000000000000000) {
    pvVar1 = (void *)*param_1;
    uVar5 = param_1[2] - (longlong)pvVar1 >> 2;
    uVar3 = 0x3fffffffffffffff;
    if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
       (uVar3 = uVar5 + (uVar5 >> 1), uVar3 < param_2)) {
      uVar3 = param_2;
    }
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      puVar4 = auStack_28;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 2) * 4)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar4 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x18021e1e6;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    FUN_18022eb50(param_1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020cc40();
}



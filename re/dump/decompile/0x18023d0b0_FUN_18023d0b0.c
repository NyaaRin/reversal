// 0x18023d0b0  FUN_18023d0b0
// size=316 thunk=false
// signature: undefined FUN_18023d0b0()
// status: ok


void FUN_18023d0b0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  void *_Memory;
  void *pvVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar4 = auStack_48;
  pvVar3 = (void *)*param_1;
  uVar2 = param_1[2] - (longlong)pvVar3 >> 4;
  if (param_3 <= uVar2) {
    uVar2 = param_1[1] - (longlong)pvVar3 >> 4;
    if (uVar2 < param_3) {
      memmove(pvVar3,param_2,uVar2 * 0x10);
      pvVar3 = (void *)param_1[1];
      param_2 = (void *)(uVar2 * 0x10 + (longlong)param_2);
      param_3 = param_3 - uVar2;
    }
    memmove(pvVar3,param_2,param_3 * 0x10);
    param_1[1] = (void *)(param_3 * 0x10 + (longlong)pvVar3);
    return;
  }
  if (param_3 < 0x1000000000000000) {
    uVar5 = 0xfffffffffffffff;
    if ((uVar2 <= 0xfffffffffffffff - (uVar2 >> 1)) &&
       (uVar5 = uVar2 + (uVar2 >> 1), uVar5 < param_3)) {
      uVar5 = param_3;
    }
    if (pvVar3 != (void *)0x0) {
      _Memory = pvVar3;
      puVar4 = auStack_48;
      if (0xfff < (param_1[2] - (longlong)pvVar3 & 0xfffffffffffffff0U)) {
        _Memory = *(void **)((longlong)pvVar3 + -8);
        pvVar3 = (void *)((longlong)pvVar3 + (-8 - (longlong)_Memory));
        puVar4 = auStack_48;
        if ((void *)0x1f < pvVar3) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          _Memory = pvVar3;
          puVar4 = auStack_40;
        }
      }
      *(undefined8 *)(puVar4 + -8) = 0x18023d149;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(undefined8 *)(puVar4 + -8) = 0x18023d161;
    FUN_180240020(param_1,uVar5);
    pvVar3 = (void *)*param_1;
    *(undefined8 *)(puVar4 + -8) = 0x18023d176;
    memmove(pvVar3,param_2,param_3 * 0x10);
    param_1[1] = (void *)((longlong)pvVar3 + param_3 * 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020cc40();
}



// 0x18020bd70  FUN_18020bd70
// size=369 thunk=false
// signature: undefined FUN_18020bd70()
// status: ok


void FUN_18020bd70(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  void *_Memory;
  void *_Dst;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  
  puVar7 = auStack_68;
  puVar8 = auStack_68;
  lVar2 = *param_1;
  if ((ulonglong)((param_1[2] - lVar2 >> 2) * -0x3333333333333333) < param_2) {
    if (0xccccccccccccccc < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    lVar3 = param_1[1];
    uVar1 = param_2 * 0x14;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
      puVar8 = auStack_68;
    }
    else if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(uVar1);
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180012fe0();
      }
      lVar6 = FUN_1802d8350();
      if (lVar6 == 0) {
        pcVar5 = (code *)swi(0x29);
        lVar6 = (*pcVar5)(5);
        puVar7 = auStack_60;
      }
      _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar6;
      puVar8 = puVar7;
    }
    *(longlong **)(puVar8 + 0x20) = param_1;
    *(void **)(puVar8 + 0x28) = _Dst;
    *(ulonglong *)(puVar8 + 0x30) = param_2;
    pvVar4 = (void *)*param_1;
    lVar6 = param_1[1];
    *(undefined8 *)(puVar8 + -8) = 0x18020be41;
    memmove(_Dst,pvVar4,lVar6 - (longlong)pvVar4);
    *(undefined8 *)(puVar8 + 0x28) = 0;
    pvVar4 = (void *)*param_1;
    if (pvVar4 != (void *)0x0) {
      _Memory = pvVar4;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar4 >> 2) * 4)) &&
         (_Memory = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)();
        puVar8 = puVar8 + 8;
      }
      *(undefined8 *)(puVar8 + -8) = 0x18020be9f;
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)((longlong)_Dst + (lVar3 - lVar2 >> 2) * 4);
    param_1[2] = (longlong)(uVar1 + (longlong)_Dst);
  }
  return;
}



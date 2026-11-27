// 0x180222e70  FUN_180222e70
// size=440 thunk=false
// signature: undefined FUN_180222e70()
// status: ok


void FUN_180222e70(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  void *_Memory;
  void *_Dst;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar7 = auStack_88;
  puVar8 = auStack_88;
  if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  lVar9 = *param_1;
  uVar6 = (param_1[2] - lVar9 >> 4) * -0x5555555555555555;
  uVar3 = 0x555555555555555 - (uVar6 >> 1);
  if ((uVar6 < uVar3 || uVar6 - uVar3 == 0) &&
     ((uVar6 = uVar6 + (uVar6 >> 1), uVar3 = param_2, uVar6 < param_2 ||
      (uVar3 = uVar6, uVar6 < 0x555555555555556)))) {
    lVar1 = param_1[1];
    uVar6 = uVar3 * 0x30;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
      puVar8 = auStack_88;
    }
    else if (uVar6 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(uVar6);
    }
    else {
      if (uVar6 + 0x27 <= uVar6) goto LAB_180223024;
      lVar4 = FUN_1802d8350();
      if (lVar4 == 0) {
        pcVar2 = (code *)swi(0x29);
        lVar4 = (*pcVar2)(5);
        puVar7 = auStack_80;
      }
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
      puVar8 = puVar7;
    }
    lVar9 = lVar1 - lVar9 >> 4;
    pvVar5 = (void *)(lVar9 * 0x10 + (longlong)_Dst);
    *(longlong **)(puVar8 + 0x20) = param_1;
    *(void **)(puVar8 + 0x28) = _Dst;
    *(ulonglong *)(puVar8 + 0x30) = uVar3;
    *(void **)(puVar8 + 0x38) = pvVar5;
    *(void **)(puVar8 + 0x40) = pvVar5;
    for (lVar9 = param_2 + lVar9 * 0x5555555555555555; lVar9 != 0; lVar9 = lVar9 + -1) {
      pvVar5 = (void *)((longlong)pvVar5 + 0x30);
    }
    *(void **)(puVar8 + 0x40) = pvVar5;
    pvVar5 = (void *)*param_1;
    lVar9 = param_1[1];
    *(undefined8 *)(puVar8 + -8) = 0x180222f92;
    memmove(_Dst,pvVar5,lVar9 - (longlong)pvVar5);
    *(undefined8 *)(puVar8 + 0x28) = 0;
    pvVar5 = (void *)*param_1;
    if (pvVar5 != (void *)0x0) {
      _Memory = pvVar5;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar5 >> 4) << 4)) &&
         (_Memory = *(void **)((longlong)pvVar5 + -8),
         0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar8 = puVar8 + 8;
      }
      *(undefined8 *)(puVar8 + -8) = 0x180222fec;
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)(param_2 * 0x30 + (longlong)_Dst);
    param_1[2] = (longlong)(uVar6 + (longlong)_Dst);
    return;
  }
LAB_180223024:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



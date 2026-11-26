// 0x18023e220  FUN_18023e220
// size=468 thunk=false
// signature: undefined FUN_18023e220()
// status: ok


void FUN_18023e220(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Memory;
  undefined8 *puVar7;
  void *_Dst;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  lVar10 = *param_1;
  uVar6 = (param_1[2] - lVar10 >> 3) * -0x5555555555555555;
  uVar4 = 0xaaaaaaaaaaaaaaa - (uVar6 >> 1);
  if ((uVar6 < uVar4 || uVar6 - uVar4 == 0) &&
     ((uVar6 = uVar6 + (uVar6 >> 1), uVar4 = param_2, uVar6 < param_2 ||
      (uVar4 = uVar6, uVar6 < 0xaaaaaaaaaaaaaab)))) {
    lVar1 = param_1[1];
    uVar6 = uVar4 * 0x18;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
      puVar9 = auStack_88;
    }
    else if (uVar6 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(uVar6);
    }
    else {
      if (uVar6 + 0x27 <= uVar6) goto LAB_18023e3f0;
      lVar5 = FUN_1802d8350();
      if (lVar5 == 0) {
        pcVar3 = (code *)swi(0x29);
        lVar5 = (*pcVar3)(5);
        puVar8 = auStack_80;
      }
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
      puVar9 = puVar8;
    }
    lVar10 = lVar1 - lVar10 >> 3;
    puVar7 = (undefined8 *)((longlong)_Dst + lVar10 * 8);
    *(longlong **)(puVar9 + 0x20) = param_1;
    *(void **)(puVar9 + 0x28) = _Dst;
    *(ulonglong *)(puVar9 + 0x30) = uVar4;
    *(undefined8 **)(puVar9 + 0x38) = puVar7;
    *(undefined8 **)(puVar9 + 0x40) = puVar7;
    for (lVar10 = param_2 + lVar10 * 0x5555555555555555; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7 = puVar7 + 3;
    }
    *(undefined8 **)(puVar9 + 0x40) = puVar7;
    pvVar2 = (void *)*param_1;
    lVar10 = param_1[1];
    *(undefined8 *)(puVar9 + -8) = 0x18023e35d;
    memmove(_Dst,pvVar2,lVar10 - (longlong)pvVar2);
    *(undefined8 *)(puVar9 + 0x28) = 0;
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      _Memory = pvVar2;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 3) * 8)) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
        puVar9 = puVar9 + 8;
      }
      *(undefined8 *)(puVar9 + -8) = 0x18023e3bb;
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)((longlong)_Dst + param_2 * 0x18);
    param_1[2] = (longlong)(uVar6 + (longlong)_Dst);
    return;
  }
LAB_18023e3f0:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



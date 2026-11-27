// 0x18023cf10  FUN_18023cf10
// size=408 thunk=false
// signature: undefined FUN_18023cf10()
// status: ok


void FUN_18023cf10(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  void *_Memory;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  void *_Dst;
  longlong lVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar8 = auStack_88;
  puVar7 = auStack_88;
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  lVar10 = *param_1;
  uVar5 = param_1[2] - lVar10 >> 4;
  if ((uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) &&
     ((uVar5 = uVar5 + (uVar5 >> 1), uVar9 = param_2, uVar5 < param_2 ||
      (uVar9 = uVar5, uVar5 < 0x1000000000000000)))) {
    lVar1 = param_1[1];
    uVar5 = uVar9 * 0x10;
    _Dst = (void *)0x0;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        _Dst = (void *)FUN_1802d8350(uVar5);
        puVar8 = auStack_88;
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_18023d0a4;
        lVar4 = FUN_1802d8350();
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar4 = (*pcVar3)(5);
          puVar7 = auStack_80;
        }
        _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar4;
        puVar8 = puVar7;
      }
    }
    lVar10 = lVar1 - lVar10 >> 4;
    puVar6 = (undefined8 *)(lVar10 * 0x10 + (longlong)_Dst);
    *(longlong **)(puVar8 + 0x20) = param_1;
    *(void **)(puVar8 + 0x28) = _Dst;
    *(ulonglong *)(puVar8 + 0x30) = uVar9;
    *(undefined8 **)(puVar8 + 0x38) = puVar6;
    *(undefined8 **)(puVar8 + 0x40) = puVar6;
    for (lVar10 = param_2 - lVar10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
    }
    *(undefined8 **)(puVar8 + 0x40) = puVar6;
    pvVar2 = (void *)*param_1;
    lVar10 = param_1[1];
    *(undefined8 *)(puVar8 + -8) = 0x18023d029;
    memmove(_Dst,pvVar2,lVar10 - (longlong)pvVar2);
    *(undefined8 *)(puVar8 + 0x28) = 0;
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      _Memory = pvVar2;
      if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
        pcVar3 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar3)(5);
        puVar8 = puVar8 + 8;
      }
      *(undefined8 *)(puVar8 + -8) = 0x18023d070;
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)(param_2 * 0x10 + (longlong)_Dst);
    param_1[2] = (longlong)(uVar5 + (longlong)_Dst);
    return;
  }
LAB_18023d0a4:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



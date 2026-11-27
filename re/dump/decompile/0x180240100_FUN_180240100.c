// 0x180240100  FUN_180240100
// size=547 thunk=false
// signature: undefined FUN_180240100()
// status: ok


longlong FUN_180240100(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  void *_Memory;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong local_78;
  undefined8 local_70;
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  local_70 = param_3;
  local_78 = param_2;
  uVar8 = *param_1;
  lVar4 = (longlong)(param_1[1] - uVar8) >> 6;
  uVar11 = 0x3ffffffffffffff;
  if (lVar4 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = lVar4 + 1;
  uVar5 = (longlong)(param_1[2] - uVar8) >> 6;
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0xffffffffffffffe7;
    uVar5 = 0xffffffffffffffc0;
  }
  else {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar11 = uVar1;
    if (uVar1 <= uVar5) {
      uVar11 = uVar5;
    }
    if (0x3ffffffffffffff < uVar11) {
LAB_18024031f:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar5 = uVar11 * 0x40;
    if (uVar5 == 0) {
      uVar6 = 0;
      puVar10 = auStack_98;
      goto LAB_1802401df;
    }
    if (uVar5 < 0x1000) {
      uVar6 = FUN_1802d8350(uVar5);
      goto LAB_1802401df;
    }
    uVar6 = uVar5 + 0x27;
    if (uVar6 <= uVar5) goto LAB_18024031f;
  }
  lVar4 = FUN_1802d8350(uVar6);
  if (lVar4 == 0) {
    pcVar3 = (code *)swi(0x29);
    lVar4 = (*pcVar3)(5);
    puVar9 = auStack_90;
  }
  uVar6 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar4;
  puVar10 = puVar9;
LAB_1802401df:
  lVar12 = (longlong)(param_2 - uVar8) >> 6;
  lVar4 = lVar12 * 0x40 + uVar6;
  uVar8 = lVar4 + 0x40;
  *(ulonglong **)(puVar10 + 0x30) = param_1;
  *(ulonglong *)(puVar10 + 0x38) = uVar6;
  *(ulonglong *)(puVar10 + 0x40) = uVar11;
  *(ulonglong *)(puVar10 + 0x48) = uVar8;
  *(ulonglong *)(puVar10 + 0x50) = uVar8;
  *(undefined8 *)(puVar10 + -8) = 0x18024021a;
  FUN_180240e30(lVar4,*(undefined8 *)(puVar10 + 0x28));
  *(longlong *)(puVar10 + 0x48) = lVar4;
  uVar11 = param_1[1];
  uVar7 = *(ulonglong *)(puVar10 + 0x20);
  if (uVar7 == uVar11) {
    uVar7 = *param_1;
    uVar8 = uVar6;
  }
  else {
    uVar11 = *param_1;
    *(undefined8 *)(puVar10 + -8) = 0x180240246;
    FUN_180240860(uVar11,uVar7,uVar6,param_1);
    *(ulonglong *)(puVar10 + 0x48) = uVar6;
    uVar11 = param_1[1];
  }
  *(undefined8 *)(puVar10 + -8) = 0x18024025d;
  FUN_180240860(uVar7,uVar11,uVar8,param_1);
  *(undefined8 *)(puVar10 + 0x38) = 0;
  uVar8 = *param_1;
  if (uVar8 != 0) {
    uVar11 = param_1[1];
    *(ulonglong *)(puVar10 + 0x20) = uVar8;
    while (uVar8 != uVar11) {
      *(undefined8 *)(puVar10 + -8) = 0x180240289;
      FUN_18020d430(uVar8 + 0x28);
      *(ulonglong *)(puVar10 + 0x28) = uVar8 + 8;
      *(undefined8 *)(puVar10 + -8) = 0x180240298;
      FUN_18021e060();
      uVar8 = uVar8 + 0x40;
      *(ulonglong *)(puVar10 + 0x20) = uVar8;
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffc0)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar10 = puVar10 + 8;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1802402e3;
    free(_Memory);
  }
  *param_1 = uVar6;
  param_1[1] = uVar1 * 0x40 + uVar6;
  param_1[2] = uVar5 + uVar6;
  return lVar12 * 0x40 + uVar6;
}



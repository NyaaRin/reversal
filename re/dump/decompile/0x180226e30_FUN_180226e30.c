// 0x180226e30  FUN_180226e30
// size=634 thunk=false
// signature: undefined FUN_180226e30()
// status: ok


longlong FUN_180226e30(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *_Memory;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  uVar12 = *param_1;
  lVar4 = ((longlong)(param_1[1] - uVar12) >> 3) * -0x14fa6d7aeb597c3b;
  uVar11 = 0xa7d36bd75acbe;
  if (lVar4 == 0xa7d36bd75acbe) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = lVar4 + 1;
  uVar6 = ((longlong)(param_1[2] - uVar12) >> 3) * -0x14fa6d7aeb597c3b;
  uVar5 = 0xa7d36bd75acbe - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (0xa7d36bd75acbe < uVar11) {
LAB_1802270a6:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar6 = uVar11 * 0x1868;
    if (uVar6 == 0) {
      uVar5 = 0;
      puVar10 = auStack_88;
      goto LAB_180226f24;
    }
    if (uVar6 < 0x1000) {
      uVar5 = FUN_1802d8350(uVar6);
      goto LAB_180226f24;
    }
    uVar5 = uVar6 + 0x27;
    if (uVar5 <= uVar6) goto LAB_1802270a6;
  }
  else {
    uVar5 = 0xfffffffffffffd57;
    uVar6 = 0xfffffffffffffd30;
  }
  lVar4 = FUN_1802d8350(uVar5);
  if (lVar4 == 0) {
    pcVar3 = (code *)swi(0x29);
    lVar4 = (*pcVar3)(5);
    puVar9 = auStack_80;
  }
  uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar4;
  puVar10 = puVar9;
LAB_180226f24:
  lVar13 = -0x14fa6d7aeb597c3b;
  lVar4 = (param_2 - uVar12) +
          SUB168(SEXT816(-0x582c9428a5341e27) * SEXT816((longlong)(param_2 - uVar12)),8);
  lVar4 = (lVar4 >> 0xc) - (lVar4 >> 0x3f);
  lVar7 = lVar4 * 0x1868 + uVar5;
  *(ulonglong **)(puVar10 + 0x20) = param_1;
  *(ulonglong *)(puVar10 + 0x28) = uVar5;
  *(ulonglong *)(puVar10 + 0x30) = uVar11;
  *(longlong *)(puVar10 + 0x38) = lVar7 + 0x1868;
  *(longlong *)(puVar10 + 0x40) = lVar7 + 0x1868;
  *(undefined8 *)(puVar10 + -8) = 0x180226f7b;
  FUN_1800c4c90(lVar7,param_3);
  *(longlong *)(puVar10 + 0x38) = lVar7;
  uVar12 = param_1[1];
  uVar11 = *param_1;
  uVar8 = uVar5;
  if (param_2 == uVar12) {
    if (uVar11 != uVar12) {
      do {
        *(undefined8 *)(puVar10 + -8) = 0x180226f99;
        FUN_1800c4c90(uVar8);
        uVar8 = uVar8 + 0x1868;
        uVar11 = uVar11 + 0x1868;
      } while (uVar11 != uVar12);
    }
    lVar4 = lVar4 * 0x1868;
  }
  else {
    for (; uVar11 != param_2; uVar11 = uVar11 + 0x1868) {
      *(undefined8 *)(puVar10 + -8) = 0x180226fc5;
      FUN_1800c4c90(uVar8);
      uVar8 = uVar8 + 0x1868;
    }
    *(ulonglong *)(puVar10 + 0x38) = uVar5;
    lVar4 = lVar4 * 0x1868;
    uVar12 = param_1[1];
    lVar7 = lVar4 + 0x1868 + uVar5;
    if (param_2 != uVar12) {
      do {
        *(undefined8 *)(puVar10 + -8) = 0x180226fff;
        FUN_1800c4c90(lVar7,param_2);
        lVar7 = lVar7 + 0x1868;
        param_2 = param_2 + 0x1868;
      } while (param_2 != uVar12);
    }
  }
  *(undefined8 *)(puVar10 + 0x28) = 0;
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar2) >> 3) * lVar13 * 0x1868)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar10 = puVar10 + 8;
    }
    *(undefined8 *)(puVar10 + -8) = 0x18022706b;
    free(_Memory);
  }
  *param_1 = uVar5;
  param_1[1] = uVar1 * 0x1868 + uVar5;
  param_1[2] = uVar6 + uVar5;
  return lVar4 + uVar5;
}



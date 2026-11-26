// 0x180218c90  FUN_180218c90
// size=342 thunk=false
// signature: undefined FUN_180218c90()
// status: ok


void FUN_180218c90(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  code *pcVar6;
  longlong lVar7;
  void *_Memory;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  
  puVar10 = auStack_68;
  puVar11 = auStack_68;
  uVar1 = param_1[1];
  uVar2 = *param_1;
  if (*param_2 < 0x800000000000000) {
    uVar8 = *param_2 * 0x20;
    if (uVar8 == 0) {
      uVar8 = 0;
      puVar11 = auStack_68;
    }
    else if (uVar8 < 0x1000) {
      uVar8 = FUN_1802d8350();
    }
    else {
      if (uVar8 + 0x27 <= uVar8) goto LAB_180218de1;
      lVar7 = FUN_1802d8350(uVar8 + 0x27);
      if (lVar7 == 0) {
        pcVar6 = (code *)swi(0x29);
        lVar7 = (*pcVar6)(5);
        puVar10 = auStack_60;
      }
      uVar8 = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar8 - 8) = lVar7;
      puVar11 = puVar10;
    }
    *(ulonglong **)(puVar11 + 0x28) = param_1;
    *(ulonglong *)(puVar11 + 0x30) = uVar8;
    *(ulonglong *)(puVar11 + 0x38) = *param_2;
    uVar3 = param_1[1];
    uVar9 = *param_1;
    *(undefined8 *)(puVar11 + -8) = 0x180218d37;
    FUN_180229020(uVar9,uVar3,uVar8,param_1);
    *(undefined8 *)(puVar11 + 0x30) = 0;
    uVar3 = *param_2;
    uVar9 = *param_1;
    if (uVar9 != 0) {
      uVar4 = param_1[1];
      *(ulonglong *)(puVar11 + 0x20) = uVar9;
      while (uVar9 != uVar4) {
        *(undefined8 *)(puVar11 + -8) = 0x180218d69;
        FUN_18020c270(uVar9 + 8);
        uVar9 = uVar9 + 0x20;
        *(ulonglong *)(puVar11 + 0x20) = uVar9;
      }
      pvVar5 = (void *)*param_1;
      _Memory = pvVar5;
      if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xffffffffffffffe0)) &&
         (_Memory = *(void **)((longlong)pvVar5 + -8),
         0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
        pcVar6 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar6)(5);
        puVar11 = puVar11 + 8;
      }
      *(undefined8 *)(puVar11 + -8) = 0x180218db4;
      free(_Memory);
    }
    *param_1 = uVar8;
    param_1[1] = (uVar1 - uVar2 & 0xffffffffffffffe0) + uVar8;
    param_1[2] = uVar3 * 0x20 + uVar8;
    return;
  }
LAB_180218de1:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



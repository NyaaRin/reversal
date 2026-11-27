// 0x1802260c0  FUN_1802260c0
// size=594 thunk=false
// signature: undefined FUN_1802260c0()
// status: ok


longlong FUN_1802260c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  undefined8 local_70;
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  local_70 = param_3;
  uVar8 = *param_1;
  lVar6 = ((longlong)(param_1[1] - uVar8) >> 4) * -0x3333333333333333;
  if (lVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = ((longlong)(param_1[2] - uVar8) >> 4) * -0x3333333333333333;
  uVar4 = 0x333333333333333 - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar4 = lVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar12 = uVar4;
    if (uVar4 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 < 0x333333333333334) {
      uVar5 = uVar12 * 0x50;
      if (uVar5 == 0) {
        uVar11 = 0;
        puVar10 = auStack_98;
      }
      else if (uVar5 < 0x1000) {
        uVar11 = FUN_1802d8350(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_18022630e;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar6 = (*pcVar2)(5);
          puVar9 = auStack_90;
        }
        uVar11 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar11 - 8) = lVar6;
        puVar10 = puVar9;
      }
      lVar3 = (longlong)(param_2 - uVar8) / 0x50;
      lVar7 = lVar3 * 0x50 + uVar11;
      lVar6 = lVar7 + 0x50;
      *(longlong *)(puVar10 + 0x20) = lVar6;
      *(ulonglong **)(puVar10 + 0x30) = param_1;
      *(ulonglong *)(puVar10 + 0x38) = uVar11;
      *(ulonglong *)(puVar10 + 0x40) = uVar12;
      *(longlong *)(puVar10 + 0x48) = lVar6;
      *(longlong *)(puVar10 + 0x50) = lVar6;
      *(undefined8 *)(puVar10 + -8) = 0x1802261fc;
      FUN_18023cb00(lVar7,*(undefined8 *)(puVar10 + 0x28));
      *(longlong *)(puVar10 + 0x48) = lVar7;
      uVar8 = param_1[1];
      if (param_2 == uVar8) {
        param_2 = *param_1;
        uVar12 = uVar11;
      }
      else {
        uVar8 = *param_1;
        *(undefined8 *)(puVar10 + -8) = 0x180226220;
        FUN_1802328a0(uVar8,param_2,uVar11,param_1);
        *(ulonglong *)(puVar10 + 0x48) = uVar11;
        uVar8 = param_1[1];
        uVar12 = *(ulonglong *)(puVar10 + 0x20);
      }
      *(undefined8 *)(puVar10 + -8) = 0x180226239;
      FUN_1802328a0(param_2,uVar8,uVar12,param_1);
      *(undefined8 *)(puVar10 + 0x38) = 0;
      uVar8 = *param_1;
      if (uVar8 != 0) {
        uVar12 = param_1[1];
        *(ulonglong *)(puVar10 + 0x20) = uVar8;
        while (uVar8 != uVar12) {
          *(undefined8 *)(puVar10 + -8) = 0x180226260;
          FUN_18020e450(uVar8);
          uVar8 = uVar8 + 0x50;
          *(ulonglong *)(puVar10 + 0x20) = uVar8;
        }
        pvVar1 = (void *)*param_1;
        _Memory = pvVar1;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar1) >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar10 = puVar10 + 8;
        }
        *(undefined8 *)(puVar10 + -8) = 0x1802262c4;
        free(_Memory);
      }
      *param_1 = uVar11;
      param_1[1] = uVar4 * 0x50 + uVar11;
      param_1[2] = uVar5 + uVar11;
      return lVar3 * 0x50 + uVar11;
    }
  }
LAB_18022630e:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



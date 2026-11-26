// 0x180225dd0  FUN_180225dd0
// size=616 thunk=false
// signature: undefined FUN_180225dd0()
// status: ok


longlong FUN_180225dd0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
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
  lVar7 = ((longlong)(param_1[1] - uVar8) >> 3) * -0x3333333333333333;
  if (lVar7 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = ((longlong)(param_1[2] - uVar8) >> 3) * -0x3333333333333333;
  uVar5 = 0x666666666666666 - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar5 = lVar7 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar12 = uVar5;
    if (uVar5 <= uVar6) {
      uVar12 = uVar6;
    }
    if (uVar12 < 0x666666666666667) {
      uVar6 = uVar12 * 0x28;
      if (uVar6 == 0) {
        uVar11 = 0;
        puVar10 = auStack_98;
      }
      else if (uVar6 < 0x1000) {
        uVar11 = FUN_1802d8350(uVar6);
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_180226034;
        lVar7 = FUN_1802d8350();
        if (lVar7 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar7 = (*pcVar3)(5);
          puVar9 = auStack_90;
        }
        uVar11 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar11 - 8) = lVar7;
        puVar10 = puVar9;
      }
      lVar4 = (longlong)(param_2 - uVar8) / 0x28;
      lVar1 = uVar11 + lVar4 * 0x28;
      lVar7 = lVar1 + 0x28;
      *(longlong *)(puVar10 + 0x20) = lVar7;
      *(ulonglong **)(puVar10 + 0x30) = param_1;
      *(ulonglong *)(puVar10 + 0x38) = uVar11;
      *(ulonglong *)(puVar10 + 0x40) = uVar12;
      *(longlong *)(puVar10 + 0x48) = lVar7;
      *(longlong *)(puVar10 + 0x50) = lVar7;
      *(longlong *)(puVar10 + 0x58) = lVar1;
      lVar7 = *(longlong *)(puVar10 + 0x28);
      *(undefined8 *)(puVar10 + -8) = 0x180225f15;
      FUN_18016d4c0(lVar1,lVar7);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
      *(longlong *)(puVar10 + 0x48) = lVar1;
      uVar8 = param_1[1];
      if (param_2 == uVar8) {
        param_2 = *param_1;
        uVar12 = uVar11;
      }
      else {
        uVar8 = *param_1;
        *(undefined8 *)(puVar10 + -8) = 0x180225f41;
        FUN_180232800(uVar8,param_2,uVar11,param_1);
        *(ulonglong *)(puVar10 + 0x48) = uVar11;
        uVar8 = param_1[1];
        uVar12 = *(ulonglong *)(puVar10 + 0x20);
      }
      *(undefined8 *)(puVar10 + -8) = 0x180225f5a;
      FUN_180232800(param_2,uVar8,uVar12,param_1);
      *(undefined8 *)(puVar10 + 0x38) = 0;
      uVar8 = *param_1;
      if (uVar8 != 0) {
        uVar12 = param_1[1];
        *(ulonglong *)(puVar10 + 0x20) = uVar8;
        while (uVar8 != uVar12) {
          *(undefined8 *)(puVar10 + -8) = 0x180225f88;
          FUN_18020e450(uVar8);
          uVar8 = uVar8 + 0x28;
          *(ulonglong *)(puVar10 + 0x20) = uVar8;
        }
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar2) >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar10 = puVar10 + 8;
        }
        *(undefined8 *)(puVar10 + -8) = 0x180225ff0;
        free(_Memory);
      }
      *param_1 = uVar11;
      param_1[1] = uVar11 + uVar5 * 0x28;
      param_1[2] = uVar6 + uVar11;
      return uVar11 + lVar4 * 0x28;
    }
  }
LAB_180226034:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



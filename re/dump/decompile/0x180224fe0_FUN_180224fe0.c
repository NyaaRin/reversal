// 0x180224fe0  FUN_180224fe0
// size=645 thunk=false
// signature: undefined FUN_180224fe0()
// status: ok


longlong FUN_180224fe0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  undefined8 local_70;
  
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  local_70 = param_3;
  uVar7 = *param_1;
  lVar6 = ((longlong)(param_1[1] - uVar7) >> 3) * -0x71c71c71c71c71c7;
  if (lVar6 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = ((longlong)(param_1[2] - uVar7) >> 3) * -0x71c71c71c71c71c7;
  uVar4 = 0x38e38e38e38e38e - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar4 = lVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar11 = uVar4;
    if (uVar4 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 < 0x38e38e38e38e38f) {
      uVar5 = uVar11 * 0x48;
      if (uVar5 == 0) {
        uVar10 = 0;
        puVar9 = auStack_98;
      }
      else if (uVar5 < 0x1000) {
        uVar10 = FUN_1802d8350(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_180225261;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar8 = auStack_90;
        }
        uVar10 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar6;
        puVar9 = puVar8;
      }
      lVar6 = (longlong)(param_2 - uVar7) / 0x12 + ((longlong)(param_2 - uVar7) >> 0x3f);
      lVar12 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      lVar1 = uVar10 + lVar12 * 0x48;
      lVar6 = lVar1 + 0x48;
      *(longlong *)(puVar9 + 0x20) = lVar6;
      *(ulonglong **)(puVar9 + 0x30) = param_1;
      *(ulonglong *)(puVar9 + 0x38) = uVar10;
      *(ulonglong *)(puVar9 + 0x40) = uVar11;
      *(longlong *)(puVar9 + 0x48) = lVar6;
      *(longlong *)(puVar9 + 0x50) = lVar6;
      *(longlong *)(puVar9 + 0x58) = lVar1;
      lVar6 = *(longlong *)(puVar9 + 0x28);
      *(undefined8 *)(puVar9 + -8) = 0x18022512c;
      FUN_18016d4c0(lVar1,lVar6);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(puVar9 + -8) = 0x180225142;
      FUN_18016d4c0(lVar1 + 0x28,lVar6 + 0x28);
      *(longlong *)(puVar9 + 0x48) = lVar1;
      uVar7 = param_1[1];
      if (param_2 == uVar7) {
        param_2 = *param_1;
        uVar11 = uVar10;
      }
      else {
        uVar7 = *param_1;
        *(undefined8 *)(puVar9 + -8) = 0x180225167;
        FUN_1802324b0(uVar7,param_2,uVar10,param_1);
        *(ulonglong *)(puVar9 + 0x48) = uVar10;
        uVar7 = param_1[1];
        uVar11 = *(ulonglong *)(puVar9 + 0x20);
      }
      *(undefined8 *)(puVar9 + -8) = 0x180225180;
      FUN_1802324b0(param_2,uVar7,uVar11,param_1);
      *(undefined8 *)(puVar9 + 0x38) = 0;
      uVar7 = *param_1;
      if (uVar7 != 0) {
        uVar11 = param_1[1];
        *(ulonglong *)(puVar9 + 0x20) = uVar7;
        while (uVar7 != uVar11) {
          *(undefined8 *)(puVar9 + -8) = 0x1802251ac;
          FUN_18020e450(uVar7 + 0x28);
          *(undefined8 *)(puVar9 + -8) = 0x1802251b5;
          FUN_18020e450(uVar7);
          uVar7 = uVar7 + 0x48;
          *(ulonglong *)(puVar9 + 0x20) = uVar7;
        }
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar2) >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x18022521d;
        free(_Memory);
      }
      *param_1 = uVar10;
      param_1[1] = uVar10 + uVar4 * 0x48;
      param_1[2] = uVar5 + uVar10;
      return uVar10 + lVar12 * 0x48;
    }
  }
LAB_180225261:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



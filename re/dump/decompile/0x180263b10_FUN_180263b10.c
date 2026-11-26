// 0x180263b10  FUN_180263b10
// size=515 thunk=false
// signature: undefined FUN_180263b10()
// status: ok


undefined8 * FUN_180263b10(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Memory;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar11 = auStack_88;
  puVar10 = auStack_88;
  lVar9 = *param_1;
  lVar6 = param_1[1] - lVar9 >> 5;
  if (lVar6 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = param_1[2] - lVar9 >> 5;
  if (uVar5 <= 0x7ffffffffffffff - (uVar5 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar8 = uVar1;
    if (uVar1 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 < 0x800000000000000) {
      uVar5 = uVar8 * 0x20;
      puVar12 = (undefined8 *)0x0;
      if (uVar5 != 0) {
        if (uVar5 < 0x1000) {
          puVar12 = (undefined8 *)FUN_1802d8350(uVar5);
          puVar11 = auStack_88;
        }
        else {
          if (uVar5 + 0x27 <= uVar5) goto LAB_180263d0f;
          lVar6 = FUN_1802d8350();
          if (lVar6 == 0) {
            pcVar4 = (code *)swi(0x29);
            lVar6 = (*pcVar4)(5);
            puVar10 = auStack_80;
          }
          puVar12 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
          puVar12[-1] = lVar6;
          puVar11 = puVar10;
        }
      }
      lVar6 = param_2 - lVar9 >> 5;
      puVar7 = puVar12 + lVar6 * 4;
      puVar13 = puVar7 + 4;
      *(longlong **)(puVar11 + 0x28) = param_1;
      *(undefined8 **)(puVar11 + 0x30) = puVar12;
      *(ulonglong *)(puVar11 + 0x38) = uVar8;
      *(undefined8 **)(puVar11 + 0x40) = puVar13;
      *(undefined8 **)(puVar11 + 0x48) = puVar13;
      *(undefined8 **)(puVar11 + 0x20) = puVar7;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(undefined8 **)(puVar11 + 0x40) = puVar7;
      lVar9 = param_1[1];
      if (param_2 == lVar9) {
        param_2 = *param_1;
        puVar13 = puVar12;
      }
      else {
        lVar9 = *param_1;
        *(undefined8 *)(puVar11 + -8) = 0x180263c49;
        FUN_180265b90(lVar9,param_2,puVar12,param_1);
        *(undefined8 **)(puVar11 + 0x40) = puVar12;
        lVar9 = param_1[1];
      }
      *(undefined8 *)(puVar11 + -8) = 0x180263c60;
      FUN_180265b90(param_2,lVar9,puVar13,param_1);
      *(undefined8 *)(puVar11 + 0x30) = 0;
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar2 = param_1[1];
        *(longlong *)(puVar11 + 0x20) = lVar9;
        while (lVar9 != lVar2) {
          *(undefined8 *)(puVar11 + -8) = 0x180263c88;
          FUN_18020abf0(lVar9);
          lVar9 = lVar9 + 0x20;
          *(longlong *)(puVar11 + 0x20) = lVar9;
        }
        pvVar3 = (void *)*param_1;
        _Memory = pvVar3;
        if ((0xfff < (param_1[2] - (longlong)pvVar3 & 0xffffffffffffffe0U)) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
          pcVar4 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar4)(5);
          puVar11 = puVar11 + 8;
        }
        *(undefined8 *)(puVar11 + -8) = 0x180263cd3;
        free(_Memory);
      }
      *param_1 = (longlong)puVar12;
      param_1[1] = (longlong)(puVar12 + uVar1 * 4);
      param_1[2] = (longlong)(puVar12 + uVar8 * 4);
      return puVar12 + lVar6 * 4;
    }
  }
LAB_180263d0f:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



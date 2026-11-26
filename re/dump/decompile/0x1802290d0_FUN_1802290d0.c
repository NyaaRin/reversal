// 0x1802290d0  FUN_1802290d0
// size=580 thunk=false
// signature: undefined FUN_1802290d0()
// status: ok


undefined4 * FUN_1802290d0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  void *_Memory;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 *local_68;
  
  puVar10 = auStack_88;
  puVar11 = auStack_88;
  lVar9 = *param_1;
  lVar15 = param_1[1] - lVar9 >> 5;
  local_68 = param_3;
  if (lVar15 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = param_1[2] - lVar9 >> 5;
  if (uVar7 <= 0x7ffffffffffffff - (uVar7 >> 1)) {
    uVar16 = lVar15 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar8 = uVar16;
    if (uVar16 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 < 0x800000000000000) {
      uVar7 = uVar8 * 0x20;
      if (uVar7 == 0) {
        puVar12 = (undefined4 *)0x0;
        puVar11 = auStack_88;
      }
      else {
        if (uVar7 < 0x1000) {
          puVar12 = (undefined4 *)FUN_1802d8350(uVar7);
        }
        else {
          if (uVar7 + 0x27 <= uVar7) goto LAB_180229310;
          lVar15 = FUN_1802d8350();
          if (lVar15 == 0) {
            pcVar6 = (code *)swi(0x29);
            lVar15 = (*pcVar6)(5);
            puVar10 = auStack_80;
          }
          puVar12 = (undefined4 *)(lVar15 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar12 + -2) = lVar15;
          puVar11 = puVar10;
        }
        param_3 = *(undefined4 **)(puVar11 + 0x20);
      }
      lVar15 = param_2 - lVar9 >> 5;
      puVar13 = puVar12 + lVar15 * 8;
      puVar14 = puVar13 + 8;
      *(longlong **)(puVar11 + 0x28) = param_1;
      *(undefined4 **)(puVar11 + 0x30) = puVar12;
      *(ulonglong *)(puVar11 + 0x38) = uVar8;
      *(undefined4 **)(puVar11 + 0x40) = puVar14;
      *(undefined4 **)(puVar11 + 0x48) = puVar14;
      *(undefined4 **)(puVar11 + 0x20) = puVar13;
      *puVar13 = *param_3;
      *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(param_3 + 1);
      *(undefined1 *)((longlong)puVar13 + 5) = *(undefined1 *)((longlong)param_3 + 5);
      uVar1 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_3 + 6) = 0;
      uVar2 = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_3 + 4) = 0;
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = 0;
      *(undefined8 *)(puVar13 + 2) = uVar3;
      *(undefined8 *)(puVar13 + 4) = uVar2;
      *(undefined8 *)(puVar13 + 6) = uVar1;
      *(undefined4 **)(puVar11 + 0x40) = puVar13;
      lVar9 = param_1[1];
      if (param_2 == lVar9) {
        param_2 = *param_1;
        puVar14 = puVar12;
      }
      else {
        lVar9 = *param_1;
        *(undefined8 *)(puVar11 + -8) = 0x180229247;
        FUN_180229020(lVar9,param_2,puVar12,param_1);
        *(undefined4 **)(puVar11 + 0x40) = puVar12;
        lVar9 = param_1[1];
      }
      *(undefined8 *)(puVar11 + -8) = 0x18022925e;
      FUN_180229020(param_2,lVar9,puVar14,param_1);
      *(undefined8 *)(puVar11 + 0x30) = 0;
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar4 = param_1[1];
        *(longlong *)(puVar11 + 0x20) = lVar9;
        while (lVar9 != lVar4) {
          *(undefined8 *)(puVar11 + -8) = 0x180229289;
          FUN_18020c270(lVar9 + 8);
          lVar9 = lVar9 + 0x20;
          *(longlong *)(puVar11 + 0x20) = lVar9;
        }
        pvVar5 = (void *)*param_1;
        _Memory = pvVar5;
        if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xffffffffffffffe0U)) &&
           (_Memory = *(void **)((longlong)pvVar5 + -8),
           0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
          pcVar6 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar6)(5);
          puVar11 = puVar11 + 8;
        }
        *(undefined8 *)(puVar11 + -8) = 0x1802292d4;
        free(_Memory);
      }
      *param_1 = (longlong)puVar12;
      param_1[1] = (longlong)(puVar12 + uVar16 * 8);
      param_1[2] = (longlong)(puVar12 + uVar8 * 8);
      return puVar12 + lVar15 * 8;
    }
  }
LAB_180229310:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



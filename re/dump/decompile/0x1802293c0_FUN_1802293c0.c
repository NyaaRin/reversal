// 0x1802293c0  FUN_1802293c0
// size=704 thunk=false
// signature: undefined FUN_1802293c0()
// status: ok


undefined8 * FUN_1802293c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  void *_Memory;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [88];
  
  puVar15 = auStack_98;
  puVar14 = auStack_98;
  lVar13 = *param_1;
  lVar11 = (param_1[1] - lVar13 >> 4) * -0x3333333333333333;
  if (lVar11 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar9 = (param_1[2] - lVar13 >> 4) * -0x3333333333333333;
  uVar8 = 0x333333333333333 - (uVar9 >> 1);
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    uVar8 = lVar11 + 1;
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar12 = uVar8;
    if (uVar8 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 < 0x333333333333334) {
      uVar9 = uVar12 * 0x50;
      puVar16 = (undefined8 *)0x0;
      if (uVar9 != 0) {
        if (uVar9 < 0x1000) {
          puVar16 = (undefined8 *)FUN_1802d8350(uVar9);
          puVar15 = auStack_98;
        }
        else {
          if (uVar9 + 0x27 <= uVar9) goto LAB_18022967c;
          lVar11 = FUN_1802d8350();
          if (lVar11 == 0) {
            pcVar3 = (code *)swi(0x29);
            lVar11 = (*pcVar3)(5);
            puVar14 = auStack_90;
          }
          puVar16 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
          puVar16[-1] = lVar11;
          puVar15 = puVar14;
        }
      }
      uVar18 = 0;
      lVar11 = (param_2 - lVar13) / 0x50;
      puVar10 = puVar16 + lVar11 * 10;
      puVar17 = puVar10 + 10;
      *(longlong **)(puVar15 + 0x28) = param_1;
      *(undefined8 **)(puVar15 + 0x30) = puVar16;
      *(ulonglong *)(puVar15 + 0x38) = uVar12;
      *(undefined8 **)(puVar15 + 0x40) = puVar17;
      *(undefined8 **)(puVar15 + 0x48) = puVar17;
      *(undefined8 **)(puVar15 + 0x50) = puVar10;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar7 = param_3[1];
      *puVar10 = *param_3;
      puVar10[1] = uVar7;
      uVar7 = param_3[3];
      puVar10[2] = param_3[2];
      puVar10[3] = uVar7;
      param_3[2] = 0;
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar5 = *(undefined4 *)(param_3 + 5);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
      *(undefined4 *)(puVar10 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
      uVar5 = *(undefined4 *)(param_3 + 7);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x3c);
      *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(param_3 + 6);
      *(undefined4 *)((longlong)puVar10 + 0x34) = uVar4;
      *(undefined4 *)(puVar10 + 7) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar6;
      param_3[6] = 0;
      param_3[7] = 0xf;
      *(undefined1 *)(param_3 + 4) = 0;
      puVar10[8] = param_3[8];
      *(undefined1 *)(puVar10 + 9) = *(undefined1 *)(param_3 + 9);
      *(undefined8 **)(puVar15 + 0x40) = puVar10;
      lVar13 = param_1[1];
      if (param_2 == lVar13) {
        param_2 = *param_1;
        puVar17 = puVar16;
      }
      else {
        lVar13 = *param_1;
        *(undefined8 *)(puVar15 + -8) = 0x18022958d;
        FUN_180233270(lVar13,param_2,puVar16,param_1);
        *(undefined8 **)(puVar15 + 0x40) = puVar16;
        lVar13 = param_1[1];
      }
      *(undefined8 *)(puVar15 + -8) = 0x1802295a4;
      FUN_180233270(param_2,lVar13,puVar17,param_1);
      *(undefined8 *)(puVar15 + 0x30) = uVar18;
      lVar13 = *param_1;
      if (lVar13 != 0) {
        lVar1 = param_1[1];
        *(longlong *)(puVar15 + 0x20) = lVar13;
        while (lVar13 != lVar1) {
          *(undefined8 *)(puVar15 + -8) = 0x1802295cc;
          FUN_18020e450(lVar13 + 0x20);
          *(undefined8 *)(puVar15 + -8) = 0x1802295d5;
          FUN_18020e450(lVar13);
          lVar13 = lVar13 + 0x50;
          *(longlong *)(puVar15 + 0x20) = lVar13;
        }
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar15 = puVar15 + 8;
        }
        *(undefined8 *)(puVar15 + -8) = 0x180229639;
        free(_Memory);
      }
      *param_1 = (longlong)puVar16;
      param_1[1] = (longlong)(puVar16 + uVar8 * 10);
      param_1[2] = (longlong)(puVar16 + uVar12 * 10);
      return puVar16 + lVar11 * 10;
    }
  }
LAB_18022967c:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



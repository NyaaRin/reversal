// 0x1802268c0  FUN_1802268c0
// size=699 thunk=false
// signature: undefined FUN_1802268c0()
// status: ok


undefined8 * FUN_1802268c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *_Memory;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
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
  lVar12 = *param_1;
  lVar11 = (param_1[1] - lVar12 >> 3) * -0x71c71c71c71c71c7;
  if (lVar11 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar10 = (param_1[2] - lVar12 >> 3) * -0x71c71c71c71c71c7;
  uVar9 = 0x38e38e38e38e38e - (uVar10 >> 1);
  if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
    uVar9 = lVar11 + 1;
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar13 = uVar9;
    if (uVar9 <= uVar10) {
      uVar13 = uVar10;
    }
    if (uVar13 < 0x38e38e38e38e38f) {
      uVar10 = uVar13 * 0x48;
      puVar16 = (undefined8 *)0x0;
      if (uVar10 != 0) {
        if (uVar10 < 0x1000) {
          puVar16 = (undefined8 *)FUN_1802d8350(uVar10);
          puVar15 = auStack_98;
        }
        else {
          if (uVar10 + 0x27 <= uVar10) goto LAB_180226b77;
          lVar11 = FUN_1802d8350();
          if (lVar11 == 0) {
            pcVar4 = (code *)swi(0x29);
            lVar11 = (*pcVar4)(5);
            puVar14 = auStack_90;
          }
          puVar16 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
          puVar16[-1] = lVar11;
          puVar15 = puVar14;
        }
      }
      uVar18 = 0;
      lVar12 = (param_2 - lVar12) / 0x12 + (param_2 - lVar12 >> 0x3f);
      lVar11 = (lVar12 >> 2) - (lVar12 >> 0x3f);
      puVar1 = puVar16 + lVar11 * 9;
      puVar17 = puVar1 + 9;
      *(longlong **)(puVar15 + 0x28) = param_1;
      *(undefined8 **)(puVar15 + 0x30) = puVar16;
      *(ulonglong *)(puVar15 + 0x38) = uVar13;
      *(undefined8 **)(puVar15 + 0x40) = puVar17;
      *(undefined8 **)(puVar15 + 0x48) = puVar17;
      *(undefined8 **)(puVar15 + 0x50) = puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar8 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar8;
      uVar8 = param_3[3];
      puVar1[2] = param_3[2];
      puVar1[3] = uVar8;
      param_3[2] = 0;
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 4);
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
      uVar6 = *(undefined4 *)(param_3 + 6);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_3 + 5);
      *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar5;
      *(undefined4 *)(puVar1 + 6) = uVar6;
      *(undefined4 *)((longlong)puVar1 + 0x34) = uVar7;
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x3c);
      uVar6 = *(undefined4 *)(param_3 + 8);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x44);
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_3 + 7);
      *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar5;
      *(undefined4 *)(puVar1 + 8) = uVar6;
      *(undefined4 *)((longlong)puVar1 + 0x44) = uVar7;
      param_3[7] = 0;
      param_3[8] = 0xf;
      *(undefined1 *)(param_3 + 5) = 0;
      *(undefined8 **)(puVar15 + 0x40) = puVar1;
      lVar12 = param_1[1];
      if (param_2 == lVar12) {
        param_2 = *param_1;
        puVar17 = puVar16;
      }
      else {
        lVar12 = *param_1;
        *(undefined8 *)(puVar15 + -8) = 0x180226a85;
        FUN_180232a30(lVar12,param_2,puVar16,param_1);
        *(undefined8 **)(puVar15 + 0x40) = puVar16;
        lVar12 = param_1[1];
      }
      *(undefined8 *)(puVar15 + -8) = 0x180226a9c;
      FUN_180232a30(param_2,lVar12,puVar17,param_1);
      *(undefined8 *)(puVar15 + 0x30) = uVar18;
      lVar12 = *param_1;
      if (lVar12 != 0) {
        lVar2 = param_1[1];
        *(longlong *)(puVar15 + 0x20) = lVar12;
        while (lVar12 != lVar2) {
          *(undefined8 *)(puVar15 + -8) = 0x180226ac9;
          FUN_18020e450(lVar12 + 0x28);
          *(undefined8 *)(puVar15 + -8) = 0x180226ad2;
          FUN_18020e450(lVar12);
          lVar12 = lVar12 + 0x48;
          *(longlong *)(puVar15 + 0x20) = lVar12;
        }
        pvVar3 = (void *)*param_1;
        _Memory = pvVar3;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar15 = puVar15 + 8;
        }
        *(undefined8 *)(puVar15 + -8) = 0x180226b3a;
        free(_Memory);
      }
      *param_1 = (longlong)puVar16;
      param_1[1] = (longlong)(puVar16 + uVar9 * 9);
      param_1[2] = (longlong)(puVar16 + uVar13 * 9);
      return puVar16 + lVar11 * 9;
    }
  }
LAB_180226b77:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



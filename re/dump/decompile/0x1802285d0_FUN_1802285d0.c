// 0x1802285d0  FUN_1802285d0
// size=630 thunk=false
// signature: undefined FUN_1802285d0()
// status: ok


undefined8 * FUN_1802285d0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Memory;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar14 = auStack_88;
  puVar13 = auStack_88;
  lVar12 = *param_1;
  lVar10 = (param_1[1] - lVar12 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar9 = (param_1[2] - lVar12 >> 3) * -0x3333333333333333;
  uVar8 = 0x666666666666666 - (uVar9 >> 1);
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    uVar8 = lVar10 + 1;
    uVar9 = uVar9 + (uVar9 >> 1);
    uVar11 = uVar8;
    if (uVar8 <= uVar9) {
      uVar11 = uVar9;
    }
    if (uVar11 < 0x666666666666667) {
      uVar9 = uVar11 * 0x28;
      puVar15 = (undefined8 *)0x0;
      if (uVar9 != 0) {
        if (uVar9 < 0x1000) {
          puVar15 = (undefined8 *)FUN_1802d8350(uVar9);
          puVar14 = auStack_88;
        }
        else {
          if (uVar9 + 0x27 <= uVar9) goto LAB_180228842;
          lVar10 = FUN_1802d8350();
          if (lVar10 == 0) {
            pcVar4 = (code *)swi(0x29);
            lVar10 = (*pcVar4)(5);
            puVar13 = auStack_80;
          }
          puVar15 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
          puVar15[-1] = lVar10;
          puVar14 = puVar13;
        }
      }
      uVar17 = 0;
      lVar10 = (param_2 - lVar12) / 0x28;
      puVar1 = puVar15 + lVar10 * 5;
      puVar16 = puVar1 + 5;
      *(longlong **)(puVar14 + 0x28) = param_1;
      *(undefined8 **)(puVar14 + 0x30) = puVar15;
      *(ulonglong *)(puVar14 + 0x38) = uVar11;
      *(undefined8 **)(puVar14 + 0x40) = puVar16;
      *(undefined8 **)(puVar14 + 0x48) = puVar16;
      *(undefined8 **)(puVar14 + 0x20) = puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *(undefined4 *)puVar1 = *param_3;
      *(undefined4 *)((longlong)puVar1 + 4) = uVar5;
      *(undefined4 *)(puVar1 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uVar7;
      uVar5 = param_3[5];
      uVar6 = param_3[6];
      uVar7 = param_3[7];
      *(undefined4 *)(puVar1 + 2) = param_3[4];
      *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
      *(undefined4 *)(puVar1 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar7;
      *(undefined8 *)(param_3 + 4) = 0;
      *(undefined8 *)(param_3 + 6) = 0xf;
      *(undefined1 *)param_3 = 0;
      *(undefined4 *)(puVar1 + 4) = param_3[8];
      *(undefined8 **)(puVar14 + 0x40) = puVar1;
      lVar12 = param_1[1];
      if (param_2 == lVar12) {
        param_2 = *param_1;
        puVar16 = puVar15;
      }
      else {
        lVar12 = *param_1;
        *(undefined8 *)(puVar14 + -8) = 0x180228763;
        FUN_180232800(lVar12,param_2,puVar15,param_1);
        *(undefined8 **)(puVar14 + 0x40) = puVar15;
        lVar12 = param_1[1];
      }
      *(undefined8 *)(puVar14 + -8) = 0x18022877a;
      FUN_180232800(param_2,lVar12,puVar16,param_1);
      *(undefined8 *)(puVar14 + 0x30) = uVar17;
      lVar12 = *param_1;
      if (lVar12 != 0) {
        lVar2 = param_1[1];
        *(longlong *)(puVar14 + 0x20) = lVar12;
        while (lVar12 != lVar2) {
          *(undefined8 *)(puVar14 + -8) = 0x18022879d;
          FUN_18020e450(lVar12);
          lVar12 = lVar12 + 0x28;
          *(longlong *)(puVar14 + 0x20) = lVar12;
        }
        pvVar3 = (void *)*param_1;
        _Memory = pvVar3;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar14 = puVar14 + 8;
        }
        *(undefined8 *)(puVar14 + -8) = 0x180228805;
        free(_Memory);
      }
      *param_1 = (longlong)puVar15;
      param_1[1] = (longlong)(puVar15 + uVar8 * 5);
      param_1[2] = (longlong)(puVar15 + uVar11 * 5);
      return puVar15 + lVar10 * 5;
    }
  }
LAB_180228842:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



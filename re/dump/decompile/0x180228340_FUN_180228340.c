// 0x180228340  FUN_180228340
// size=646 thunk=false
// signature: undefined FUN_180228340()
// status: ok


undefined8 * FUN_180228340(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  void *_Memory;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
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
  lVar11 = *param_1;
  lVar10 = (param_1[1] - lVar11 >> 4) * -0x5555555555555555;
  if (lVar10 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar8 = (param_1[2] - lVar11 >> 4) * -0x5555555555555555;
  uVar7 = 0x555555555555555 - (uVar8 >> 1);
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar7 = lVar10 + 1;
    uVar8 = uVar8 + (uVar8 >> 1);
    uVar12 = uVar7;
    if (uVar7 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 < 0x555555555555556) {
      uVar8 = uVar12 * 0x30;
      puVar15 = (undefined8 *)0x0;
      if (uVar8 != 0) {
        if (uVar8 < 0x1000) {
          puVar15 = (undefined8 *)FUN_1802d8350(uVar8);
          puVar14 = auStack_88;
        }
        else {
          if (uVar8 + 0x27 <= uVar8) goto LAB_1802285c2;
          lVar10 = FUN_1802d8350();
          if (lVar10 == 0) {
            pcVar3 = (code *)swi(0x29);
            lVar10 = (*pcVar3)(5);
            puVar13 = auStack_80;
          }
          puVar15 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
          puVar15[-1] = lVar10;
          puVar14 = puVar13;
        }
      }
      uVar17 = 0;
      lVar11 = (param_2 - lVar11) / 6 + (param_2 - lVar11 >> 0x3f);
      lVar10 = (lVar11 >> 3) - (lVar11 >> 0x3f);
      puVar9 = puVar15 + lVar10 * 6;
      puVar16 = puVar9 + 6;
      *(longlong **)(puVar14 + 0x28) = param_1;
      *(undefined8 **)(puVar14 + 0x30) = puVar15;
      *(ulonglong *)(puVar14 + 0x38) = uVar12;
      *(undefined8 **)(puVar14 + 0x40) = puVar16;
      *(undefined8 **)(puVar14 + 0x48) = puVar16;
      *(undefined8 **)(puVar14 + 0x20) = puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)puVar9 = *param_3;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar4;
      *(undefined4 *)(puVar9 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar6;
      uVar4 = param_3[5];
      uVar5 = param_3[6];
      uVar6 = param_3[7];
      *(undefined4 *)(puVar9 + 2) = param_3[4];
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar4;
      *(undefined4 *)(puVar9 + 3) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar6;
      *(undefined8 *)(param_3 + 4) = 0;
      *(undefined8 *)(param_3 + 6) = 0xf;
      *(undefined1 *)param_3 = 0;
      *(undefined4 *)(puVar9 + 4) = param_3[8];
      *(undefined4 *)((longlong)puVar9 + 0x24) = param_3[9];
      *(undefined1 *)(puVar9 + 5) = *(undefined1 *)(param_3 + 10);
      *(undefined8 **)(puVar14 + 0x40) = puVar9;
      lVar11 = param_1[1];
      if (param_2 == lVar11) {
        param_2 = *param_1;
        puVar16 = puVar15;
      }
      else {
        lVar11 = *param_1;
        *(undefined8 *)(puVar14 + -8) = 0x1802284e1;
        FUN_180232d80(lVar11,param_2,puVar15,param_1);
        *(undefined8 **)(puVar14 + 0x40) = puVar15;
        lVar11 = param_1[1];
      }
      *(undefined8 *)(puVar14 + -8) = 0x1802284f8;
      FUN_180232d80(param_2,lVar11,puVar16,param_1);
      *(undefined8 *)(puVar14 + 0x30) = uVar17;
      lVar11 = *param_1;
      if (lVar11 != 0) {
        lVar1 = param_1[1];
        *(longlong *)(puVar14 + 0x20) = lVar11;
        while (lVar11 != lVar1) {
          *(undefined8 *)(puVar14 + -8) = 0x18022851b;
          FUN_18020e450(lVar11);
          lVar11 = lVar11 + 0x30;
          *(longlong *)(puVar14 + 0x20) = lVar11;
        }
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar14 = puVar14 + 8;
        }
        *(undefined8 *)(puVar14 + -8) = 0x18022857f;
        free(_Memory);
      }
      *param_1 = (longlong)puVar15;
      param_1[1] = (longlong)(puVar15 + uVar7 * 6);
      param_1[2] = (longlong)(puVar15 + uVar12 * 6);
      return puVar15 + lVar10 * 6;
    }
  }
LAB_1802285c2:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



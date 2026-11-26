// 0x180224570  FUN_180224570
// size=674 thunk=false
// signature: undefined FUN_180224570()
// status: ok


undefined4 * FUN_180224570(undefined8 param_1,void *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar13 = auStack_88;
  puVar12 = auStack_88;
  lVar9 = ((longlong)DAT_1803edc28 - (longlong)DAT_1803edc20 >> 3) * -0x3333333333333333;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = ((longlong)DAT_1803edc30 - (longlong)DAT_1803edc20 >> 3) * -0x3333333333333333;
  uVar6 = 0x666666666666666 - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    lVar14 = (longlong)param_2 - (longlong)DAT_1803edc20;
    uVar6 = lVar9 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar10 = uVar6;
    if (uVar6 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 < 0x666666666666667) {
      uVar7 = uVar10 * 0x28;
      puVar15 = (undefined4 *)0x0;
      if (uVar7 != 0) {
        if (uVar7 < 0x1000) {
          puVar15 = (undefined4 *)FUN_1802d8350(uVar7);
          puVar13 = auStack_88;
        }
        else {
          if (uVar7 + 0x27 <= uVar7) goto LAB_18022480e;
          lVar9 = FUN_1802d8350();
          if (lVar9 == 0) {
            pcVar2 = (code *)swi(0x29);
            lVar9 = (*pcVar2)(5);
            puVar12 = auStack_80;
          }
          puVar15 = (undefined4 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar15 + -2) = lVar9;
          puVar13 = puVar12;
        }
      }
      puVar1 = puVar15 + (lVar14 / 0x28) * 10;
      puVar16 = puVar1 + 10;
      *(undefined4 ***)(puVar13 + 0x28) = &DAT_1803edc20;
      *(undefined4 **)(puVar13 + 0x30) = puVar15;
      *(ulonglong *)(puVar13 + 0x38) = uVar10;
      *(undefined4 **)(puVar13 + 0x40) = puVar16;
      *(undefined4 **)(puVar13 + 0x48) = puVar16;
      *(undefined4 **)(puVar13 + 0x20) = puVar1;
      *puVar1 = *param_3;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      uVar3 = param_3[3];
      uVar4 = param_3[4];
      uVar5 = param_3[5];
      puVar1[2] = param_3[2];
      puVar1[3] = uVar3;
      puVar1[4] = uVar4;
      puVar1[5] = uVar5;
      uVar3 = param_3[7];
      uVar4 = param_3[8];
      uVar5 = param_3[9];
      puVar1[6] = param_3[6];
      puVar1[7] = uVar3;
      puVar1[8] = uVar4;
      puVar1[9] = uVar5;
      *(undefined8 *)(param_3 + 6) = 0;
      *(undefined8 *)(param_3 + 8) = 0xf;
      *(undefined1 *)(param_3 + 2) = 0;
      *(undefined4 **)(puVar13 + 0x40) = puVar1;
      pvVar8 = DAT_1803edc20;
      puVar17 = puVar15;
      if (param_2 != DAT_1803edc28) {
        *(undefined8 *)(puVar13 + -8) = 0x18022471a;
        FUN_180232240(DAT_1803edc20,param_2,puVar15);
        *(undefined4 **)(puVar13 + 0x40) = puVar15;
        pvVar8 = param_2;
        puVar17 = puVar16;
      }
      *(undefined8 *)(puVar13 + -8) = 0x180224731;
      FUN_180232240(pvVar8,DAT_1803edc28,puVar17);
      pvVar8 = DAT_1803edc28;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      if (DAT_1803edc20 != (void *)0x0) {
        *(undefined4 **)(puVar13 + 0x20) = DAT_1803edc20;
        pvVar11 = DAT_1803edc20;
        while (pvVar11 != pvVar8) {
          *(undefined8 *)(puVar13 + -8) = 0x180224760;
          FUN_18020e450((longlong)pvVar11 + 8);
          pvVar11 = (void *)((longlong)pvVar11 + 0x28);
          *(void **)(puVar13 + 0x20) = pvVar11;
        }
        pvVar8 = DAT_1803edc20;
        if (0xfff < (ulonglong)(((longlong)DAT_1803edc30 - (longlong)DAT_1803edc20 >> 3) * 8)) {
          pvVar8 = *(void **)((longlong)DAT_1803edc20 + -8);
          pvVar11 = (void *)((longlong)DAT_1803edc20 + (-8 - (longlong)pvVar8));
          if ((void *)0x1f < pvVar11) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar13 = puVar13 + 8;
            pvVar8 = pvVar11;
          }
        }
        *(undefined8 *)(puVar13 + -8) = 0x1802247cc;
        free(pvVar8);
      }
      DAT_1803edc20 = puVar15;
      DAT_1803edc28 = puVar15 + uVar6 * 10;
      DAT_1803edc30 = puVar15 + uVar10 * 10;
      return puVar1;
    }
  }
LAB_18022480e:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



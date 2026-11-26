// 0x180226b80  FUN_180226b80
// size=684 thunk=false
// signature: undefined FUN_180226b80()
// status: ok


undefined4 * FUN_180226b80(undefined8 param_1,void *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar12 = auStack_88;
  puVar11 = auStack_88;
  lVar8 = ((longlong)DAT_1803eb430 - (longlong)DAT_1803eb428 >> 4) * -0x5555555555555555;
  if (lVar8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = ((longlong)DAT_1803eb438 - (longlong)DAT_1803eb428 >> 4) * -0x5555555555555555;
  uVar5 = 0x555555555555555 - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    lVar16 = (longlong)param_2 - (longlong)DAT_1803eb428;
    uVar5 = lVar8 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar9 = uVar5;
    if (uVar5 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 < 0x555555555555556) {
      uVar6 = uVar9 * 0x30;
      puVar13 = (undefined4 *)0x0;
      if (uVar6 != 0) {
        if (uVar6 < 0x1000) {
          puVar13 = (undefined4 *)FUN_1802d8350(uVar6);
          puVar12 = auStack_88;
        }
        else {
          if (uVar6 + 0x27 <= uVar6) goto LAB_180226e28;
          lVar8 = FUN_1802d8350();
          if (lVar8 == 0) {
            pcVar1 = (code *)swi(0x29);
            lVar8 = (*pcVar1)(5);
            puVar11 = auStack_80;
          }
          puVar13 = (undefined4 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar13 + -2) = lVar8;
          puVar12 = puVar11;
        }
      }
      puVar17 = puVar13 + (lVar16 / 0x30) * 0xc;
      puVar14 = puVar17 + 0xc;
      *(undefined4 ***)(puVar12 + 0x28) = &DAT_1803eb428;
      *(undefined4 **)(puVar12 + 0x30) = puVar13;
      *(ulonglong *)(puVar12 + 0x38) = uVar9;
      *(undefined4 **)(puVar12 + 0x40) = puVar14;
      *(undefined4 **)(puVar12 + 0x48) = puVar14;
      *(undefined4 **)(puVar12 + 0x20) = puVar17;
      *puVar17 = *param_3;
      *(undefined8 *)(puVar17 + 2) = 0;
      *(undefined8 *)(puVar17 + 4) = 0;
      *(undefined8 *)(puVar17 + 6) = 0;
      *(undefined8 *)(puVar17 + 8) = 0;
      uVar2 = param_3[3];
      uVar3 = param_3[4];
      uVar4 = param_3[5];
      puVar17[2] = param_3[2];
      puVar17[3] = uVar2;
      puVar17[4] = uVar3;
      puVar17[5] = uVar4;
      uVar2 = param_3[7];
      uVar3 = param_3[8];
      uVar4 = param_3[9];
      puVar17[6] = param_3[6];
      puVar17[7] = uVar2;
      puVar17[8] = uVar3;
      puVar17[9] = uVar4;
      *(undefined8 *)(param_3 + 6) = 0;
      *(undefined8 *)(param_3 + 8) = 0xf;
      *(undefined1 *)(param_3 + 2) = 0;
      puVar17[10] = param_3[10];
      *(undefined4 **)(puVar12 + 0x40) = puVar17;
      pvVar7 = DAT_1803eb428;
      puVar15 = puVar13;
      if (param_2 != DAT_1803eb430) {
        *(undefined8 *)(puVar12 + -8) = 0x180226d35;
        FUN_180232980(DAT_1803eb428,param_2,puVar13);
        *(undefined4 **)(puVar12 + 0x40) = puVar13;
        pvVar7 = param_2;
        puVar15 = puVar14;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180226d4c;
      FUN_180232980(pvVar7,DAT_1803eb430,puVar15);
      pvVar7 = DAT_1803eb430;
      *(undefined8 *)(puVar12 + 0x30) = 0;
      if (DAT_1803eb428 != (void *)0x0) {
        *(undefined4 **)(puVar12 + 0x20) = DAT_1803eb428;
        pvVar10 = DAT_1803eb428;
        while (pvVar10 != pvVar7) {
          *(undefined8 *)(puVar12 + -8) = 0x180226d7b;
          FUN_18020e450((longlong)pvVar10 + 8);
          pvVar10 = (void *)((longlong)pvVar10 + 0x30);
          *(void **)(puVar12 + 0x20) = pvVar10;
        }
        pvVar7 = DAT_1803eb428;
        if (0xfff < (ulonglong)(((longlong)DAT_1803eb438 - (longlong)DAT_1803eb428 >> 4) << 4)) {
          pvVar7 = *(void **)((longlong)DAT_1803eb428 + -8);
          pvVar10 = (void *)((longlong)DAT_1803eb428 + (-8 - (longlong)pvVar7));
          if ((void *)0x1f < pvVar10) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar12 = puVar12 + 8;
            pvVar7 = pvVar10;
          }
        }
        *(undefined8 *)(puVar12 + -8) = 0x180226de3;
        free(pvVar7);
      }
      DAT_1803eb428 = puVar13;
      DAT_1803eb430 = puVar13 + uVar5 * 0xc;
      DAT_1803eb438 = puVar13 + uVar9 * 0xc;
      return puVar17;
    }
  }
LAB_180226e28:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



// 0x180224a50  FUN_180224a50
// size=741 thunk=false
// signature: undefined FUN_180224a50()
// status: ok


undefined4 * FUN_180224a50(undefined8 param_1,void *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *pvVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [88];
  
  puVar14 = auStack_98;
  puVar13 = auStack_98;
  lVar10 = ((longlong)DAT_1803e9ee0 - (longlong)DAT_1803e9ed8 >> 3) * -0x71c71c71c71c71c7;
  if (lVar10 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar8 = ((longlong)DAT_1803e9ee8 - (longlong)DAT_1803e9ed8 >> 3) * -0x71c71c71c71c71c7;
  uVar7 = 0x38e38e38e38e38e - (uVar8 >> 1);
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    lVar15 = (longlong)param_2 - (longlong)DAT_1803e9ed8;
    uVar7 = lVar10 + 1;
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar7;
    if (uVar7 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 < 0x38e38e38e38e38f) {
      uVar8 = uVar11 * 0x48;
      puVar16 = (undefined4 *)0x0;
      if (uVar8 != 0) {
        if (uVar8 < 0x1000) {
          puVar16 = (undefined4 *)FUN_1802d8350(uVar8);
          puVar14 = auStack_98;
        }
        else {
          if (uVar8 + 0x27 <= uVar8) goto LAB_180224d31;
          lVar10 = FUN_1802d8350();
          if (lVar10 == 0) {
            pcVar2 = (code *)swi(0x29);
            lVar10 = (*pcVar2)(5);
            puVar13 = auStack_90;
          }
          puVar16 = (undefined4 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar16 + -2) = lVar10;
          puVar14 = puVar13;
        }
      }
      puVar1 = puVar16 + (lVar15 / 0x48) * 0x12;
      puVar17 = puVar1 + 0x12;
      *(undefined4 ***)(puVar14 + 0x28) = &DAT_1803e9ed8;
      *(undefined4 **)(puVar14 + 0x30) = puVar16;
      *(ulonglong *)(puVar14 + 0x38) = uVar11;
      *(undefined4 **)(puVar14 + 0x40) = puVar17;
      *(undefined4 **)(puVar14 + 0x48) = puVar17;
      *(undefined4 **)(puVar14 + 0x50) = puVar1;
      *puVar1 = *param_3;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      uVar6 = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(puVar1 + 4) = uVar6;
      uVar6 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(puVar1 + 8) = uVar6;
      *(undefined8 *)(param_3 + 6) = 0;
      *(undefined8 *)(param_3 + 8) = 0xf;
      *(undefined1 *)(param_3 + 2) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      uVar3 = param_3[0xb];
      uVar4 = param_3[0xc];
      uVar5 = param_3[0xd];
      puVar1[10] = param_3[10];
      puVar1[0xb] = uVar3;
      puVar1[0xc] = uVar4;
      puVar1[0xd] = uVar5;
      uVar3 = param_3[0xf];
      uVar4 = param_3[0x10];
      uVar5 = param_3[0x11];
      puVar1[0xe] = param_3[0xe];
      puVar1[0xf] = uVar3;
      puVar1[0x10] = uVar4;
      puVar1[0x11] = uVar5;
      *(undefined8 *)(param_3 + 0xe) = 0;
      *(undefined8 *)(param_3 + 0x10) = 0xf;
      *(undefined1 *)(param_3 + 10) = 0;
      *(undefined4 **)(puVar14 + 0x40) = puVar1;
      pvVar9 = DAT_1803e9ed8;
      puVar18 = puVar16;
      if (param_2 != DAT_1803e9ee0) {
        *(undefined8 *)(puVar14 + -8) = 0x180224c31;
        FUN_1802322f0(DAT_1803e9ed8,param_2,puVar16);
        *(undefined4 **)(puVar14 + 0x40) = puVar16;
        pvVar9 = param_2;
        puVar18 = puVar17;
      }
      *(undefined8 *)(puVar14 + -8) = 0x180224c48;
      FUN_1802322f0(pvVar9,DAT_1803e9ee0,puVar18);
      pvVar9 = DAT_1803e9ee0;
      *(undefined8 *)(puVar14 + 0x30) = 0;
      if (DAT_1803e9ed8 != (void *)0x0) {
        *(undefined4 **)(puVar14 + 0x20) = DAT_1803e9ed8;
        pvVar12 = DAT_1803e9ed8;
        while (pvVar12 != pvVar9) {
          *(undefined8 *)(puVar14 + -8) = 0x180224c79;
          FUN_18020e450((longlong)pvVar12 + 0x28);
          *(undefined8 *)(puVar14 + -8) = 0x180224c83;
          FUN_18020e450((longlong)pvVar12 + 8);
          pvVar12 = (void *)((longlong)pvVar12 + 0x48);
          *(void **)(puVar14 + 0x20) = pvVar12;
        }
        pvVar9 = DAT_1803e9ed8;
        if (0xfff < (ulonglong)(((longlong)DAT_1803e9ee8 - (longlong)DAT_1803e9ed8 >> 3) * 8)) {
          pvVar9 = *(void **)((longlong)DAT_1803e9ed8 + -8);
          pvVar12 = (void *)((longlong)DAT_1803e9ed8 + (-8 - (longlong)pvVar9));
          if ((void *)0x1f < pvVar12) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar14 = puVar14 + 8;
            pvVar9 = pvVar12;
          }
        }
        *(undefined8 *)(puVar14 + -8) = 0x180224cef;
        free(pvVar9);
      }
      DAT_1803e9ed8 = puVar16;
      DAT_1803e9ee0 = puVar16 + uVar7 * 0x12;
      DAT_1803e9ee8 = puVar16 + uVar11 * 0x12;
      return puVar1;
    }
  }
LAB_180224d31:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



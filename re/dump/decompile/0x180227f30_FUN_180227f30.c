// 0x180227f30  FUN_180227f30
// size=666 thunk=false
// signature: undefined FUN_180227f30()
// status: ok


undefined8 * FUN_180227f30(undefined8 param_1,void *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *pvVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar14 = auStack_88;
  lVar16 = (longlong)DAT_1803eb3b8 - (longlong)DAT_1803eb3b0 >> 6;
  uVar12 = 0x3ffffffffffffff;
  if (lVar16 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar20 = (longlong)param_2 - (longlong)DAT_1803eb3b0;
  uVar17 = lVar16 + 1;
  uVar9 = DAT_1803eb3c0 - (longlong)DAT_1803eb3b0 >> 6;
  puVar18 = (undefined8 *)0x0;
  if (0x3ffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar9 = 0xffffffffffffffc0;
    uVar10 = 0xffffffffffffffe7;
  }
  else {
    uVar9 = uVar9 + (uVar9 >> 1);
    uVar12 = uVar17;
    if (uVar17 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x3ffffffffffffff < uVar12) {
LAB_1802281c6:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar9 = uVar12 * 0x40;
    puVar15 = auStack_88;
    if (uVar9 == 0) goto LAB_18022801b;
    if (uVar9 < 0x1000) {
      puVar18 = (undefined8 *)FUN_1802d8350(uVar9);
      puVar15 = auStack_88;
      goto LAB_18022801b;
    }
    uVar10 = uVar9 + 0x27;
    if (uVar10 <= uVar9) goto LAB_1802281c6;
  }
  lVar16 = FUN_1802d8350(uVar10);
  if (lVar16 == 0) {
    pcVar5 = (code *)swi(0x29);
    lVar16 = (*pcVar5)(5);
    puVar14 = auStack_80;
  }
  puVar18 = (undefined8 *)(lVar16 + 0x27U & 0xffffffffffffffe0);
  puVar18[-1] = lVar16;
  puVar15 = puVar14;
LAB_18022801b:
  puVar1 = (undefined8 *)((uVar20 & 0xffffffffffffffc0) + (longlong)puVar18);
  *(undefined8 ***)(puVar15 + 0x20) = &DAT_1803eb3b0;
  *(undefined8 **)(puVar15 + 0x28) = puVar18;
  *(ulonglong *)(puVar15 + 0x30) = uVar12;
  *(undefined8 **)(puVar15 + 0x38) = puVar1 + 8;
  *(undefined8 **)(puVar15 + 0x40) = puVar1 + 8;
  *(undefined8 **)(puVar15 + 0x48) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined4 *)puVar1 = *param_3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar6;
  *(undefined4 *)(puVar1 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar8;
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(puVar1 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar6;
  *(undefined4 *)(puVar1 + 3) = uVar7;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar8;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 4) = param_3[8];
  *(undefined4 *)((longlong)puVar1 + 0x24) = param_3[9];
  uVar2 = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_3 + 0xe) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_3 + 0xc) = 0;
  uVar4 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_3 + 10) = 0;
  puVar1[5] = uVar4;
  puVar1[6] = uVar3;
  puVar1[7] = uVar2;
  *(undefined8 **)(puVar15 + 0x38) = puVar1;
  puVar19 = puVar18;
  pvVar11 = DAT_1803eb3b0;
  if (param_2 != DAT_1803eb3b8) {
    *(undefined8 *)(puVar15 + -8) = 0x1802280ef;
    FUN_180232cb0(DAT_1803eb3b0,param_2,puVar18,&DAT_1803eb3b0);
    *(undefined8 **)(puVar15 + 0x38) = puVar18;
    puVar19 = puVar1 + 8;
    pvVar11 = param_2;
  }
  *(undefined8 *)(puVar15 + -8) = 0x18022810a;
  FUN_180232cb0(pvVar11,DAT_1803eb3b8,puVar19,&DAT_1803eb3b0);
  pvVar13 = DAT_1803eb3b8;
  *(undefined8 *)(puVar15 + 0x28) = 0;
  pvVar11 = DAT_1803eb3b0;
  if (DAT_1803eb3b0 != (void *)0x0) {
    for (; pvVar11 != pvVar13; pvVar11 = (void *)((longlong)pvVar11 + 0x40)) {
      *(undefined8 *)(puVar15 + -8) = 0x180228138;
      FUN_18003abb0(pvVar11);
    }
    pvVar11 = DAT_1803eb3b0;
    if (0xfff < (DAT_1803eb3c0 - (longlong)DAT_1803eb3b0 & 0xffffffffffffffc0U)) {
      pvVar11 = *(void **)((longlong)DAT_1803eb3b0 + -8);
      pvVar13 = (void *)((longlong)DAT_1803eb3b0 + (-8 - (longlong)pvVar11));
      if ((void *)0x1f < pvVar13) {
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar15 = puVar15 + 8;
        pvVar11 = pvVar13;
      }
    }
    *(undefined8 *)(puVar15 + -8) = 0x180228185;
    free(pvVar11);
  }
  DAT_1803eb3b0 = puVar18;
  DAT_1803eb3b8 = puVar18 + uVar17 * 8;
  DAT_1803eb3c0 = uVar9 + (longlong)puVar18;
  return puVar1;
}



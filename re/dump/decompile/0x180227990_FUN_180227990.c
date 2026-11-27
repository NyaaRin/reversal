// 0x180227990  FUN_180227990
// size=643 thunk=false
// signature: undefined FUN_180227990()
// status: ok


undefined8 * FUN_180227990(undefined8 param_1,void *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar11 = auStack_88;
  puVar10 = auStack_88;
  lVar15 = (longlong)DAT_1803eb3d0 - (longlong)DAT_1803eb3c8 >> 6;
  uVar8 = 0x3ffffffffffffff;
  if (lVar15 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar17 = (longlong)param_2 - (longlong)DAT_1803eb3c8;
  uVar16 = lVar15 + 1;
  uVar5 = DAT_1803eb3d8 - (longlong)DAT_1803eb3c8 >> 6;
  puVar12 = (undefined8 *)0x0;
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0xffffffffffffffc0;
    uVar6 = 0xffffffffffffffe7;
  }
  else {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar8 = uVar16;
    if (uVar16 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x3ffffffffffffff < uVar8) {
LAB_180227c0f:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar5 = uVar8 * 0x40;
    if (uVar5 == 0) goto LAB_180227a78;
    if (uVar5 < 0x1000) {
      puVar12 = (undefined8 *)FUN_1802d8350(uVar5);
      puVar11 = auStack_88;
      goto LAB_180227a78;
    }
    uVar6 = uVar5 + 0x27;
    if (uVar6 <= uVar5) goto LAB_180227c0f;
  }
  lVar15 = FUN_1802d8350(uVar6);
  if (lVar15 == 0) {
    pcVar1 = (code *)swi(0x29);
    lVar15 = (*pcVar1)(5);
    puVar10 = auStack_80;
  }
  puVar12 = (undefined8 *)(lVar15 + 0x27U & 0xffffffffffffffe0);
  puVar12[-1] = lVar15;
  puVar11 = puVar10;
LAB_180227a78:
  puVar18 = (undefined8 *)((uVar17 & 0xffffffffffffffc0) + (longlong)puVar12);
  puVar13 = puVar18 + 8;
  *(undefined8 ***)(puVar11 + 0x28) = &DAT_1803eb3c8;
  *(undefined8 **)(puVar11 + 0x30) = puVar12;
  *(ulonglong *)(puVar11 + 0x38) = uVar8;
  *(undefined8 **)(puVar11 + 0x40) = puVar13;
  *(undefined8 **)(puVar11 + 0x48) = puVar13;
  *(undefined8 **)(puVar11 + 0x20) = puVar18;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar18[3] = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)puVar18 = *param_3;
  *(undefined4 *)((longlong)puVar18 + 4) = uVar2;
  *(undefined4 *)(puVar18 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0xc) = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  *(undefined4 *)(puVar18 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar2;
  *(undefined4 *)(puVar18 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar4;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar18[4] = *(undefined8 *)(param_3 + 8);
  puVar18[5] = *(undefined8 *)(param_3 + 10);
  *(undefined4 *)(puVar18 + 6) = param_3[0xc];
  *(undefined4 *)((longlong)puVar18 + 0x34) = param_3[0xd];
  *(undefined1 *)(puVar18 + 7) = *(undefined1 *)(param_3 + 0xe);
  *(undefined8 **)(puVar11 + 0x40) = puVar18;
  pvVar7 = DAT_1803eb3c8;
  puVar14 = puVar12;
  if (param_2 != DAT_1803eb3d0) {
    *(undefined8 *)(puVar11 + -8) = 0x180227b3b;
    FUN_180232bf0(DAT_1803eb3c8,param_2,puVar12);
    *(undefined8 **)(puVar11 + 0x40) = puVar12;
    pvVar7 = param_2;
    puVar14 = puVar13;
  }
  *(undefined8 *)(puVar11 + -8) = 0x180227b52;
  FUN_180232bf0(pvVar7,DAT_1803eb3d0,puVar14);
  pvVar7 = DAT_1803eb3d0;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  if (DAT_1803eb3c8 != (void *)0x0) {
    *(undefined8 **)(puVar11 + 0x20) = DAT_1803eb3c8;
    pvVar9 = DAT_1803eb3c8;
    while (pvVar9 != pvVar7) {
      *(undefined8 *)(puVar11 + -8) = 0x180227b7c;
      FUN_18020e450(pvVar9);
      pvVar9 = (void *)((longlong)pvVar9 + 0x40);
      *(void **)(puVar11 + 0x20) = pvVar9;
    }
    pvVar7 = DAT_1803eb3c8;
    if (0xfff < (DAT_1803eb3d8 - (longlong)DAT_1803eb3c8 & 0xffffffffffffffc0U)) {
      pvVar7 = *(void **)((longlong)DAT_1803eb3c8 + -8);
      pvVar9 = (void *)((longlong)DAT_1803eb3c8 + (-8 - (longlong)pvVar7));
      if ((void *)0x1f < pvVar9) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar11 = puVar11 + 8;
        pvVar7 = pvVar9;
      }
    }
    *(undefined8 *)(puVar11 + -8) = 0x180227bce;
    free(pvVar7);
  }
  DAT_1803eb3c8 = puVar12;
  DAT_1803eb3d0 = puVar12 + uVar16 * 8;
  DAT_1803eb3d8 = uVar5 + (longlong)puVar12;
  return puVar18;
}



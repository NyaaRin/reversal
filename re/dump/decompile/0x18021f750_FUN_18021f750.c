// 0x18021f750  FUN_18021f750
// size=683 thunk=false
// signature: undefined FUN_18021f750()
// status: ok


undefined8 FUN_18021f750(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  code *pcVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80 [9];
  
  puVar10 = auStack_a8;
  puVar11 = auStack_a8;
  local_88 = param_4;
  local_80[1] = param_3;
  lVar12 = (longlong)DAT_1803eb7d8 - (longlong)DAT_1803eb7d0 >> 6;
  uVar8 = 0x3ffffffffffffff;
  if (lVar12 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar15 = (longlong)param_2 - (longlong)DAT_1803eb7d0;
  uVar13 = lVar12 + 1;
  uVar5 = DAT_1803eb7e0 - (longlong)DAT_1803eb7d0 >> 6;
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0xffffffffffffffe7;
    uVar5 = 0xffffffffffffffc0;
  }
  else {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar8 = uVar13;
    if (uVar13 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x3ffffffffffffff < uVar8) {
LAB_18021f9f7:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar5 = uVar8 * 0x40;
    if (uVar5 == 0) {
      puVar14 = (undefined8 *)0x0;
      puVar11 = auStack_a8;
      goto LAB_18021f83b;
    }
    if (uVar5 < 0x1000) {
      puVar14 = (undefined8 *)FUN_1802d8350(uVar5);
      goto LAB_18021f83b;
    }
    uVar6 = uVar5 + 0x27;
    if (uVar6 <= uVar5) goto LAB_18021f9f7;
  }
  lVar12 = FUN_1802d8350(uVar6);
  if (lVar12 == 0) {
    pcVar3 = (code *)swi(0x29);
    lVar12 = (*pcVar3)(5);
    puVar10 = auStack_a0;
  }
  puVar14 = (undefined8 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
  puVar14[-1] = lVar12;
  puVar11 = puVar10;
LAB_18021f83b:
  puVar16 = (undefined8 *)((uVar15 & 0xffffffffffffffc0) + (longlong)puVar14);
  *(undefined8 **)(puVar11 + 0x28) = puVar16;
  puVar1 = puVar16 + 8;
  *(undefined8 ***)(puVar11 + 0x38) = &DAT_1803eb7d0;
  *(undefined8 **)(puVar11 + 0x40) = puVar14;
  *(ulonglong *)(puVar11 + 0x48) = uVar8;
  *(undefined8 **)(puVar11 + 0x50) = puVar1;
  *(undefined8 **)(puVar11 + 0x58) = puVar1;
  *(undefined8 **)(puVar11 + 0x60) = puVar16;
  pcVar2 = (char *)**(undefined8 **)(puVar11 + 0x30);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  *(undefined8 *)(puVar11 + -8) = 0x18021f896;
  sVar4 = strlen(pcVar2);
  *(undefined8 *)(puVar11 + -8) = 0x18021f8a4;
  FUN_18001d080(puVar16,pcVar2,sVar4);
  pcVar2 = (char *)**(undefined8 **)(puVar11 + 0x20);
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  *(undefined8 *)(puVar11 + -8) = 0x18021f8c6;
  sVar4 = strlen(pcVar2);
  *(undefined8 *)(puVar11 + -8) = 0x18021f8d5;
  FUN_18001d080(puVar16 + 4,pcVar2,sVar4);
  *(undefined8 **)(puVar11 + 0x50) = puVar16;
  puVar16 = puVar14;
  pvVar7 = DAT_1803eb7d0;
  if (param_2 != DAT_1803eb7d8) {
    *(undefined8 *)(puVar11 + -8) = 0x18021f90b;
    FUN_18022f730(DAT_1803eb7d0,param_2,puVar14,&DAT_1803eb7d0);
    *(undefined8 **)(puVar11 + 0x50) = puVar14;
    puVar16 = puVar1;
    pvVar7 = param_2;
  }
  *(undefined8 *)(puVar11 + -8) = 0x18021f925;
  FUN_18022f730(pvVar7,DAT_1803eb7d8,puVar16,&DAT_1803eb7d0);
  pvVar7 = DAT_1803eb7d8;
  *(undefined8 *)(puVar11 + 0x40) = 0;
  if (DAT_1803eb7d0 != (void *)0x0) {
    *(undefined8 **)(puVar11 + 0x20) = DAT_1803eb7d0;
    pvVar9 = DAT_1803eb7d0;
    while (pvVar9 != pvVar7) {
      *(undefined8 *)(puVar11 + -8) = 0x18021f959;
      FUN_18020e450((longlong)pvVar9 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x18021f962;
      FUN_18020e450(pvVar9);
      pvVar9 = (void *)((longlong)pvVar9 + 0x40);
      *(void **)(puVar11 + 0x20) = pvVar9;
    }
    pvVar7 = DAT_1803eb7d0;
    if (0xfff < (DAT_1803eb7e0 - (longlong)DAT_1803eb7d0 & 0xffffffffffffffc0U)) {
      pvVar7 = *(void **)((longlong)DAT_1803eb7d0 + -8);
      pvVar9 = (void *)((longlong)DAT_1803eb7d0 + (-8 - (longlong)pvVar7));
      if ((void *)0x1f < pvVar9) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar11 = puVar11 + 8;
        pvVar7 = pvVar9;
      }
    }
    *(undefined8 *)(puVar11 + -8) = 0x18021f9b4;
    free(pvVar7);
  }
  DAT_1803eb7d0 = puVar14;
  DAT_1803eb7d8 = puVar14 + uVar13 * 8;
  DAT_1803eb7e0 = uVar5 + (longlong)puVar14;
  return *(undefined8 *)(puVar11 + 0x28);
}



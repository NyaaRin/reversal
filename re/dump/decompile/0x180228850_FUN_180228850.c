// 0x180228850  FUN_180228850
// size=861 thunk=false
// signature: undefined FUN_180228850()
// status: ok


ulonglong FUN_180228850(undefined8 param_1,void *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 *local_88;
  longlong local_80;
  longlong lStack_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  
  puVar8 = auStack_d8;
  puVar9 = auStack_d8;
  lVar3 = ((longlong)DAT_1803fcc58 - (longlong)DAT_1803fcc50 >> 3) * -0x79435e50d79435e5;
  uVar10 = 0x1af286bca1af286;
  if (lVar3 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  lVar11 = (longlong)param_2 - (longlong)DAT_1803fcc50;
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_1803fcc60 - (longlong)DAT_1803fcc50 >> 3) * -0x79435e50d79435e5;
  uVar4 = 0x1af286bca1af286 - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x1af286bca1af286 < uVar10) {
LAB_180228ba9:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar5 = uVar10 * 0x98;
    if (uVar5 == 0) {
      uVar4 = 0;
      puVar9 = auStack_d8;
      goto LAB_180228951;
    }
    if (uVar5 < 0x1000) {
      uVar4 = FUN_1802d8350(uVar5);
      goto LAB_180228951;
    }
    uVar4 = uVar5 + 0x27;
    if (uVar4 <= uVar5) goto LAB_180228ba9;
  }
  else {
    uVar4 = 0xffffffffffffffb7;
    uVar5 = 0xffffffffffffff90;
  }
  lVar3 = FUN_1802d8350(uVar4);
  if (lVar3 == 0) {
    pcVar2 = (code *)swi(0x29);
    lVar3 = (*pcVar2)(5);
    puVar8 = auStack_d0;
  }
  uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar4 - 8) = lVar3;
  puVar9 = puVar8;
LAB_180228951:
  local_b8 = (lVar11 / 0x98) * 0x98 + uVar4;
  lVar3 = local_b8 + 0x98;
  local_68 = &DAT_1803fcc50;
  *(undefined8 *)(puVar9 + -8) = 0x1802289a7;
  local_60 = uVar4;
  local_58 = uVar10;
  local_50 = lVar3;
  local_48 = lVar3;
  FUN_18023a210(local_b8,param_3);
  uVar10 = local_b8;
  pvVar6 = DAT_1803fcc58;
  local_50 = local_b8;
  if (param_2 == DAT_1803fcc58) {
    local_a0 = &DAT_1803fcc50;
    uVar7 = uVar4;
    local_b0 = uVar4;
    for (pvVar12 = DAT_1803fcc50; uStack_a8 = uVar7, pvVar12 != pvVar6;
        pvVar12 = (void *)((longlong)pvVar12 + 0x98)) {
      *(undefined8 *)(puVar9 + -8) = 0x1802289fb;
      FUN_18023a210(uVar7,pvVar12);
      uVar7 = uVar7 + 0x98;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180228a21;
    local_b0 = uVar7;
    FUN_180218ad0(uVar7,uVar7);
  }
  else {
    local_88 = &DAT_1803fcc50;
    uVar10 = uVar4;
    local_98 = uVar4;
    for (pvVar6 = DAT_1803fcc50; uStack_90 = uVar10, pvVar6 != param_2;
        pvVar6 = (void *)((longlong)pvVar6 + 0x98)) {
      *(undefined8 *)(puVar9 + -8) = 0x180228a5b;
      FUN_18023a210(uVar10,pvVar6);
      uVar10 = uVar10 + 0x98;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180228a81;
    local_98 = uVar10;
    FUN_180218ad0(uVar10,uVar10);
    pvVar6 = DAT_1803fcc58;
    local_70 = &DAT_1803fcc50;
    local_80 = lVar3;
    local_50 = uVar4;
    for (; lStack_78 = lVar3, param_2 != pvVar6; param_2 = (void *)((longlong)param_2 + 0x98)) {
      *(undefined8 *)(puVar9 + -8) = 0x180228abc;
      FUN_18023a210(lVar3,param_2);
      lVar3 = lVar3 + 0x98;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180228ae2;
    local_80 = lVar3;
    FUN_180218ad0(lVar3,lVar3);
    uVar10 = local_b8;
  }
  local_60 = 0;
  if (DAT_1803fcc50 != (void *)0x0) {
    *(undefined8 *)(puVar9 + -8) = 0x180228b06;
    FUN_180218ad0(DAT_1803fcc50,DAT_1803fcc58);
    pvVar6 = DAT_1803fcc50;
    if ((0xfff < (ulonglong)((DAT_1803fcc60 - (longlong)DAT_1803fcc50 >> 3) * 8)) &&
       (pvVar6 = *(void **)((longlong)DAT_1803fcc50 + -8),
       0x1f < (ulonglong)((longlong)DAT_1803fcc50 + (-8 - (longlong)pvVar6)))) {
      pvVar6 = (void *)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar9 = puVar9 + 8;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180228b62;
    free(pvVar6);
  }
  DAT_1803fcc50 = (void *)uVar4;
  DAT_1803fcc58 = (void *)(uVar1 * 0x98 + uVar4);
  DAT_1803fcc60 = uVar5 + uVar4;
  return uVar10;
}



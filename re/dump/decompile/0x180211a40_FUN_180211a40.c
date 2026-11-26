// 0x180211a40  FUN_180211a40
// size=1621 thunk=false
// signature: undefined FUN_180211a40()
// status: ok


void FUN_180211a40(ulonglong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  void *pvVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *_Memory;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  ulonglong *local_138;
  ulonglong *local_130;
  undefined8 *local_128 [3];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 *local_f8;
  undefined4 *local_90;
  undefined4 *puStack_88;
  ulonglong *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  ulonglong *local_68;
  
  if (param_4 == (undefined8 *)0x0) {
    return;
  }
  puVar12 = auStack_158;
  puVar13 = auStack_158;
  local_128[2] = param_3;
  local_130 = param_1;
  puVar1 = param_1 + 1;
  puVar2 = (undefined4 *)*puVar1;
  local_f8 = puVar2;
  local_128[0] = param_4;
  if (param_4 <= (undefined8 *)((longlong)(param_1[2] - (longlong)puVar2) / 0x98)) {
    uVar18 = 0;
    local_138 = puVar1;
    if (param_4 < (undefined8 *)(((longlong)puVar2 - (longlong)param_2 >> 3) * -0x79435e50d79435e5))
    {
      puVar16 = puVar2;
      local_90 = puVar2;
      local_80 = param_1;
      for (puVar15 = puVar2 + (longlong)param_4 * -0x26; puStack_88 = puVar16, puVar15 != puVar2;
          puVar15 = puVar15 + 0x26) {
        uVar18 = FUN_180227870(uVar18,puVar16);
        puVar16 = puVar16 + 0x26;
      }
      local_90 = puVar16;
      FUN_180217fc0(puVar16,puVar16);
      param_1[1] = (ulonglong)puVar16;
      puVar16 = puVar2 + (longlong)param_4 * -0x26;
      while (puVar16 != param_2) {
        puVar2[-0x26] = puVar16[-0x26];
        puVar2[-0x25] = puVar16[-0x25];
        FUN_18020e8a0(puVar2 + -0x24,puVar16 + -0x24);
        FUN_18020e8a0(puVar2 + -0x1c,puVar16 + -0x1c);
        puVar2[-0x14] = puVar16[-0x14];
        FUN_18020e8a0(puVar2 + -0x12,puVar16 + -0x12);
        FUN_18020e8a0(puVar2 + -10,puVar16 + -10);
        puVar2[-2] = puVar16[-2];
        *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(puVar16 + -1);
        puVar2 = puVar2 + -0x26;
        puVar16 = puVar16 + -0x26;
      }
      FUN_180217fc0(param_2,param_2 + (longlong)param_4 * 0x26);
      uStack_110 = *(undefined4 *)(local_128[2] + 1);
      uStack_10c = *(undefined4 *)((longlong)local_128[2] + 0xc);
      local_128[2] = (undefined8 *)*local_128[2];
      FUN_180220100(local_128 + 2,param_4,param_2,param_1);
      return;
    }
    puVar11 = (undefined8 *)(param_2 + (longlong)param_4 * 0x26);
    local_128[0] = puVar11;
    local_78 = puVar11;
    local_68 = param_1;
    for (puVar16 = param_2; puStack_70 = puVar11, puVar16 != puVar2; puVar16 = puVar16 + 0x26) {
      uVar18 = FUN_180227870(uVar18,puVar11);
      puVar11 = puVar11 + 0x13;
    }
    local_78 = puVar11;
    FUN_180217fc0(puVar11,puVar11);
    *puVar1 = (ulonglong)puVar11;
    FUN_180217fc0(param_2,puVar2);
    uStack_110 = *(undefined4 *)(local_128[2] + 1);
    uStack_10c = *(undefined4 *)((longlong)local_128[2] + 0xc);
    local_128[2] = (undefined8 *)*local_128[2];
    FUN_180220100(local_128 + 2,param_4,param_2,param_1);
    return;
  }
  puVar16 = (undefined4 *)*param_1;
  lVar8 = (longlong)puVar2 - (longlong)puVar16 >> 3;
  local_138 = (undefined8 *)0x1af286bca1af286;
  if ((undefined8 *)(lVar8 * 0x79435e50d79435e5 + 0x1af286bca1af286U) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  local_128[0] = (undefined8 *)(lVar8 * -0x79435e50d79435e5 + (longlong)param_4);
  uVar14 = ((longlong)(param_1[2] - (longlong)puVar16) >> 3) * -0x79435e50d79435e5;
  uVar7 = 0x1af286bca1af286 - (uVar14 >> 1);
  if (uVar14 < uVar7 || uVar14 - uVar7 == 0) {
    puVar11 = (undefined8 *)((uVar14 >> 1) + uVar14);
    puVar9 = local_128[0];
    if (local_128[0] <= puVar11) {
      puVar9 = puVar11;
    }
    if ((undefined8 *)0x1af286bca1af286 < puVar9) {
LAB_180212091:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar7 = (longlong)puVar9 * 0x98;
    if (uVar7 == 0) {
      uVar14 = 0;
      local_138 = puVar9;
      puVar13 = auStack_158;
      goto LAB_180211b92;
    }
    local_138 = puVar9;
    if (uVar7 < 0x1000) {
      uVar14 = FUN_1802d8350(uVar7);
      goto LAB_180211b92;
    }
    uVar14 = uVar7 + 0x27;
    if (uVar14 <= uVar7) goto LAB_180212091;
  }
  else {
    uVar14 = 0xffffffffffffffb7;
    uVar7 = 0xffffffffffffff90;
  }
  lVar8 = FUN_1802d8350(uVar14);
  if (lVar8 == 0) {
    pcVar6 = (code *)swi(0x29);
    lVar8 = (*pcVar6)(5);
    puVar12 = auStack_150;
  }
  uVar14 = lVar8 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar14 - 8) = lVar8;
  puVar13 = puVar12;
LAB_180211b92:
  lVar10 = (longlong)param_2 - (longlong)puVar16 >> 3;
  lVar8 = lVar10 * -0x79435e50d79435e5;
  *(longlong *)(puVar13 + 0x28) = lVar8;
  lVar8 = ((longlong)param_4 + lVar8) * 0x98 + uVar14;
  *(ulonglong **)(puVar13 + 0xf8) = param_1;
  *(ulonglong *)(puVar13 + 0x100) = uVar14;
  *(undefined8 *)(puVar13 + 0x108) = *(undefined8 *)(puVar13 + 0x20);
  *(longlong *)(puVar13 + 0x110) = lVar8;
  *(longlong *)(puVar13 + 0x118) = lVar8;
  lVar8 = **(longlong **)(puVar13 + 0x40);
  lVar10 = lVar10 * 8 + uVar14;
  uVar17 = (*(longlong **)(puVar13 + 0x40))[1];
  uVar18 = 0;
  *(undefined8 *)(puVar13 + 0x68) = 0;
  *(undefined8 *)(puVar13 + 0x70) = 0;
  *(undefined8 *)(puVar13 + 0x78) = 0;
  *(longlong *)(puVar13 + 0x68) = lVar10;
  *(longlong *)(puVar13 + 0x70) = lVar10;
  *(ulonglong **)(puVar13 + 0x78) = param_1;
  puVar11 = param_4;
  do {
    uVar3 = *(undefined8 *)
             (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar17) * 8);
    *(undefined8 *)(puVar13 + -8) = 0x180211c3b;
    uVar18 = FUN_180227870(uVar18,lVar10,uVar3);
    lVar10 = lVar10 + 0x98;
    *(longlong *)(puVar13 + 0x70) = lVar10;
    uVar17 = uVar17 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 - 1);
  } while (puVar11 != (undefined8 *)0x0);
  *(longlong *)(puVar13 + 0x68) = lVar10;
  *(undefined8 *)(puVar13 + -8) = 0x180211c60;
  FUN_180217fc0(lVar10,lVar10);
  *(ulonglong *)(puVar13 + 0x110) = *(longlong *)(puVar13 + 0x28) * 0x98 + uVar14;
  puVar2 = *(undefined4 **)(puVar13 + 0x60);
  if ((param_4 == (undefined8 *)0x1) && (param_2 == puVar2)) {
    uVar18 = 0;
    *(undefined8 *)(puVar13 + 0x80) = 0;
    *(undefined8 *)(puVar13 + 0x88) = 0;
    *(undefined8 *)(puVar13 + 0x90) = 0;
    *(ulonglong *)(puVar13 + 0x80) = uVar14;
    *(ulonglong *)(puVar13 + 0x88) = uVar14;
    *(ulonglong **)(puVar13 + 0x90) = param_1;
    uVar17 = uVar14;
    for (; puVar16 != puVar2; puVar16 = puVar16 + 0x26) {
      *(undefined8 *)(puVar13 + -8) = 0x180211ccb;
      uVar18 = FUN_180227870(uVar18,uVar17,puVar16);
      uVar17 = uVar17 + 0x98;
      *(ulonglong *)(puVar13 + 0x88) = uVar17;
    }
    *(ulonglong *)(puVar13 + 0x80) = uVar17;
  }
  else {
    uVar18 = 0;
    *(undefined8 *)(puVar13 + 0x98) = 0;
    *(undefined8 *)(puVar13 + 0xa0) = 0;
    *(undefined8 *)(puVar13 + 0xa8) = 0;
    *(ulonglong *)(puVar13 + 0x98) = uVar14;
    *(ulonglong *)(puVar13 + 0xa0) = uVar14;
    *(ulonglong **)(puVar13 + 0xa8) = param_1;
    uVar17 = uVar14;
    for (; puVar16 != param_2; puVar16 = puVar16 + 0x26) {
      *(undefined8 *)(puVar13 + -8) = 0x180211d3b;
      uVar18 = FUN_180227870(uVar18,uVar17,puVar16);
      uVar17 = uVar17 + 0x98;
      *(ulonglong *)(puVar13 + 0xa0) = uVar17;
    }
    *(ulonglong *)(puVar13 + 0x98) = uVar17;
    *(undefined8 *)(puVar13 + -8) = 0x180211d69;
    FUN_180217fc0(uVar17,uVar17);
    *(ulonglong *)(puVar13 + 0x110) = uVar14;
    uVar17 = (*(longlong *)(puVar13 + 0x28) + (longlong)param_4) * 0x98 + uVar14;
    uVar18 = 0;
    *(undefined8 *)(puVar13 + 0xb0) = 0;
    *(undefined8 *)(puVar13 + 0xb8) = 0;
    *(undefined8 *)(puVar13 + 0xc0) = 0;
    *(ulonglong *)(puVar13 + 0xb0) = uVar17;
    *(ulonglong *)(puVar13 + 0xb8) = uVar17;
    *(ulonglong **)(puVar13 + 0xc0) = param_1;
    for (; param_2 != puVar2; param_2 = param_2 + 0x26) {
      *(undefined8 *)(puVar13 + -8) = 0x180211dc0;
      uVar18 = FUN_180227870(uVar18,uVar17,param_2);
      uVar17 = uVar17 + 0x98;
      *(ulonglong *)(puVar13 + 0xb8) = uVar17;
    }
    *(ulonglong *)(puVar13 + 0xb0) = uVar17;
  }
  *(undefined8 *)(puVar13 + -8) = 0x180211dee;
  FUN_180217fc0(uVar17,uVar17);
  *(undefined8 *)(puVar13 + 0x100) = 0;
  uVar17 = *param_1;
  if (uVar17 != 0) {
    uVar4 = param_1[1];
    *(undefined8 *)(puVar13 + -8) = 0x180211e0b;
    FUN_180217fc0(uVar17,uVar4);
    pvVar5 = (void *)*param_1;
    _Memory = pvVar5;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar5) >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)();
      puVar13 = puVar13 + 8;
    }
    *(undefined8 *)(puVar13 + -8) = 0x180211e60;
    free(_Memory);
  }
  *param_1 = uVar14;
  param_1[1] = *(longlong *)(puVar13 + 0x30) * 0x98 + uVar14;
  param_1[2] = uVar14 + uVar7;
  return;
}



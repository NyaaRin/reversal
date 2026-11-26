// 0x1802610e0  FUN_1802610e0
// size=932 thunk=false
// signature: undefined FUN_1802610e0()
// status: ok


void FUN_1802610e0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar11 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar11 & 0xffffffffffffffc0) < 0x801) {
      puVar14 = param_1;
      if (param_1 != param_2) {
        while (puVar14 = puVar14 + 8, puVar14 != param_2) {
          uVar11 = puVar14[1];
          uVar2 = *puVar14;
          uVar3 = puVar14[2];
          uVar7 = puVar14[3];
          uVar8 = puVar14[4];
          uVar9 = puVar14[5];
          uVar10 = puVar14[6];
          uVar1 = puVar14[7];
          bVar18 = uVar11 < (ulonglong)param_1[1];
          if (uVar11 == param_1[1]) {
            bVar18 = uVar3 < (ulonglong)param_1[2];
          }
          puVar13 = puVar14;
          if (bVar18) {
            memmove((void *)((longlong)puVar14 + (0x40 - ((longlong)puVar14 - (longlong)param_1))),
                    param_1,(longlong)puVar14 - (longlong)param_1);
            param_1[3] = uVar7;
            param_1[4] = uVar8;
            *param_1 = uVar2;
            param_1[5] = uVar9;
            param_1[6] = uVar10;
            param_1[1] = uVar11;
            param_1[7] = uVar1;
            param_1[2] = uVar3;
          }
          else {
            while( true ) {
              bVar18 = uVar11 < (ulonglong)puVar13[-7];
              if (uVar11 == puVar13[-7]) {
                bVar18 = uVar3 < (ulonglong)puVar13[-6];
              }
              if (!bVar18) break;
              *puVar13 = puVar13[-8];
              puVar13[1] = puVar13[-7];
              puVar13[2] = puVar13[-6];
              puVar13[3] = puVar13[-5];
              puVar13[4] = puVar13[-4];
              puVar13[5] = puVar13[-3];
              puVar13[6] = puVar13[-2];
              puVar13[7] = puVar13[-1];
              puVar13 = puVar13 + -8;
            }
            puVar13[3] = uVar7;
            puVar13[4] = uVar8;
            *puVar13 = uVar2;
            puVar13[5] = uVar9;
            puVar13[6] = uVar10;
            puVar13[1] = uVar11;
            puVar13[7] = uVar1;
            puVar13[2] = uVar3;
          }
        }
      }
      return;
    }
    lVar15 = (longlong)param_2 - (longlong)param_1 >> 7;
    if (param_3 < 1) break;
    lVar16 = (longlong)param_2 + (-0x40 - (longlong)param_1) >> 6;
    puVar14 = param_1 + lVar15 * 8;
    if (lVar16 < 0x29) {
      puVar13 = param_2 + -8;
      puVar12 = param_1;
    }
    else {
      lVar16 = lVar16 + 1 >> 3;
      lVar17 = lVar16 * 0x40;
      lVar15 = lVar16 * 0x80;
      puVar12 = param_1 + lVar16 * 8;
      FUN_180266ab0(param_1,puVar12,param_1 + lVar16 * 0x10);
      FUN_180266ab0((longlong)puVar14 - lVar17,puVar14,lVar17 + (longlong)puVar14);
      puVar13 = (undefined8 *)((longlong)param_2 + (-0x40 - lVar17));
      FUN_180266ab0((longlong)param_2 + (-0x40 - lVar15),puVar13,param_2 + -8);
    }
    FUN_180266ab0(puVar12,puVar14,puVar13);
    FUN_1802657e0(&local_b8,param_1,puVar14,param_2);
    puVar13 = local_b0;
    puVar14 = local_b8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_b8 - (longlong)param_1 & 0xffffffffffffffc0U) <
        (longlong)((longlong)param_2 - (longlong)local_b0 & 0xffffffffffffffc0U)) {
      FUN_1802610e0(param_1,local_b8,param_3,param_4);
      puVar14 = param_2;
      param_1 = puVar13;
    }
    else {
      FUN_1802610e0(local_b0,param_2,param_3,param_4);
    }
    uVar11 = (longlong)puVar14 - (longlong)param_1;
    param_2 = puVar14;
  }
  lVar16 = (longlong)param_2 - (longlong)param_1 >> 6;
  while (0 < lVar15) {
    lVar15 = lVar15 + -1;
    local_a8 = param_1[lVar15 * 8];
    uStack_a0 = (param_1 + lVar15 * 8)[1];
    local_98 = param_1[lVar15 * 8 + 2];
    uStack_90 = (param_1 + lVar15 * 8 + 2)[1];
    local_88 = param_1[lVar15 * 8 + 4];
    uStack_80 = (param_1 + lVar15 * 8 + 4)[1];
    local_78 = param_1[lVar15 * 8 + 6];
    uStack_70 = (param_1 + lVar15 * 8 + 6)[1];
    FUN_180265650(param_1,lVar15,lVar16,&local_a8,param_4);
  }
  if (lVar16 < 2) {
    return;
  }
  do {
    puVar14 = param_2 + -8;
    if (0x7f < (longlong)((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffc0U)) {
      local_a8 = *puVar14;
      uStack_a0 = param_2[-7];
      local_98 = param_2[-6];
      uStack_90 = param_2[-5];
      local_88 = param_2[-4];
      uStack_80 = param_2[-3];
      local_78 = param_2[-2];
      uStack_70 = param_2[-1];
      uVar1 = param_1[1];
      *puVar14 = *param_1;
      param_2[-7] = uVar1;
      uVar1 = param_1[3];
      param_2[-6] = param_1[2];
      param_2[-5] = uVar1;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
      uVar5 = *(undefined4 *)(param_1 + 5);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x2c);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((longlong)param_2 + -0x1c) = uVar4;
      *(undefined4 *)(param_2 + -3) = uVar5;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x34);
      uVar5 = *(undefined4 *)(param_1 + 7);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x3c);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar4;
      *(undefined4 *)(param_2 + -1) = uVar5;
      *(undefined4 *)((longlong)param_2 + -4) = uVar6;
      FUN_180265650(param_1,0,(longlong)puVar14 - (longlong)param_1 >> 6,&local_a8,param_4);
    }
    param_2 = puVar14;
  } while (0x7f < (longlong)((longlong)puVar14 - (longlong)param_1 & 0xffffffffffffffc0U));
  return;
}



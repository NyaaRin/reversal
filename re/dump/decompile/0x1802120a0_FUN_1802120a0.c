// 0x1802120a0  FUN_1802120a0
// size=933 thunk=false
// signature: undefined FUN_1802120a0()
// status: ok


void FUN_1802120a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [40];
  
  puVar12 = auStack_48;
  puVar13 = (undefined8 *)*param_1;
  uVar14 = (param_1[2] - (longlong)puVar13 >> 2) * -0x303030303030303;
  if (param_3 <= uVar14) {
    puVar15 = (undefined8 *)param_1[1];
    lVar8 = (longlong)puVar15 - (longlong)puVar13 >> 2;
    if (param_3 <= (ulonglong)(lVar8 * -0x303030303030303)) {
      lVar8 = *param_2;
      uVar14 = param_2[1];
      lVar16 = param_3 * 0x154 + (longlong)puVar13;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        lVar7 = 2;
        puVar15 = *(undefined8 **)
                   (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar14) * 8);
        puVar5 = puVar13;
        do {
          puVar10 = puVar5;
          puVar9 = puVar15;
          uVar4 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar4;
          uVar4 = puVar9[3];
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar4;
          uVar4 = puVar9[5];
          puVar10[4] = puVar9[4];
          puVar10[5] = uVar4;
          uVar4 = puVar9[7];
          puVar10[6] = puVar9[6];
          puVar10[7] = uVar4;
          uVar4 = puVar9[9];
          puVar10[8] = puVar9[8];
          puVar10[9] = uVar4;
          uVar4 = puVar9[0xb];
          puVar10[10] = puVar9[10];
          puVar10[0xb] = uVar4;
          uVar4 = puVar9[0xd];
          puVar10[0xc] = puVar9[0xc];
          puVar10[0xd] = uVar4;
          uVar4 = puVar9[0xf];
          puVar10[0xe] = puVar9[0xe];
          puVar10[0xf] = uVar4;
          lVar7 = lVar7 + -1;
          puVar15 = puVar9 + 0x10;
          puVar5 = puVar10 + 0x10;
        } while (lVar7 != 0);
        uVar4 = puVar9[0x11];
        puVar13 = (undefined8 *)((longlong)puVar13 + 0x154);
        uVar14 = uVar14 + 1;
        puVar10[0x10] = puVar9[0x10];
        puVar10[0x11] = uVar4;
        uVar4 = puVar9[0x13];
        puVar10[0x12] = puVar9[0x12];
        puVar10[0x13] = uVar4;
        uVar4 = puVar9[0x15];
        puVar10[0x14] = puVar9[0x14];
        puVar10[0x15] = uVar4;
        uVar4 = puVar9[0x17];
        puVar10[0x16] = puVar9[0x16];
        puVar10[0x17] = uVar4;
        uVar4 = puVar9[0x19];
        puVar10[0x18] = puVar9[0x18];
        puVar10[0x19] = uVar4;
        *(undefined4 *)(puVar10 + 0x1a) = *(undefined4 *)(puVar9 + 0x1a);
      }
      param_1[1] = lVar16;
      return;
    }
    if (puVar13 != puVar15) {
      lVar16 = *param_2;
      do {
        lVar7 = 2;
        uVar14 = param_2[1];
        puVar15 = *(undefined8 **)
                   (*(longlong *)(lVar16 + 8) + (*(longlong *)(lVar16 + 0x10) - 1U & uVar14) * 8);
        puVar5 = puVar13;
        do {
          puVar10 = puVar5;
          puVar9 = puVar15;
          uVar4 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar4;
          uVar4 = puVar9[3];
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar4;
          uVar4 = puVar9[5];
          puVar10[4] = puVar9[4];
          puVar10[5] = uVar4;
          uVar4 = puVar9[7];
          puVar10[6] = puVar9[6];
          puVar10[7] = uVar4;
          uVar4 = puVar9[9];
          puVar10[8] = puVar9[8];
          puVar10[9] = uVar4;
          uVar4 = puVar9[0xb];
          puVar10[10] = puVar9[10];
          puVar10[0xb] = uVar4;
          uVar4 = puVar9[0xd];
          puVar10[0xc] = puVar9[0xc];
          puVar10[0xd] = uVar4;
          uVar4 = puVar9[0xf];
          puVar10[0xe] = puVar9[0xe];
          puVar10[0xf] = uVar4;
          lVar7 = lVar7 + -1;
          puVar15 = puVar9 + 0x10;
          puVar5 = puVar10 + 0x10;
        } while (lVar7 != 0);
        uVar4 = puVar9[0x11];
        puVar13 = (undefined8 *)((longlong)puVar13 + 0x154);
        puVar10[0x10] = puVar9[0x10];
        puVar10[0x11] = uVar4;
        uVar4 = puVar9[0x13];
        puVar10[0x12] = puVar9[0x12];
        puVar10[0x13] = uVar4;
        uVar4 = puVar9[0x15];
        puVar10[0x14] = puVar9[0x14];
        puVar10[0x15] = uVar4;
        uVar4 = puVar9[0x17];
        puVar10[0x16] = puVar9[0x16];
        puVar10[0x17] = uVar4;
        uVar4 = puVar9[0x19];
        puVar10[0x18] = puVar9[0x18];
        puVar10[0x19] = uVar4;
        *(undefined4 *)(puVar10 + 0x1a) = *(undefined4 *)(puVar9 + 0x1a);
        puVar15 = (undefined8 *)param_1[1];
        param_2[1] = uVar14 + 1;
      } while (puVar13 != puVar15);
    }
    lVar16 = *param_2;
    uVar14 = param_2[1];
    for (lVar8 = param_3 + lVar8 * 0x303030303030303; lVar8 != 0; lVar8 = lVar8 + -1) {
      lVar7 = 2;
      puVar13 = puVar15;
      puVar5 = *(undefined8 **)
                (*(longlong *)(lVar16 + 8) + (*(longlong *)(lVar16 + 0x10) - 1U & uVar14) * 8);
      do {
        puVar10 = puVar5;
        puVar9 = puVar13;
        uVar4 = puVar10[1];
        *puVar9 = *puVar10;
        puVar9[1] = uVar4;
        uVar4 = puVar10[3];
        puVar9[2] = puVar10[2];
        puVar9[3] = uVar4;
        uVar4 = puVar10[5];
        puVar9[4] = puVar10[4];
        puVar9[5] = uVar4;
        uVar4 = puVar10[7];
        puVar9[6] = puVar10[6];
        puVar9[7] = uVar4;
        uVar4 = puVar10[9];
        puVar9[8] = puVar10[8];
        puVar9[9] = uVar4;
        uVar4 = puVar10[0xb];
        puVar9[10] = puVar10[10];
        puVar9[0xb] = uVar4;
        uVar4 = puVar10[0xd];
        puVar9[0xc] = puVar10[0xc];
        puVar9[0xd] = uVar4;
        uVar4 = puVar10[0xf];
        puVar9[0xe] = puVar10[0xe];
        puVar9[0xf] = uVar4;
        lVar7 = lVar7 + -1;
        puVar13 = puVar9 + 0x10;
        puVar5 = puVar10 + 0x10;
      } while (lVar7 != 0);
      uVar4 = puVar10[0x11];
      puVar15 = (undefined8 *)((longlong)puVar15 + 0x154);
      uVar14 = uVar14 + 1;
      puVar9[0x10] = puVar10[0x10];
      puVar9[0x11] = uVar4;
      uVar4 = puVar10[0x13];
      puVar9[0x12] = puVar10[0x12];
      puVar9[0x13] = uVar4;
      uVar4 = puVar10[0x15];
      puVar9[0x14] = puVar10[0x14];
      puVar9[0x15] = uVar4;
      uVar4 = puVar10[0x17];
      puVar9[0x16] = puVar10[0x16];
      puVar9[0x17] = uVar4;
      uVar4 = puVar10[0x19];
      puVar9[0x18] = puVar10[0x18];
      puVar9[0x19] = uVar4;
      *(undefined4 *)(puVar9 + 0x1a) = *(undefined4 *)(puVar10 + 0x1a);
    }
    param_1[1] = (longlong)puVar15;
    return;
  }
  if (param_3 < 0xc0c0c0c0c0c0c1) {
    uVar6 = 0xc0c0c0c0c0c0c0 - (uVar14 >> 1);
    uVar11 = 0xc0c0c0c0c0c0c0;
    if ((uVar14 < uVar6 || uVar14 - uVar6 == 0) &&
       (uVar11 = uVar14 + (uVar14 >> 1), uVar11 < param_3)) {
      uVar11 = param_3;
    }
    if (puVar13 != (undefined8 *)0x0) {
      puVar15 = puVar13;
      puVar12 = auStack_48;
      if (0xfff < (ulonglong)((param_1[2] - (longlong)puVar13 >> 2) * 4)) {
        puVar15 = (undefined8 *)puVar13[-1];
        puVar13 = (undefined8 *)((longlong)puVar13 + (-8 - (longlong)puVar15));
        puVar12 = auStack_48;
        if ((undefined8 *)0x1f < puVar13) {
          pcVar1 = (code *)swi(0x29);
          puVar15 = puVar13;
          (*pcVar1)(5);
          puVar12 = auStack_40;
        }
      }
      *(undefined8 *)(puVar12 + -8) = 0x180212154;
      free(puVar15);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(undefined8 *)(puVar12 + -8) = 0x180212169;
    lVar7 = FUN_18022d680();
    lVar8 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar16 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_1 = lVar7;
    *(int *)(puVar12 + 0x20) = (int)lVar8;
    *(undefined4 *)(puVar12 + 0x24) = uVar2;
    *(int *)(puVar12 + 0x28) = (int)lVar16;
    *(undefined4 *)(puVar12 + 0x2c) = uVar3;
    param_1[1] = lVar7;
    param_1[2] = uVar11 * 0x154 + lVar7;
    *(undefined8 *)(puVar12 + -8) = 0x180212196;
    lVar8 = FUN_1802202b0(puVar12 + 0x20,param_3,lVar7);
    param_1[1] = lVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020cc40();
}



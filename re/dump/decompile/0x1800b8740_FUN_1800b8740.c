// 0x1800b8740  FUN_1800b8740
// size=602 thunk=false
// signature: undefined FUN_1800b8740()
// status: ok


void FUN_1800b8740(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 local_3d8 [96];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  if (param_1 - 1U < 0x80) {
    lVar16 = (longlong)param_1;
    lVar13 = lVar16 * 0x168;
    uVar1 = *(undefined4 *)((longlong)&DAT_180561104 + lVar13 + 4);
    uVar5 = (&DAT_18056110c)[lVar13];
    uVar2 = *(undefined4 *)(&DAT_18056118c + lVar16 * 0x2d);
    uVar6 = *(undefined4 *)(&DAT_180561138 + lVar16 * 0x2d);
    uVar7 = *(undefined8 *)(&DAT_180561118 + lVar13);
    uVar8 = *(undefined8 *)(&DAT_180561120 + lVar13);
    uVar9 = *(undefined8 *)(&DAT_180561128 + lVar13);
    uVar10 = *(undefined8 *)(&DAT_180561130 + lVar13);
    uVar3 = (&DAT_18056115c)[lVar16 * 0x5a];
    uVar4 = *(undefined4 *)(&DAT_180561110 + lVar16 * 0x2d);
    memset(local_3d8,0,0x168);
    FUN_1800b8590(local_3d8);
    FUN_1800b89a0(&DAT_1805610f0 + lVar16 * 0x5a);
    *(undefined4 *)((longlong)&DAT_180561104 + lVar13 + 4) = uVar1;
    *(undefined4 *)(&DAT_180561110 + lVar16 * 0x2d) = uVar4;
    *(undefined4 *)(&DAT_18056118c + lVar16 * 0x2d) = uVar2;
    (&DAT_18056115c)[lVar16 * 0x5a] = uVar3;
    (&DAT_18056110c)[lVar13] = uVar5;
    *(undefined4 *)(&DAT_180561138 + lVar16 * 0x2d) = uVar6;
    *(undefined8 *)(&DAT_180561118 + lVar13) = uVar7;
    *(undefined8 *)(&DAT_180561120 + lVar13) = uVar8;
    *(undefined8 *)(&DAT_180561128 + lVar13) = uVar9;
    *(undefined8 *)(&DAT_180561130 + lVar13) = uVar10;
    memset(local_3d8,0,0x300);
    FUN_1802030d0();
    lVar13 = 6;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    puVar11 = local_3d8;
    puVar12 = (undefined8 *)(&DAT_18040a650 + lVar16 * 0x318);
    do {
      puVar15 = puVar12;
      puVar14 = puVar11;
      uVar7 = puVar14[1];
      uVar8 = puVar14[2];
      uVar9 = puVar14[3];
      *puVar15 = *puVar14;
      puVar15[1] = uVar7;
      uVar7 = puVar14[4];
      uVar10 = puVar14[5];
      puVar15[2] = uVar8;
      puVar15[3] = uVar9;
      uVar8 = puVar14[6];
      uVar9 = puVar14[7];
      puVar15[4] = uVar7;
      puVar15[5] = uVar10;
      uVar7 = puVar14[8];
      uVar10 = puVar14[9];
      puVar15[6] = uVar8;
      puVar15[7] = uVar9;
      uVar8 = puVar14[10];
      uVar9 = puVar14[0xb];
      puVar15[8] = uVar7;
      puVar15[9] = uVar10;
      uVar7 = puVar14[0xc];
      uVar10 = puVar14[0xd];
      puVar15[10] = uVar8;
      puVar15[0xb] = uVar9;
      uVar8 = puVar14[0xe];
      uVar9 = puVar14[0xf];
      puVar15[0xc] = uVar7;
      puVar15[0xd] = uVar10;
      puVar15[0xe] = uVar8;
      puVar15[0xf] = uVar9;
      lVar13 = lVar13 + -1;
      puVar11 = puVar14 + 0x10;
      puVar12 = puVar15 + 0x10;
    } while (lVar13 != 0);
    uVar8 = puVar14[0x11];
    uVar7 = puVar14[0x12];
    puVar15[0x10] = puVar14[0x10];
    puVar15[0x11] = uVar8;
    puVar15[0x12] = uVar7;
  }
  return;
}



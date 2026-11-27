// 0x180264e90  FUN_180264e90
// size=587 thunk=false
// signature: undefined FUN_180264e90()
// status: ok


void FUN_180264e90(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar1 = param_1 + 0x10;
  lVar13 = (longlong)(param_3 - 1) >> 1;
  lVar10 = param_2;
  while (lVar10 < lVar13) {
    lVar9 = lVar10 * 2 + 2;
    lVar6 = lVar9 * 0x30;
    uVar4 = *(ulonglong *)(lVar6 + lVar1);
    puVar8 = (ulonglong *)(lVar6 + param_1);
    uVar11 = *puVar8;
    puVar12 = (ulonglong *)(param_1 + -0x30 + lVar6);
    bVar14 = uVar11 < uVar4;
    if (uVar11 == uVar4) {
      bVar14 = puVar8[1] < ((ulonglong *)(lVar6 + lVar1))[1];
    }
    if (!bVar14) {
      uVar11 = uVar4;
      puVar8 = (ulonglong *)(lVar6 + lVar1);
    }
    uVar4 = *(ulonglong *)(lVar6 + -0x20 + param_1);
    uVar7 = *puVar12;
    bVar14 = uVar7 < uVar4;
    if (uVar7 == uVar4) {
      bVar14 = puVar12[1] < *(ulonglong *)(lVar6 + param_1 + -0x18);
    }
    if (!bVar14) {
      puVar12 = (ulonglong *)(lVar6 + param_1 + -0x20);
      uVar7 = uVar4;
    }
    bVar14 = uVar11 < uVar7;
    if (uVar11 == uVar7) {
      bVar14 = puVar8[1] < puVar12[1];
    }
    if (bVar14) {
      lVar9 = lVar10 * 2 + 1;
    }
    puVar2 = (undefined8 *)(param_1 + lVar9 * 0x30);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + lVar10 * 0x30);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar9 * 0x30);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x30);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9 * 0x30);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x20 + lVar10 * 0x30);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    lVar10 = lVar9;
  }
  if ((lVar10 == lVar13) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x30 + param_3 * 0x30);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + lVar10 * 0x30);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + -0x20 + param_3 * 0x30);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x30);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x30);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x20 + lVar10 * 0x30);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    lVar10 = param_3 - 1;
  }
  if (param_2 < lVar10) {
    do {
      lVar13 = lVar10 + -1 >> 1;
      puVar8 = (ulonglong *)(lVar13 * 0x30 + lVar1);
      puVar12 = (ulonglong *)(lVar13 * 0x30 + param_1);
      uVar4 = *puVar8;
      uVar11 = *puVar12;
      bVar14 = uVar11 < uVar4;
      if (uVar11 == uVar4) {
        bVar14 = puVar12[1] < puVar8[1];
      }
      if (!bVar14) {
        uVar11 = uVar4;
        puVar12 = puVar8;
      }
      uVar4 = param_4[2];
      uVar7 = *param_4;
      bVar14 = uVar7 < uVar4;
      if (uVar7 == uVar4) {
        bVar14 = param_4[1] < param_4[3];
      }
      puVar8 = param_4;
      if (!bVar14) {
        puVar8 = param_4 + 2;
        uVar7 = uVar4;
      }
      bVar14 = uVar11 < uVar7;
      if (uVar11 == uVar7) {
        bVar14 = puVar12[1] < puVar8[1];
      }
      if (!bVar14) break;
      puVar2 = (undefined8 *)(param_1 + lVar13 * 0x30);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(param_1 + lVar10 * 0x30);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar13 * 0x30);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x30);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar13 * 0x30);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(param_1 + 0x20 + lVar10 * 0x30);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      lVar10 = lVar13;
    } while (param_2 < lVar13);
  }
  uVar4 = param_4[1];
  puVar12 = (ulonglong *)(param_1 + lVar10 * 0x30);
  *puVar12 = *param_4;
  puVar12[1] = uVar4;
  uVar4 = param_4[3];
  puVar12 = (ulonglong *)(param_1 + 0x10 + lVar10 * 0x30);
  *puVar12 = param_4[2];
  puVar12[1] = uVar4;
  uVar4 = param_4[5];
  puVar12 = (ulonglong *)(param_1 + 0x20 + lVar10 * 0x30);
  *puVar12 = param_4[4];
  puVar12[1] = uVar4;
  return;
}



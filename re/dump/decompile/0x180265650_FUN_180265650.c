// 0x180265650  FUN_180265650
// size=391 thunk=false
// signature: undefined FUN_180265650()
// status: ok


void FUN_180265650(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar8) {
    lVar9 = lVar7 * 2 + 2;
    lVar6 = lVar9 * 0x40;
    uVar3 = *(ulonglong *)(lVar6 + -0x38 + param_1);
    uVar4 = *(ulonglong *)(lVar6 + 8 + param_1);
    bVar10 = uVar4 < uVar3;
    if (uVar4 == uVar3) {
      bVar10 = *(ulonglong *)(lVar6 + 0x10 + param_1) < *(ulonglong *)(lVar6 + -0x30 + param_1);
    }
    if (bVar10) {
      lVar9 = lVar7 * 2 + 1;
    }
    lVar7 = lVar7 * 0x40;
    lVar6 = lVar9 * 0x40;
    uVar5 = ((undefined8 *)(lVar6 + param_1))[1];
    *(undefined8 *)(lVar7 + param_1) = *(undefined8 *)(lVar6 + param_1);
    ((undefined8 *)(lVar7 + param_1))[1] = uVar5;
    puVar1 = (undefined8 *)(lVar6 + 0x10 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar6 + 0x20 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar6 + 0x30 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x30 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar7 = lVar9;
  }
  if ((lVar7 == lVar8) && ((param_3 & 1) == 0)) {
    lVar8 = param_3 * 0x40;
    lVar7 = lVar7 * 0x40;
    puVar1 = (undefined8 *)(param_1 + -0x40 + lVar8);
    uVar5 = puVar1[1];
    *(undefined8 *)(lVar7 + param_1) = *puVar1;
    ((undefined8 *)(lVar7 + param_1))[1] = uVar5;
    puVar1 = (undefined8 *)(param_1 + -0x30 + lVar8);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(param_1 + -0x20 + lVar8);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(param_1 + -0x10 + lVar8);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x30 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar7 = param_3 - 1;
  }
  while (param_2 < lVar7) {
    lVar9 = lVar7 + -1 >> 1;
    lVar8 = lVar9 * 0x40;
    uVar3 = *(ulonglong *)(lVar8 + 8 + param_1);
    bVar10 = uVar3 < (ulonglong)param_4[1];
    puVar1 = (undefined8 *)(lVar8 + param_1);
    if (uVar3 == param_4[1]) {
      bVar10 = (ulonglong)puVar1[2] < (ulonglong)param_4[2];
    }
    if (!bVar10) break;
    uVar5 = puVar1[1];
    lVar7 = lVar7 * 0x40;
    *(undefined8 *)(lVar7 + param_1) = *puVar1;
    ((undefined8 *)(lVar7 + param_1))[1] = uVar5;
    uVar5 = puVar1[3];
    puVar2 = (undefined8 *)(lVar7 + 0x10 + param_1);
    *puVar2 = puVar1[2];
    puVar2[1] = uVar5;
    uVar5 = puVar1[5];
    puVar2 = (undefined8 *)(lVar7 + 0x20 + param_1);
    *puVar2 = puVar1[4];
    puVar2[1] = uVar5;
    uVar5 = puVar1[7];
    puVar2 = (undefined8 *)(lVar7 + 0x30 + param_1);
    *puVar2 = puVar1[6];
    puVar2[1] = uVar5;
    lVar7 = lVar9;
  }
  uVar5 = param_4[1];
  lVar7 = lVar7 * 0x40;
  *(undefined8 *)(lVar7 + param_1) = *param_4;
  ((undefined8 *)(lVar7 + param_1))[1] = uVar5;
  uVar5 = param_4[3];
  puVar1 = (undefined8 *)(lVar7 + 0x10 + param_1);
  *puVar1 = param_4[2];
  puVar1[1] = uVar5;
  uVar5 = param_4[5];
  puVar1 = (undefined8 *)(lVar7 + 0x20 + param_1);
  *puVar1 = param_4[4];
  puVar1[1] = uVar5;
  uVar5 = param_4[7];
  puVar1 = (undefined8 *)(lVar7 + 0x30 + param_1);
  *puVar1 = param_4[6];
  puVar1[1] = uVar5;
  return;
}



// 0x18022f7f0  FUN_18022f7f0
// size=298 thunk=false
// signature: undefined FUN_18022f7f0()
// status: ok


void FUN_18022f7f0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_3 - 1) >> 1;
  lVar8 = param_2;
  while (lVar8 < lVar10) {
    fVar4 = *(float *)((lVar8 * 2 + 1) * 0x20 + 0x10 + param_1);
    pfVar3 = (float *)(lVar8 * 0x40 + 0x50 + param_1);
    lVar9 = lVar8 * 0x20;
    lVar8 = (ulonglong)(fVar4 < *pfVar3 || fVar4 == *pfVar3) + 1 + lVar8 * 2;
    puVar1 = (undefined8 *)(lVar8 * 0x20 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar9 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar8 * 0x20 + 0x10 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar9 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
  }
  if ((lVar8 == lVar10) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_3 * 0x20 + -0x20 + param_1);
    uVar5 = puVar2[1];
    puVar1 = (undefined8 *)(lVar8 * 0x20 + param_1);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(param_3 * 0x20 + -0x10 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 * 0x20 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar8 = param_3 - 1;
  }
  if (param_2 < lVar8) {
    fVar4 = *(float *)(param_4 + 2);
    do {
      lVar9 = lVar8 + -1 >> 1;
      lVar10 = lVar9 * 0x20;
      pfVar3 = (float *)(lVar10 + 0x10 + param_1);
      if (fVar4 < *pfVar3 || fVar4 == *pfVar3) break;
      uVar5 = ((undefined8 *)(lVar10 + param_1))[1];
      puVar1 = (undefined8 *)(lVar8 * 0x20 + param_1);
      *puVar1 = *(undefined8 *)(lVar10 + param_1);
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(lVar10 + 0x10 + param_1);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar8 * 0x20 + 0x10 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar8 = lVar9;
    } while (param_2 < lVar9);
  }
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  puVar1 = (undefined8 *)(lVar8 * 0x20 + param_1);
  *puVar1 = *param_4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar8 * 0x20 + 0x10 + param_1);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  return;
}



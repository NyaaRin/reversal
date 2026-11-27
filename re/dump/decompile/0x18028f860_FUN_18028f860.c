// 0x18028f860  FUN_18028f860
// size=441 thunk=false
// signature: undefined FUN_18028f860()
// status: ok


void FUN_18028f860(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar11 = 1;
  if (1 < param_2) {
    do {
      uVar10 = (uint)uVar11;
      uVar5 = *(undefined4 *)(param_1 + uVar11 * 0x14);
      fVar3 = *(float *)(param_1 + 4 + uVar11 * 0x14);
      uVar4 = *(undefined8 *)(param_1 + 8 + uVar11 * 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x10 + uVar11 * 0x14);
      if (uVar10 < 4) goto LAB_18028f98f;
      do {
        uVar12 = (uint)uVar11;
        if (*(float *)(param_1 + -0x10 + uVar11 * 0x14) <= fVar3) goto LAB_18028f9ca;
        puVar2 = (undefined8 *)(param_1 + -0x14 + uVar11 * 0x14);
        uVar8 = puVar2[1];
        uVar7 = *(undefined4 *)(param_1 + -4 + uVar11 * 0x14);
        puVar1 = (undefined8 *)(param_1 + uVar11 * 0x14);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined4 *)(param_1 + 0x10 + uVar11 * 0x14) = uVar7;
        if (*(float *)(param_1 + -0x24 + uVar11 * 0x14) <= fVar3) {
          uVar12 = uVar12 - 1;
          goto LAB_18028f9ca;
        }
        puVar1 = (undefined8 *)(param_1 + -0x28 + uVar11 * 0x14);
        uVar8 = puVar1[1];
        uVar7 = *(undefined4 *)(param_1 + -0x18 + uVar11 * 0x14);
        puVar2 = (undefined8 *)(param_1 + -0x14 + uVar11 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined4 *)(param_1 + -4 + uVar11 * 0x14) = uVar7;
        if (*(float *)(param_1 + -0x38 + uVar11 * 0x14) <= fVar3) {
          uVar12 = uVar12 - 2;
          goto LAB_18028f9ca;
        }
        puVar1 = (undefined8 *)(param_1 + -0x3c + uVar11 * 0x14);
        uVar8 = puVar1[1];
        uVar7 = *(undefined4 *)(param_1 + -0x2c + uVar11 * 0x14);
        puVar2 = (undefined8 *)(param_1 + -0x28 + uVar11 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined4 *)(param_1 + -0x18 + uVar11 * 0x14) = uVar7;
        if (*(float *)(param_1 + -0x4c + uVar11 * 0x14) <= fVar3) {
          uVar12 = uVar12 - 3;
          goto LAB_18028f9ca;
        }
        uVar7 = *(undefined4 *)(param_1 + -0x40 + uVar11 * 0x14);
        uVar12 = uVar12 - 4;
        puVar1 = (undefined8 *)(param_1 + -0x50 + uVar11 * 0x14);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + -0x3c + uVar11 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined4 *)(param_1 + -0x2c + uVar11 * 0x14) = uVar7;
        uVar11 = (ulonglong)uVar12;
      } while (3 < (int)uVar12);
      while (0 < (int)uVar12) {
LAB_18028f98f:
        uVar12 = (uint)uVar11;
        if (*(float *)(param_1 + -0x10 + uVar11 * 0x14) <= fVar3) break;
        puVar2 = (undefined8 *)(param_1 + -0x14 + uVar11 * 0x14);
        uVar8 = puVar2[1];
        uVar7 = *(undefined4 *)(param_1 + -4 + uVar11 * 0x14);
        uVar12 = uVar12 - 1;
        puVar1 = (undefined8 *)(param_1 + uVar11 * 0x14);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined4 *)(param_1 + 0x10 + uVar11 * 0x14) = uVar7;
        uVar11 = (ulonglong)uVar12;
      }
LAB_18028f9ca:
      if (uVar10 != uVar12) {
        lVar9 = (longlong)(int)uVar12;
        *(undefined8 *)(param_1 + 8 + lVar9 * 0x14) = uVar4;
        *(undefined4 *)(param_1 + 0x10 + lVar9 * 0x14) = uVar6;
        *(float *)(param_1 + 4 + lVar9 * 0x14) = fVar3;
        *(undefined4 *)(param_1 + lVar9 * 0x14) = uVar5;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < param_2);
  }
  return;
}



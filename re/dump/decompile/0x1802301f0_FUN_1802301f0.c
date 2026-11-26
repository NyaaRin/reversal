// 0x1802301f0  FUN_1802301f0
// size=450 thunk=false
// signature: undefined FUN_1802301f0()
// status: ok


void FUN_1802301f0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar8) {
    lVar9 = lVar7 * 2 + 2;
    lVar6 = lVar9 * 0x30;
    iVar2 = *(int *)(lVar6 + -8 + param_1);
    iVar3 = *(int *)(lVar6 + 0x28 + param_1);
    if (iVar3 == iVar2) {
      bVar4 = FUN_180201cf0(param_1 + 8 + lVar6,param_1 + -0x28 + lVar6);
      bVar5 = (bool)(bVar4 >> 7);
    }
    else {
      bVar5 = iVar2 <= iVar3;
    }
    if (bVar5 != false) {
      lVar9 = lVar7 * 2 + 1;
    }
    lVar6 = lVar9 * 0x30;
    lVar7 = lVar7 * 0x30;
    *(undefined4 *)(lVar7 + param_1) = *(undefined4 *)(lVar6 + param_1);
    FUN_18020e8a0(param_1 + 8 + lVar7,param_1 + 8 + lVar6);
    *(undefined4 *)(lVar7 + 0x28 + param_1) = *(undefined4 *)(lVar6 + 0x28 + param_1);
    lVar7 = lVar9;
  }
  if ((lVar7 == lVar8) && ((param_3 & 1) == 0)) {
    lVar8 = param_3 * 0x30;
    lVar7 = lVar7 * 0x30;
    *(undefined4 *)(lVar7 + param_1) = *(undefined4 *)(lVar8 + -0x30 + param_1);
    FUN_18020e8a0(param_1 + 8 + lVar7,param_1 + -0x28 + lVar8);
    *(undefined4 *)(lVar7 + 0x28 + param_1) = *(undefined4 *)(lVar8 + -8 + param_1);
    lVar7 = param_3 - 1;
  }
  while (param_2 < lVar7) {
    lVar8 = lVar7 + -1 >> 1;
    puVar1 = (undefined4 *)(param_1 + lVar8 * 0x30);
    iVar2 = *(int *)(param_1 + 0x28 + lVar8 * 0x30);
    if (iVar2 == param_4[10]) {
      bVar4 = FUN_180201cf0(puVar1 + 2,param_4 + 2);
      bVar5 = (bool)(bVar4 >> 7);
    }
    else {
      bVar5 = (int)param_4[10] <= iVar2;
    }
    if (bVar5 == false) break;
    lVar7 = lVar7 * 0x30;
    *(undefined4 *)(lVar7 + param_1) = *puVar1;
    FUN_18020e8a0(param_1 + 8 + lVar7,puVar1 + 2);
    *(undefined4 *)(lVar7 + 0x28 + param_1) = puVar1[10];
    lVar7 = lVar8;
  }
  lVar7 = lVar7 * 0x30;
  *(undefined4 *)(lVar7 + param_1) = *param_4;
  FUN_18020e8a0(param_1 + 8 + lVar7,param_4 + 2);
  *(undefined4 *)(lVar7 + 0x28 + param_1) = param_4[10];
  return;
}



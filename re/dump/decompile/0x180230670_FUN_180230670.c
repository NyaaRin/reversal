// 0x180230670  FUN_180230670
// size=397 thunk=false
// signature: undefined FUN_180230670()
// status: ok


void FUN_180230670(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar8) {
    lVar7 = lVar1 * 2 + 2;
    lVar2 = lVar7 * 0x28;
    iVar3 = *(int *)(lVar2 + -8 + param_1);
    iVar4 = *(int *)(lVar2 + 0x20 + param_1);
    if (iVar4 == iVar3) {
      bVar5 = FUN_180201cf0(lVar2 + param_1,param_1 + -0x28 + lVar2);
      bVar6 = (bool)(bVar5 >> 7);
    }
    else {
      bVar6 = iVar3 <= iVar4;
    }
    if (bVar6 != false) {
      lVar7 = lVar1 * 2 + 1;
    }
    FUN_18020e8a0(lVar1 * 0x28 + param_1,lVar7 * 0x28 + param_1);
    *(undefined4 *)(lVar1 * 0x28 + 0x20 + param_1) = *(undefined4 *)(lVar7 * 0x28 + 0x20 + param_1);
    lVar1 = lVar7;
  }
  if ((lVar1 == lVar8) && ((param_3 & 1) == 0)) {
    lVar8 = param_1 + param_3 * 0x28;
    lVar1 = param_1 + lVar1 * 0x28;
    FUN_18020e8a0(lVar1,lVar8 + -0x28);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar8 + -8);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar7 = lVar1 + -1 >> 1;
    lVar8 = param_1 + lVar7 * 0x28;
    iVar3 = *(int *)(param_1 + 0x20 + lVar7 * 0x28);
    if (iVar3 == *(int *)(param_4 + 0x20)) {
      bVar5 = FUN_180201cf0(lVar8,param_4);
      bVar6 = (bool)(bVar5 >> 7);
    }
    else {
      bVar6 = *(int *)(param_4 + 0x20) <= iVar3;
    }
    if (bVar6 == false) break;
    lVar1 = param_1 + lVar1 * 0x28;
    FUN_18020e8a0(lVar1,lVar8);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
    lVar1 = lVar7;
  }
  param_1 = param_1 + lVar1 * 0x28;
  FUN_18020e8a0(param_1,param_4);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x20);
  return;
}



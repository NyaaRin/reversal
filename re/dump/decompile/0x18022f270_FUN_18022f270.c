// 0x18022f270  FUN_18022f270
// size=455 thunk=false
// signature: undefined FUN_18022f270()
// status: ok


void FUN_18022f270(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar7) {
    lVar4 = lVar6 * 2 + 2;
    lVar5 = lVar4 * 0x40;
    iVar1 = *(int *)(lVar5 + -0x20 + param_1);
    iVar2 = *(int *)(lVar5 + 0x20 + param_1);
    if (iVar2 == iVar1) {
      bVar3 = (ulonglong)
              (*(longlong *)(lVar5 + -0x10 + param_1) - *(longlong *)(lVar5 + -0x18 + param_1) >> 5)
              < (ulonglong)
                (*(longlong *)(lVar5 + 0x30 + param_1) - *(longlong *)(lVar5 + 0x28 + param_1) >> 5)
      ;
    }
    else {
      bVar3 = iVar1 <= iVar2;
    }
    if (bVar3) {
      lVar4 = lVar6 * 2 + 1;
    }
    lVar6 = lVar6 * 0x40;
    lVar5 = lVar4 * 0x40;
    FUN_18020e8a0(lVar6 + param_1,lVar5 + param_1);
    *(undefined4 *)(lVar6 + 0x20 + param_1) = *(undefined4 *)(lVar5 + 0x20 + param_1);
    FUN_18020d830(param_1 + 0x28 + lVar6,param_1 + 0x28 + lVar5);
    lVar6 = lVar4;
  }
  if ((lVar6 == lVar7) && ((param_3 & 1) == 0)) {
    lVar7 = lVar6 * 0x40 + param_1;
    lVar6 = param_1 + param_3 * 0x40;
    FUN_18020e8a0(lVar7,lVar6 + -0x40);
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar6 + -0x20);
    FUN_18020d830(lVar7 + 0x28,lVar6 + -0x18);
    lVar6 = param_3 - 1;
  }
  while (param_2 < lVar6) {
    lVar5 = lVar6 + -1 >> 1;
    lVar4 = lVar5 * 0x40;
    lVar7 = lVar4 + param_1;
    iVar1 = *(int *)(lVar4 + 0x20 + param_1);
    if (iVar1 == *(int *)(param_4 + 0x20)) {
      bVar3 = (ulonglong)(*(longlong *)(param_4 + 0x30) - *(longlong *)(param_4 + 0x28) >> 5) <
              (ulonglong)(*(longlong *)(lVar7 + 0x30) - *(longlong *)(lVar7 + 0x28) >> 5);
    }
    else {
      bVar3 = *(int *)(param_4 + 0x20) <= iVar1;
    }
    if (!bVar3) break;
    lVar6 = lVar6 * 0x40 + param_1;
    FUN_18020e8a0(lVar6,lVar7);
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
    FUN_18020d830(lVar6 + 0x28,lVar7 + 0x28);
    lVar6 = lVar5;
  }
  param_1 = lVar6 * 0x40 + param_1;
  FUN_18020e8a0(param_1,param_4);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x20);
  FUN_18020d830(param_1 + 0x28,param_4 + 0x28);
  return;
}



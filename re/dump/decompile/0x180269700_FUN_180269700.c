// 0x180269700  FUN_180269700
// size=305 thunk=false
// signature: undefined FUN_180269700()
// status: ok


void FUN_180269700(int *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (1 < (int)(*param_1 - param_2)) {
    for (iVar6 = ~param_2 + *param_1; 0 < iVar6; iVar6 = iVar6 + -1) {
      lVar1 = (longlong)(int)param_2;
      for (uVar9 = param_2; (int)uVar9 < (int)(iVar6 + param_2); uVar9 = uVar9 + 1) {
        lVar4 = *(longlong *)(param_1 + 2);
        if (*(int *)(lVar4 + (lVar1 + 1) * 0xc) < *(int *)(lVar4 + lVar1 * 0xc)) {
          uVar2 = *(undefined8 *)(lVar4 + lVar1 * 0xc);
          uVar3 = *(undefined4 *)(lVar4 + 8 + lVar1 * 0xc);
          *(undefined8 *)(lVar4 + lVar1 * 0xc) = *(undefined8 *)(lVar4 + 0xc + lVar1 * 0xc);
          *(undefined4 *)(lVar4 + 8 + lVar1 * 0xc) = *(undefined4 *)(lVar4 + 0x14 + lVar1 * 0xc);
          *(undefined8 *)(lVar4 + 0xc + lVar1 * 0xc) = uVar2;
          *(undefined4 *)(lVar4 + 0x14 + lVar1 * 0xc) = uVar3;
        }
        lVar1 = lVar1 + 1;
      }
    }
    iVar6 = *param_1;
    iVar7 = param_2 + 1;
    if (iVar7 < iVar6) {
      do {
        lVar1 = (longlong)iVar7 * 0xc + -0xc;
        lVar5 = *(longlong *)(param_1 + 2);
        lVar4 = (longlong)iVar7 * 0xc;
        iVar8 = *(int *)(lVar4 + lVar5);
        if (iVar8 <= *(int *)((longlong)iVar7 * 0xc + -8 + lVar5)) {
          if (*(int *)(lVar1 + lVar5) < iVar8) {
            iVar8 = *(int *)(lVar1 + lVar5);
          }
          *(int *)(lVar1 + lVar5) = iVar8;
          lVar1 = lVar1 + *(longlong *)(param_1 + 2);
          iVar6 = *(int *)(lVar4 + 4 + *(longlong *)(param_1 + 2));
          if (iVar6 <= *(int *)(lVar1 + 4)) {
            iVar6 = *(int *)(lVar1 + 4);
          }
          *(int *)(lVar1 + 4) = iVar6;
          memmove((void *)(*(longlong *)(param_1 + 2) + lVar4),
                  (void *)(*(longlong *)(param_1 + 2) + lVar4 + 0xc),
                  ((longlong)*param_1 - (longlong)iVar7) * 0xc - 0xc);
          *param_1 = *param_1 + -1;
          iVar6 = *param_1;
          iVar7 = iVar7 + -1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  return;
}



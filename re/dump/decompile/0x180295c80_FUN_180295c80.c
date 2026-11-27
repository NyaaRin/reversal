// 0x180295c80  FUN_180295c80
// size=434 thunk=false
// signature: undefined FUN_180295c80()
// status: ok


void FUN_180295c80(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_2 + 6);
  lVar4 = *(longlong *)(param_2 + 4);
  lVar9 = param_1;
  if (0.0 < (*(float *)(lVar4 + 0xc) - (float)param_2[3]) *
            ((float)param_2[2] - *(float *)(lVar3 + 8)) -
            ((float)param_2[3] - *(float *)(lVar3 + 0xc)) *
            (*(float *)(lVar4 + 8) - (float)param_2[2])) {
    plVar8 = *(longlong **)(param_1 + 0x20);
    plVar1 = plVar8 + *(int *)(param_1 + 0x28);
    if (plVar8 < plVar1) {
      iVar7 = *(int *)(lVar3 + 4);
      do {
        iVar2 = *(int *)(*plVar8 + 4);
        if ((((iVar2 != iVar7) && (iVar2 != param_2[1])) && (iVar2 != *(int *)(lVar4 + 4))) &&
           (cVar5 = FUN_180268360(lVar3 + 8), cVar5 != '\0')) {
          iVar7 = 0;
          goto LAB_180295d4b;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 < plVar1);
    }
    iVar7 = 1;
  }
  else {
    iVar7 = 2;
  }
LAB_180295d4b:
  iVar2 = *param_2;
  if (iVar7 != iVar2) {
    if (iVar2 == 2) {
      uVar6 = *(int *)(lVar9 + 0x28) - 1;
      if (-1 < (int)uVar6) {
        lVar3 = *(longlong *)(lVar9 + 0x20);
        do {
          if (*(int *)(*(longlong *)(lVar3 + (ulonglong)uVar6 * 8) + 4) == param_2[1]) {
            *(undefined8 *)(lVar3 + (ulonglong)uVar6 * 8) =
                 *(undefined8 *)(lVar3 + -8 + (longlong)*(int *)(lVar9 + 0x28) * 8);
            *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + -1;
            break;
          }
          uVar6 = uVar6 - 1;
        } while (-1 < (int)uVar6);
      }
    }
    else if (iVar2 == 1) {
      uVar6 = *(int *)(param_1 + 0x18) - 1;
      if (-1 < (int)uVar6) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        do {
          if (*(int *)(*(longlong *)(lVar3 + (ulonglong)uVar6 * 8) + 4) == param_2[1]) {
            *(undefined8 *)(lVar3 + (ulonglong)uVar6 * 8) =
                 *(undefined8 *)(lVar3 + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            break;
          }
          uVar6 = uVar6 - 1;
        } while (-1 < (int)uVar6);
      }
    }
    if (iVar7 == 2) {
      *(int **)(*(longlong *)(lVar9 + 0x20) + (longlong)*(int *)(lVar9 + 0x28) * 8) = param_2;
      *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
      *param_2 = 2;
      return;
    }
    if (iVar7 == 1) {
      *(int **)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8) = param_2;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *param_2 = iVar7;
  }
  return;
}



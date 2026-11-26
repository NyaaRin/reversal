// 0x180296e30  FUN_180296e30
// size=980 thunk=false
// signature: undefined FUN_180296e30()
// status: ok


void FUN_180296e30(longlong param_1,uint *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *_Buf1;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  void *pvVar14;
  int local_res8;
  int local_res18;
  int local_res20;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  FUN_180297210(param_1,param_2,0);
  uVar12 = *param_2;
  puVar1 = param_2 + 2;
  while (((0 < (int)uVar12 &&
          (*(int *)(*(longlong *)puVar1 + -0x20 + (ulonglong)uVar12 * 0x48) == 0)) &&
         (*(longlong *)(*(longlong *)puVar1 + (ulonglong)uVar12 * 0x48 + -0x18) == 0))) {
    uVar12 = uVar12 - 1;
    *param_2 = uVar12;
  }
  local_res8 = 0;
  local_res18 = 0;
  if ((*(int *)(param_1 + 4) < 1) || ((int)uVar12 < 1)) {
    pvVar14 = (void *)0x0;
  }
  else {
    pvVar14 = (void *)(*(longlong *)puVar1 + ((longlong)(int)uVar12 * 9 + -9) * 8);
    if (pvVar14 != (void *)0x0) {
      iVar11 = *(int *)((longlong)pvVar14 + 0x28) + *(int *)((longlong)pvVar14 + 0x24);
      goto LAB_180296f0c;
    }
  }
  iVar11 = 0;
LAB_180296f0c:
  local_res20 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    do {
      piVar13 = (int *)((longlong)local_res20 * 0x20 + *(longlong *)(param_1 + 0x10));
      iVar7 = *piVar13;
      if (0 < iVar7) {
        iVar6 = iVar7 + -1;
        if (((*(int *)(*(longlong *)(piVar13 + 2) + 0x28 + (longlong)iVar6 * 0x48) != 0) ||
            (*(longlong *)(*(longlong *)(piVar13 + 2) + 0x30 + (longlong)iVar6 * 0x48) != 0)) ||
           (*piVar13 = iVar6, iVar7 = iVar6, 0 < iVar6)) {
          plVar2 = (longlong *)(piVar13 + 2);
          if (pvVar14 != (void *)0x0) {
            pvVar10 = (void *)*plVar2;
            iVar6 = memcmp(pvVar14,pvVar10,0x24);
            if (((iVar6 == 0) && (*(longlong *)((longlong)pvVar14 + 0x30) == 0)) &&
               (*(longlong *)((longlong)pvVar10 + 0x30) == 0)) {
              *(int *)((longlong)pvVar14 + 0x28) =
                   *(int *)((longlong)pvVar14 + 0x28) + *(int *)((longlong)pvVar10 + 0x28);
              iVar11 = iVar11 + *(int *)((longlong)pvVar10 + 0x28);
              memmove((void *)*plVar2,(void *)(*plVar2 + 0x48),(longlong)*piVar13 * 0x48 - 0x48);
              *piVar13 = *piVar13 + -1;
              iVar7 = *piVar13;
              if (iVar7 < 1) goto LAB_180297009;
            }
          }
          pvVar14 = (void *)(*plVar2 + (longlong)(iVar7 + -1) * 0x48);
        }
      }
LAB_180297009:
      local_res18 = local_res18 + piVar13[4];
      local_res8 = local_res8 + iVar7;
      iVar6 = 0;
      if (0 < iVar7) {
        do {
          lVar5 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          *(int *)(*(longlong *)(piVar13 + 2) + 0x24 + lVar5 * 0x48) = iVar11;
          iVar11 = iVar11 + *(int *)(*(longlong *)(piVar13 + 2) + 0x28 + lVar5 * 0x48);
        } while (iVar6 < *piVar13);
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 < *(int *)(param_1 + 4));
  }
  uVar12 = param_2[1];
  uVar8 = *param_2 + local_res8;
  if ((int)uVar12 < (int)uVar8) {
    if (uVar12 == 0) {
      uVar12 = 8;
    }
    else {
      uVar12 = (int)uVar12 / 2 + uVar12;
    }
    uVar3 = uVar8;
    if ((int)uVar8 < (int)uVar12) {
      uVar3 = uVar12;
    }
    FUN_18028ad40(param_2,uVar3);
  }
  *param_2 = uVar8;
  FUN_180260a20(param_2 + 4,param_2[4] + local_res18);
  iVar11 = 1;
  lVar5 = *(longlong *)puVar1;
  pvVar14 = (void *)(lVar5 + ((longlong)(int)*param_2 - (longlong)local_res8) * 0x48);
  pvVar10 = (void *)(*(longlong *)(param_2 + 6) +
                    ((longlong)(int)param_2[4] - (longlong)local_res18) * 2);
  if (1 < *(int *)(param_1 + 4)) {
    do {
      piVar13 = (int *)((longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0x10));
      if (*piVar13 != 0) {
        sVar9 = (longlong)*piVar13 * 0x48;
        memcpy(pvVar14,*(void **)(piVar13 + 2),sVar9);
        pvVar14 = (void *)((longlong)pvVar14 + sVar9);
      }
      if (piVar13[4] != 0) {
        sVar9 = (longlong)piVar13[4] * 2;
        memcpy(pvVar10,*(void **)(piVar13 + 6),sVar9);
        pvVar10 = (void *)((longlong)pvVar10 + sVar9);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 4));
    lVar5 = *(longlong *)puVar1;
  }
  *(void **)(param_2 + 0x12) = pvVar10;
  if ((*param_2 == 0) || (*(longlong *)(lVar5 + -0x18 + (longlong)(int)*param_2 * 0x48) != 0)) {
    FUN_1802922a0(param_2);
  }
  lVar5 = (longlong)(int)*param_2 * 9 + -9;
  _Buf1 = (undefined8 *)(*(longlong *)puVar1 + lVar5 * 8);
  if (*(int *)(*(longlong *)puVar1 + 0x28 + lVar5 * 8) != 0) {
    iVar11 = memcmp(_Buf1,param_2 + 0x18,0x24);
    if (iVar11 != 0) {
      FUN_1802922a0(param_2);
    }
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *_Buf1 = *(undefined8 *)(param_2 + 0x18);
  _Buf1[1] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1e);
  _Buf1[2] = *(undefined8 *)(param_2 + 0x1c);
  _Buf1[3] = uVar4;
  *(uint *)(_Buf1 + 4) = param_2[0x20];
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



// 0x180279b90  FUN_180279b90
// size=555 thunk=false
// signature: undefined FUN_180279b90()
// status: ok


void FUN_180279b90(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar5 + 0xec0);
  piVar1 = (int *)(lVar5 + 0x2098);
  *(int *)(lVar5 + 0x2078) = param_1;
  iVar10 = *(int *)(lVar5 + 0x209c);
  if (iVar10 < 0) {
    iVar9 = iVar10 / 2 + iVar10;
    iVar11 = 0;
    if (0 < iVar9) {
      iVar11 = iVar9;
    }
    if (iVar10 < iVar11) {
      pvVar8 = (void *)FUN_18026f580((longlong)iVar11 << 3);
      if (*(void **)(lVar5 + 0x20a0) != (void *)0x0) {
        memcpy(pvVar8,*(void **)(lVar5 + 0x20a0),(longlong)*piVar1 << 3);
        FUN_18026f680(*(undefined8 *)(lVar5 + 0x20a0));
      }
      *(void **)(lVar5 + 0x20a0) = pvVar8;
      *(int *)(lVar5 + 0x209c) = iVar11;
      iVar10 = iVar11;
    }
  }
  *piVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == *(int *)(lVar5 + 0x1eb4)) {
      uVar2 = *(uint *)(lVar5 + 0x1ff8);
      while ((uVar2 = uVar2 - 1, -1 < (int)uVar2 &&
             (*(int *)(*(longlong *)(lVar5 + 0x2000) + (ulonglong)uVar2 * 8 + 4) ==
              *(int *)(*(longlong *)(lVar5 + 0x1520) + 0x10)))) {
        FUN_18020dc30(piVar1);
      }
    }
    else {
      if (param_1 != *(int *)(*(longlong *)(lVar5 + 0x2070) + 0x428)) {
        return;
      }
      uVar3 = *(undefined4 *)(*(longlong *)(lVar5 + 0x2070) + 0x10);
      if (iVar10 == 0) {
        pvVar8 = (void *)FUN_18026f580(0x40);
        if (*(void **)(lVar5 + 0x20a0) != (void *)0x0) {
          memcpy(pvVar8,*(void **)(lVar5 + 0x20a0),(longlong)*piVar1 << 3);
          FUN_18026f680(*(undefined8 *)(lVar5 + 0x20a0));
        }
        *(void **)(lVar5 + 0x20a0) = pvVar8;
        *(undefined4 *)(lVar5 + 0x209c) = 8;
      }
      iVar10 = *piVar1;
      lVar6 = *(longlong *)(lVar5 + 0x20a0);
      *(int *)(lVar6 + (longlong)iVar10 * 8) = param_1;
      *(undefined4 *)(lVar6 + 4 + (longlong)iVar10 * 8) = uVar3;
      *piVar1 = *piVar1 + 1;
    }
    for (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x2070) + 0x3e0); lVar6 != 0;
        lVar6 = *(longlong *)(lVar6 + 0x3e0)) {
      iVar10 = *(int *)(lVar5 + 0x209c);
      uVar3 = *(undefined4 *)(lVar6 + 0x428);
      uVar4 = *(undefined4 *)(lVar6 + 0x10);
      if (*piVar1 == iVar10) {
        iVar11 = *piVar1 + 1;
        if (iVar10 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar10 / 2 + iVar10;
        }
        if (iVar11 < iVar9) {
          iVar11 = iVar9;
        }
        if (iVar10 < iVar11) {
          pvVar8 = (void *)FUN_18026f580((longlong)iVar11 << 3);
          if (*(void **)(lVar5 + 0x20a0) != (void *)0x0) {
            memcpy(pvVar8,*(void **)(lVar5 + 0x20a0),(longlong)*piVar1 << 3);
            FUN_18026f680(*(undefined8 *)(lVar5 + 0x20a0));
          }
          *(void **)(lVar5 + 0x20a0) = pvVar8;
          *(int *)(lVar5 + 0x209c) = iVar11;
        }
      }
      iVar10 = *piVar1;
      lVar7 = *(longlong *)(lVar5 + 0x20a0);
      *(undefined4 *)(lVar7 + (longlong)iVar10 * 8) = uVar3;
      *(undefined4 *)(lVar7 + 4 + (longlong)iVar10 * 8) = uVar4;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



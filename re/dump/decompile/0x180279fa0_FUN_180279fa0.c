// 0x180279fa0  FUN_180279fa0
// size=678 thunk=false
// signature: undefined FUN_180279fa0()
// status: ok


void FUN_180279fa0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *pvVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar5 + 0xec0);
  iVar4 = *(int *)(lVar5 + 0xc6c);
  if (iVar4 < 0) {
    iVar10 = iVar4 / 2 + iVar4;
    iVar13 = 0;
    if (0 < iVar10) {
      iVar13 = iVar10;
    }
    if (iVar4 < iVar13) {
      pvVar9 = (void *)FUN_18026f580((longlong)iVar13 << 3);
      if (*(void **)(lVar5 + 0xc70) != (void *)0x0) {
        memcpy(pvVar9,*(void **)(lVar5 + 0xc70),(longlong)*(int *)(lVar5 + 0xc68) << 3);
        FUN_18026f680(*(undefined8 *)(lVar5 + 0xc70));
      }
      *(void **)(lVar5 + 0xc70) = pvVar9;
      *(int *)(lVar5 + 0xc6c) = iVar13;
    }
  }
  *(undefined4 *)(lVar5 + 0xc68) = 0;
  plVar14 = *(longlong **)(lVar5 + 0x1220);
  plVar1 = plVar14 + *(int *)(lVar5 + 0x1218);
  for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
    lVar6 = *plVar14;
    plVar11 = *(longlong **)(lVar6 + 0x48);
    plVar2 = plVar11 + *(int *)(lVar6 + 0x40);
    for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
      lVar7 = *plVar11;
      *(undefined2 *)(lVar7 + 0x54) = *(undefined2 *)(lVar6 + 0x2d4);
      iVar4 = *(int *)(lVar5 + 0xc6c);
      if (*(int *)(lVar5 + 0xc68) == iVar4) {
        iVar13 = *(int *)(lVar5 + 0xc68) + 1;
        if (iVar4 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar4 / 2 + iVar4;
        }
        if (iVar13 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar4 < iVar13) {
          pvVar9 = (void *)FUN_18026f580((longlong)iVar13 << 3);
          if (*(void **)(lVar5 + 0xc70) != (void *)0x0) {
            memcpy(pvVar9,*(void **)(lVar5 + 0xc70),(longlong)*(int *)(lVar5 + 0xc68) << 3);
            FUN_18026f680(*(undefined8 *)(lVar5 + 0xc70));
          }
          *(void **)(lVar5 + 0xc70) = pvVar9;
          *(int *)(lVar5 + 0xc6c) = iVar13;
        }
      }
      *(longlong *)(*(longlong *)(lVar5 + 0xc70) + (longlong)*(int *)(lVar5 + 0xc68) * 8) = lVar7;
      *(int *)(lVar5 + 0xc68) = *(int *)(lVar5 + 0xc68) + 1;
    }
  }
  puVar12 = *(undefined8 **)(lVar5 + 0x2798);
  puVar3 = puVar12 + *(int *)(lVar5 + 0x2790);
  for (; puVar12 != puVar3; puVar12 = puVar12 + 1) {
    iVar4 = *(int *)(lVar5 + 0xc6c);
    uVar8 = *puVar12;
    if (*(int *)(lVar5 + 0xc68) == iVar4) {
      iVar13 = *(int *)(lVar5 + 0xc68) + 1;
      if (iVar4 == 0) {
        iVar10 = 8;
      }
      else {
        iVar10 = iVar4 / 2 + iVar4;
      }
      if (iVar13 < iVar10) {
        iVar13 = iVar10;
      }
      if (iVar4 < iVar13) {
        pvVar9 = (void *)FUN_18026f580((longlong)iVar13 << 3);
        if (*(void **)(lVar5 + 0xc70) != (void *)0x0) {
          memcpy(pvVar9,*(void **)(lVar5 + 0xc70),(longlong)*(int *)(lVar5 + 0xc68) << 3);
          FUN_18026f680(*(undefined8 *)(lVar5 + 0xc70));
        }
        *(void **)(lVar5 + 0xc70) = pvVar9;
        *(int *)(lVar5 + 0xc6c) = iVar13;
      }
    }
    *(undefined8 *)(*(longlong *)(lVar5 + 0xc70) + (longlong)*(int *)(lVar5 + 0xc68) * 8) = uVar8;
    *(int *)(lVar5 + 0xc68) = *(int *)(lVar5 + 0xc68) + 1;
  }
  return;
}



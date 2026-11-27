// 0x1802a9890  FUN_1802a9890
// size=519 thunk=false
// signature: undefined FUN_1802a9890()
// status: ok


void FUN_1802a9890(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  void *local_40;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar7 = 0;
  lVar11 = *(longlong *)(lVar2 + 0x27e0);
  piVar6 = (int *)0x0;
  if (lVar11 != 0) {
    piVar6 = (int *)(lVar11 + 4);
  }
  piVar1 = (int *)(lVar2 + 0x27d8);
  if (piVar6 != (int *)0x0) {
    do {
      if (*piVar6 != 0) {
        iVar7 = iVar7 + 0x14 + (short)piVar6[3] * 0x10;
      }
      piVar5 = (int *)((longlong)piVar6[-1] + (longlong)piVar6);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)((longlong)*piVar1 + 4 + lVar11)) {
        piVar6 = piVar5;
      }
    } while (piVar6 != (int *)0x0);
  }
  if (iVar7 != *piVar1) {
    local_40 = (void *)0x0;
    iVar9 = 0;
    if (0 < iVar7) {
      local_40 = (void *)FUN_18026f580((longlong)iVar7);
      iVar9 = iVar7;
    }
    piVar6 = (int *)0x0;
    iVar7 = 0;
    if (*(longlong *)(lVar2 + 0x27e0) != 0) {
      piVar6 = (int *)(*(longlong *)(lVar2 + 0x27e0) + 4);
    }
    while (piVar6 != (int *)0x0) {
      _Dst = local_40;
      iVar12 = iVar7;
      if (*piVar6 != 0) {
        lVar11 = (longlong)(short)piVar6[3] * 0x10;
        iVar10 = (int)lVar11 + 0x18;
        iVar12 = iVar7 + iVar10;
        if (iVar9 < iVar12) {
          if (iVar9 == 0) {
            iVar3 = 8;
            iVar4 = 0;
          }
          else {
            iVar3 = iVar9 / 2 + iVar9;
            iVar4 = iVar9;
          }
          iVar8 = iVar12;
          if (iVar12 < iVar3) {
            iVar8 = iVar3;
          }
          if ((iVar4 < iVar8) &&
             (_Dst = (void *)FUN_18026f580((longlong)iVar8), iVar9 = iVar8, local_40 != (void *)0x0)
             ) {
            memcpy(_Dst,local_40,(longlong)iVar7);
            FUN_18026f680(local_40);
          }
        }
        *(int *)((longlong)iVar7 + (longlong)_Dst) = iVar10;
        memcpy((void *)((longlong)iVar7 + 4 + (longlong)_Dst),piVar6,lVar11 + 0x14);
      }
      piVar5 = (int *)((longlong)piVar6[-1] + (longlong)piVar6);
      piVar6 = (int *)0x0;
      iVar7 = iVar12;
      local_40 = _Dst;
      if (piVar5 != (int *)(*(longlong *)(lVar2 + 0x27e0) + (longlong)*piVar1 + 4)) {
        piVar6 = piVar5;
      }
    }
    *piVar1 = iVar7;
    *(int *)(lVar2 + 0x27dc) = iVar9;
    lVar11 = *(longlong *)(lVar2 + 0x27e0);
    *(void **)(lVar2 + 0x27e0) = local_40;
    if (lVar11 != 0) {
      FUN_18026f680();
    }
  }
  return;
}



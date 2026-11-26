// 0x18027a250  FUN_18027a250
// size=473 thunk=false
// signature: undefined FUN_18027a250()
// status: ok


void FUN_18027a250(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  void *_Dst;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar8 = *(char *)(lVar9 + 0x10);
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
    cVar8 = *(char *)(lVar9 + 0x10);
  }
  lVar3 = *(longlong *)(lVar9 + 0xec0);
  if ((*(byte *)(lVar3 + 0x2c) & 0x10) == 0) {
    plVar6 = *(longlong **)(lVar3 + 0x1220);
    plVar1 = plVar6 + *(int *)(lVar3 + 0x1218);
    if (plVar6 != plVar1) {
      do {
        lVar4 = *plVar6;
        plVar6 = plVar6 + 1;
        *(undefined1 *)(lVar4 + 0x50) = 1;
      } while (plVar6 != plVar1);
      cVar8 = *(char *)(lVar9 + 0x10);
    }
  }
  if (*(float *)(lVar3 + 0x1214) != 0.0) {
    *(float *)(lVar3 + 0xc78) = *(float *)(lVar3 + 0x1214);
    *(undefined4 *)(lVar3 + 0x1214) = 0;
  }
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar9 + 0xec0);
  lVar4 = *(longlong *)(lVar9 + 0x60);
  if ((*(longlong *)(lVar4 + 0x2b0) == 0) || (*(int *)(lVar4 + 0x68) == 0)) {
    FUN_180299180(lVar4);
  }
  lVar9 = *(longlong *)(lVar9 + 0x68);
  if (lVar9 == 0) {
    lVar9 = **(longlong **)(lVar4 + 0x70);
  }
  fVar11 = *(float *)(lVar3 + 0xc78);
  if (fVar11 <= 0.0) {
    fVar11 = *(float *)(lVar9 + 0x1c);
    if (*(float *)(lVar9 + 0x1c) <= 0.0) {
      fVar11 = DAT_180381024;
    }
    *(float *)(lVar3 + 0xc78) = fVar11;
  }
  *(float *)(lVar3 + 0x123c) = fVar11;
  *(longlong *)(lVar3 + 0x1228) = lVar9;
  *(undefined4 *)(lVar3 + 0x1238) = 0;
  FUN_18027a5f0(lVar9,fVar11,0);
  iVar2 = *(int *)(lVar3 + 0x1fec);
  if (*(int *)(lVar3 + 0x1fe8) == iVar2) {
    iVar10 = *(int *)(lVar3 + 0x1fe8) + 1;
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    if (iVar10 < iVar5) {
      iVar10 = iVar5;
    }
    if (iVar2 < iVar10) {
      _Dst = (void *)FUN_18026f580((longlong)iVar10 << 4);
      if (*(void **)(lVar3 + 0x1ff0) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x1ff0),(longlong)*(int *)(lVar3 + 0x1fe8) << 4);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x1ff0));
      }
      *(void **)(lVar3 + 0x1ff0) = _Dst;
      *(int *)(lVar3 + 0x1fec) = iVar10;
    }
  }
  lVar7 = (longlong)*(int *)(lVar3 + 0x1fe8);
  lVar4 = *(longlong *)(lVar3 + 0x1ff0);
  *(longlong *)(lVar4 + lVar7 * 0x10) = lVar9;
  *(float *)(lVar4 + 8 + lVar7 * 0x10) = fVar11;
  *(float *)(lVar4 + 0xc + lVar7 * 0x10) = fVar11;
  *(int *)(lVar3 + 0x1fe8) = *(int *)(lVar3 + 0x1fe8) + 1;
  return;
}



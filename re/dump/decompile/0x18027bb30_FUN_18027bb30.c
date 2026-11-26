// 0x18027bb30  FUN_18027bb30
// size=426 thunk=false
// signature: undefined FUN_18027bb30()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18027bb30(undefined4 param_1,byte param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  
  pcVar8 = (char *)FUN_180267330();
  if (*pcVar8 == '\0') {
    return false;
  }
  fVar1 = *(float *)(pcVar8 + 4);
  if (fVar1 < 0.0) {
    return false;
  }
  bVar9 = param_2 | 1;
  if ((param_2 & 0xfe) == 0) {
    bVar9 = param_2;
  }
  if (fVar1 == 0.0) goto LAB_18027bcb3;
  if ((bVar9 & 1) == 0) {
    return false;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  bVar5 = bVar9 & 0xe;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  if (bVar5 == 2) {
LAB_18027bc11:
    fVar11 = *(float *)(lVar3 + 0x94);
    fVar13 = *(float *)(lVar3 + 0x98);
  }
  else if (bVar5 == 4) {
    fVar11 = *(float *)(lVar3 + 0x94) * DAT_180380b18;
    fVar13 = *(float *)(lVar3 + 0x98) * DAT_180380b3c;
  }
  else {
    if (bVar5 != 8) goto LAB_18027bc11;
    fVar11 = *(float *)(lVar3 + 0x94) * DAT_180380b18;
    fVar13 = *(float *)(lVar3 + 0x98) * DAT_180380a6c;
  }
  if ((fVar1 <= fVar11) || (iVar7 = FUN_18027b2f0(param_1,fVar11,fVar13), iVar7 < 1)) {
    return false;
  }
  if ((bVar9 & 0xf0) != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    dVar12 = (*(double *)(lVar2 + 0x10) - (double)fVar1) + _DAT_180380aa8;
    bVar4 = true;
    if ((bVar9 & 0x20) != 0) {
      bVar4 = true;
      if (dVar12 < *(double *)(lVar2 + 0x15e0)) {
        bVar4 = false;
      }
    }
    bVar10 = bVar4;
    if (((bVar9 & 0x40) != 0) && (bVar10 = false, *(double *)(lVar2 + 0x15e8) <= dVar12)) {
      bVar10 = bVar4;
    }
    if (((char)bVar9 < '\0') && (dVar12 < *(double *)(lVar2 + 0x15f0))) {
      return false;
    }
    if (!bVar10) {
      return false;
    }
  }
LAB_18027bcb3:
  cVar6 = FUN_18027deb0(param_1,param_3);
  return cVar6 != '\0';
}



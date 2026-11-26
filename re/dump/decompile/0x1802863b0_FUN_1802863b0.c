// 0x1802863b0  FUN_1802863b0
// size=495 thunk=false
// signature: undefined FUN_1802863b0()
// status: ok


void FUN_1802863b0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar4 = (longlong)*(int *)(lVar2 + 0x207c);
  lVar3 = *(longlong *)(lVar2 + 0x2070);
  iVar5 = *(int *)(lVar2 + 0x2120);
  uVar1 = *(uint *)(lVar2 + 0x2114);
  fVar8 = *(float *)(lVar3 + 0x3fc + lVar4 * 0x10);
  fVar11 = *(float *)(lVar3 + 0x404 + lVar4 * 0x10);
  if (*(int *)(lVar2 + 0x207c) == 1) {
    fVar9 = *(float *)(lVar3 + 0x30);
    fVar10 = *(float *)(lVar3 + 0x34);
  }
  else {
    fVar9 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x58);
    fVar10 = *(float *)(lVar3 + 0x44) + *(float *)(lVar3 + 0x5c);
  }
  if (iVar5 == 0) {
    if ((uVar1 & 5) == 0) {
      return;
    }
    fVar10 = fVar8;
    fVar6 = fVar9;
    if ((uVar1 & 4) != 0) {
      iVar5 = 2;
      fVar7 = (float)((uint)(fVar11 - fVar8) ^ DAT_1803817f0);
      fVar10 = fVar7 + fVar8;
      fVar11 = fVar7 + fVar11;
    }
  }
  else if (iVar5 == 1) {
    if ((uVar1 & 5) == 0) {
      return;
    }
    fVar9 = (float)(*(uint *)(lVar3 + 0x58) ^ DAT_1803817f0);
    fVar10 = fVar8;
    fVar6 = fVar9;
    if ((uVar1 & 4) != 0) {
      iVar5 = 3;
      fVar10 = fVar8 + (fVar11 - fVar8);
      fVar11 = fVar11 + (fVar11 - fVar8);
    }
  }
  else {
    fVar6 = *(float *)(lVar3 + 0x3f8 + lVar4 * 0x10);
    fVar9 = *(float *)(lVar3 + 0x400 + lVar4 * 0x10);
    if (iVar5 == 2) {
      if ((uVar1 & 10) == 0) {
        return;
      }
      fVar11 = fVar10;
      if ((uVar1 & 8) != 0) {
        iVar5 = 0;
        fVar8 = (float)((uint)(fVar9 - fVar6) ^ DAT_1803817f0);
        fVar9 = fVar8 + fVar9;
        fVar6 = fVar8 + fVar6;
      }
    }
    else {
      if (iVar5 != 3) {
        return;
      }
      if ((uVar1 & 10) == 0) {
        return;
      }
      fVar10 = (float)(*(uint *)(lVar3 + 0x5c) ^ DAT_1803817f0);
      fVar11 = fVar10;
      if ((uVar1 & 8) != 0) {
        iVar5 = 1;
        fVar8 = fVar9 - fVar6;
        fVar6 = fVar6 + fVar8;
        fVar9 = fVar9 + fVar8;
      }
    }
  }
  *(float *)(lVar3 + 0x3f8 + lVar4 * 0x10) = fVar6;
  *(float *)(lVar3 + 0x3fc + lVar4 * 0x10) = fVar10;
  *(float *)(lVar3 + 0x400 + lVar4 * 0x10) = fVar9;
  *(float *)(lVar3 + 0x404 + lVar4 * 0x10) = fVar11;
  FUN_180282d00(0);
  FUN_180282d00(1);
  FUN_180283be0(*(undefined4 *)(lVar2 + 0x2120),iVar5,uVar1,*(undefined4 *)(lVar2 + 0x2118));
  return;
}



// 0x180283530  FUN_180283530
// size=801 thunk=false
// signature: undefined FUN_180283530()
// status: ok


void FUN_180283530(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar7 + 0xec0);
  lVar5 = *(longlong *)(lVar7 + 0x1520);
  fVar1 = *(float *)(lVar7 + 0x1f14);
  fStack_24 = *(float *)(lVar7 + 0x1f18);
  fVar9 = *(float *)(lVar7 + 0x1f1c);
  fStack_1c = *(float *)(lVar7 + 0x1f20);
  iVar2 = *(int *)(lVar7 + 0x1ef8);
  uVar3 = *(uint *)(lVar7 + 0x1efc);
  local_28 = fVar1;
  fStack_20 = fVar9;
  if (*(char *)(lVar5 + 0x178) == '\0') {
    fStack_20 = *(float *)(lVar5 + 0x268);
    fVar10 = *(float *)(lVar5 + 0x270);
    local_28 = fStack_20;
    if ((fStack_20 <= fVar1) && (local_28 = fVar10, fVar1 <= fVar10)) {
      local_28 = fVar1;
    }
    if ((fStack_20 <= fVar9) && (fStack_20 = fVar10, fVar9 <= fVar10)) {
      fStack_20 = fVar9;
    }
  }
  if (((((*(char *)(lVar7 + 0x20d2) != '\0') &&
        (*(int *)(lVar7 + 0x207c) == *(int *)(lVar5 + 0x170))) && ((uVar3 & 0x40) == 0)) &&
      (((uVar3 & 4) == 0 || (*(int *)(lVar7 + 0x20e0) == 0)))) &&
     (FUN_1802833f0(lVar7 + 0x20d8), (uVar3 & 4) == 0)) {
    *(undefined1 *)(lVar7 + 0x20d2) = 0;
    FUN_180283e10();
  }
  if (((*(char *)(lVar7 + 0x2111) != '\0') && ((uVar3 & 0x40) == 0)) &&
     ((uVar4 = *(uint *)(lVar7 + 0x2114), (uVar4 >> 9 & 1) != 0 ||
      ((*(uint *)(lVar5 + 0x14) & 0x10000) == 0)))) {
    if ((uVar4 >> 10 & 1) == 0) {
      if ((*(int *)(lVar7 + 0x206c) != iVar2) || ((uVar4 & 0x10) != 0)) {
        lVar8 = 0x2158;
        if (lVar5 != *(longlong *)(lVar7 + 0x2070)) {
          lVar8 = 0x21c8;
        }
        cVar6 = FUN_180282f60(lVar8 + lVar7,&local_28);
        if (cVar6 != '\0') {
          FUN_1802833f0(lVar8 + lVar7);
        }
        if (((((*(byte *)(lVar7 + 0x2114) & 0x20) != 0) &&
             (fVar1 = *(float *)(lVar5 + 0x234), fStack_24 < fVar1)) &&
            (fVar9 = *(float *)(lVar5 + 0x22c), fVar9 < fStack_1c)) &&
           ((local_28 < *(float *)(lVar5 + 0x230) &&
            (*(float *)(lVar5 + 0x228) <= fStack_20 && fStack_20 != *(float *)(lVar5 + 0x228))))) {
          fVar10 = fVar9;
          if ((fVar9 <= fStack_1c) && (fVar10 = fVar1, fStack_1c <= fVar1)) {
            fVar10 = fStack_1c;
          }
          if ((fVar9 <= fStack_24) && (fVar9 = fVar1, fStack_24 <= fVar1)) {
            fVar9 = fStack_24;
          }
          if (((fStack_1c - fStack_24) * DAT_180380b10 <= fVar10 - fVar9) &&
             (cVar6 = FUN_180282f60(lVar7 + 0x2190,&local_28), cVar6 != '\0')) {
            FUN_1802833f0(lVar7 + 0x2190);
          }
        }
      }
    }
    else {
      FUN_180283860(iVar2,uVar3,uVar4);
    }
  }
  fVar1 = fStack_24;
  if (*(int *)(lVar7 + 0x206c) == iVar2) {
    if (*(longlong *)(lVar7 + 0x2070) != lVar5) {
      FUN_180282c60(lVar5);
    }
    *(undefined4 *)(lVar7 + 0x207c) = *(undefined4 *)(lVar5 + 0x170);
    FUN_180279b90(*(undefined4 *)(lVar7 + 0x1eb4));
    *(undefined4 *)(lVar7 + 0x2078) = *(undefined4 *)(lVar7 + 0x1eb4);
    *(undefined1 *)(lVar7 + 0x206b) = 1;
    *(uint *)(lVar7 + 0x2080) = uVar3;
    if ((*(uint *)(lVar7 + 0x1efc) & 0x200000) != 0) {
      *(undefined8 *)(lVar7 + 0x20c8) = *(undefined8 *)(lVar7 + 0x1ed0);
    }
    fVar9 = *(float *)(lVar5 + 300);
    fVar10 = *(float *)(lVar5 + 0x128);
    lVar7 = (longlong)*(int *)(lVar5 + 0x170);
    *(float *)(lVar5 + 0x3f8 + lVar7 * 0x10) = local_28 - fVar10;
    *(float *)(lVar5 + 0x3fc + lVar7 * 0x10) = fVar1 - fVar9;
    *(float *)(lVar5 + 0x400 + lVar7 * 0x10) = fStack_20 - fVar10;
    *(float *)(lVar5 + 0x404 + lVar7 * 0x10) = fStack_1c - fVar9;
  }
  return;
}



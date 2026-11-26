// 0x180282f60  FUN_180282f60
// size=1159 thunk=false
// signature: undefined FUN_180282f60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180282f60(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  uVar4 = (ulonglong)*(uint *)(lVar3 + 0x170);
  if (*(uint *)(lVar2 + 0x207c) != *(uint *)(lVar3 + 0x170)) {
LAB_1802833e0:
    return uVar4 & 0xffffffffffffff00;
  }
  *(int *)(lVar2 + 0x214c) = *(int *)(lVar2 + 0x214c) + 1;
  uVar4 = *(ulonglong *)(lVar2 + 0x2070);
  fVar10 = *param_2;
  fVar7 = param_2[1];
  fVar12 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = fVar10;
  fVar11 = fVar7;
  fVar14 = fVar12;
  fVar15 = fVar8;
  if (*(ulonglong *)(lVar3 + 0x3b0) == uVar4) {
    fVar13 = *(float *)(lVar3 + 0x274);
    if ((((fVar13 <= fVar7) || (fVar15 = *(float *)(lVar3 + 0x26c), fVar8 <= fVar15)) ||
        (fVar16 = *(float *)(lVar3 + 0x270), fVar16 <= fVar10)) ||
       (fVar14 = *(float *)(lVar3 + 0x268), fVar12 <= fVar14)) goto LAB_1802833e0;
    fVar11 = fVar15;
    if ((fVar15 <= fVar7) && (fVar11 = fVar13, fVar7 <= fVar13)) {
      fVar11 = fVar7;
    }
    fVar9 = fVar14;
    if ((fVar14 <= fVar10) && (fVar9 = fVar16, fVar10 <= fVar16)) {
      fVar9 = fVar10;
    }
    if ((fVar15 <= fVar8) && (fVar15 = fVar13, fVar8 <= fVar13)) {
      fVar15 = fVar8;
    }
    if ((fVar14 <= fVar12) && (fVar14 = fVar16, fVar12 <= fVar16)) {
      fVar14 = fVar12;
    }
  }
  fVar10 = *(float *)(lVar2 + 0x2134);
  fVar7 = *(float *)(lVar2 + 0x212c);
  fVar12 = *(float *)(lVar2 + 0x2130);
  if (fVar7 <= fVar14) {
    if (fVar9 <= fVar10) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = fVar9 - fVar10;
    }
  }
  else {
    fVar8 = fVar14 - fVar7;
  }
  fVar17 = *(float *)(lVar2 + 0x2138) - fVar12;
  fVar16 = (fVar15 - fVar11) * DAT_180380a3c + fVar11;
  fVar13 = (fVar15 - fVar11) * DAT_180380b3c + fVar11;
  fVar18 = fVar17 * DAT_180380a3c + fVar12;
  fVar17 = fVar17 * DAT_180380b3c + fVar12;
  if (fVar18 <= fVar13) {
    if (fVar17 < fVar16) {
      fVar13 = fVar16 - fVar17;
      goto LAB_18028318f;
    }
    fVar13 = 0.0;
  }
  else {
    fVar13 = fVar13 - fVar18;
LAB_18028318f:
    if ((fVar13 != 0.0) && (fVar8 != 0.0)) {
      if (fVar8 <= 0.0) {
        fVar8 = fVar8 / DAT_180381278 + DAT_180381384;
      }
      else {
        fVar8 = fVar8 / DAT_180381278 + DAT_180380bb0;
      }
    }
  }
  fVar16 = (float)((uint)fVar13 & _DAT_1803817c0) + (float)((uint)fVar8 & _DAT_1803817c0);
  fVar12 = (fVar11 + fVar15) - (*(float *)(lVar2 + 0x2138) + fVar12);
  fVar10 = (fVar9 + fVar14) - (fVar10 + fVar7);
  fVar7 = (float)((uint)fVar12 & _DAT_1803817c0) + (float)((uint)fVar10 & _DAT_1803817c0);
  if ((fVar8 == 0.0) && (fVar13 == 0.0)) {
    if ((fVar10 == 0.0) && (fVar12 == 0.0)) {
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x206c);
      uVar5 = (uint)(*(uint *)(lVar2 + 0x206c) <= *(uint *)(lVar2 + 0x1ef8));
      fVar10 = 0.0;
      fVar12 = 0.0;
      fVar15 = 0.0;
    }
    else {
      fVar15 = fVar7;
      if ((float)((uint)fVar10 & _DAT_1803817c0) <= (float)((uint)fVar12 & _DAT_1803817c0))
      goto LAB_1802832a9;
      uVar5 = (uint)(0.0 < fVar10);
    }
  }
  else {
    fVar10 = fVar8;
    fVar12 = fVar13;
    fVar15 = fVar16;
    if ((float)((uint)fVar8 & _DAT_1803817c0) <= (float)((uint)fVar13 & _DAT_1803817c0)) {
LAB_1802832a9:
      uVar5 = (0.0 < fVar12) + 2;
    }
    else {
      uVar5 = (uint)(0.0 < fVar8);
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x2120);
  bVar6 = 0;
  if (uVar5 == uVar1) {
    if (fVar16 < *(float *)(param_1 + 0x24)) {
      *(float *)(param_1 + 0x24) = fVar16;
      *(float *)(param_1 + 0x28) = fVar7;
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (fVar16 == *(float *)(param_1 + 0x24)) {
      if (*(float *)(param_1 + 0x28) <= fVar7) {
        if (fVar7 == *(float *)(param_1 + 0x28)) {
          if (uVar1 - 2 < 2) {
            fVar8 = fVar13;
          }
          bVar6 = 0;
          if (fVar8 < 0.0) {
            bVar6 = 1;
          }
        }
      }
      else {
        *(float *)(param_1 + 0x28) = fVar7;
        bVar6 = 1;
      }
    }
  }
  if ((((*(float *)(param_1 + 0x24) == DAT_180381308) && (fVar15 < *(float *)(param_1 + 0x2c))) &&
      (*(int *)(lVar2 + 0x207c) == 1)) &&
     ((*(uint *)(*(longlong *)(lVar2 + 0x2070) + 0x14) & 0x10000000) == 0)) {
    if (uVar1 == 0) {
      if (0.0 <= fVar10) {
        return (ulonglong)bVar6;
      }
    }
    else if (uVar1 == 1) {
      if (fVar10 <= 0.0) {
        return (ulonglong)bVar6;
      }
    }
    else if (uVar1 == 2) {
      if (0.0 <= fVar12) {
        return (ulonglong)bVar6;
      }
    }
    else if ((uVar1 != 3) || (fVar12 <= 0.0)) goto LAB_1802833d8;
    *(float *)(param_1 + 0x2c) = fVar15;
    bVar6 = 1;
  }
LAB_1802833d8:
  return (ulonglong)bVar6;
}



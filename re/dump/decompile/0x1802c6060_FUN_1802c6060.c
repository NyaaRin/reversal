// 0x1802c6060  FUN_1802c6060
// size=350 thunk=false
// signature: undefined FUN_1802c6060()
// status: ok


void FUN_1802c6060(longlong param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar13;
  float fVar14;
  ulonglong uVar8;
  ulonglong uVar12;
  
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    if ((param_2[1] & 0xc0) == 0) {
      fVar14 = *(float *)(param_1 + 0x60);
    }
    else {
      fVar14 = 0.0;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    fVar14 = *(float *)(param_1 + 0x38) - fVar14;
    iVar10 = 1;
    if (param_3 < fVar14 + (float)param_2[4]) {
      iVar10 = -1;
    }
    uVar5 = ((longlong)param_2 - lVar4) / 0x2c;
    if (-1 < (int)uVar5) {
      fVar1 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0xcdc);
      uVar6 = uVar5 & 0xffffffff;
      uVar12 = uVar5 & 0xffffffff;
      while( true ) {
        uVar8 = uVar6;
        iVar11 = (int)uVar12;
        iVar7 = (int)uVar8;
        if (*(int *)(param_1 + 8) <= iVar7) break;
        lVar9 = uVar8 * 0x2c;
        uVar2 = *(uint *)(lVar9 + 4 + lVar4);
        if (((((uVar2 & 0x20) != 0) || ((uVar2 & 0xc0) != (param_2[1] & 0xc0))) ||
            ((fVar13 = fVar14 + *(float *)(lVar9 + 0x10 + lVar4), iVar11 = iVar7, iVar10 < 0 &&
             (fVar13 - fVar1 < param_3)))) ||
           (((0 < iVar10 && (param_3 < fVar13 + *(float *)(lVar9 + 0x14 + lVar4) + fVar1)) ||
            (uVar6 = (ulonglong)(uint)(iVar7 + iVar10), uVar12 = uVar8, iVar7 + iVar10 < 0))))
        break;
      }
      if (iVar11 != (int)uVar5) {
        uVar3 = *param_2;
        *(short *)(param_1 + 0x80) = (short)iVar11 - (short)uVar5;
        *(undefined4 *)(param_1 + 0x7c) = uVar3;
      }
    }
  }
  return;
}



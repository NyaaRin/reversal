// 0x180117ea0  FUN_180117ea0
// size=499 thunk=false
// signature: undefined FUN_180117ea0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180117ea0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  ULONGLONG UVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  int *piVar9;
  float fVar10;
  undefined8 *puVar11;
  ULONGLONG *pUVar12;
  undefined4 *puVar13;
  float fVar14;
  
  FUN_1801142a0();
  cVar3 = FUN_180117ca0(param_1);
  pfVar7 = DAT_1803fa608;
  fVar14 = 0.0;
  if (DAT_1803fa608 != (float *)0x0) {
    fVar14 = DAT_1803fa608[1];
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar9 = (int *)(lVar1 + 0xfc0);
  pcVar8 = (char *)(lVar1 + 4000);
  pUVar12 = (ULONGLONG *)(lVar1 + 0xf98);
  fVar10 = *(float *)(lVar1 + 0xfa8);
  puVar11 = (undefined8 *)(lVar1 + 0xf90);
  puVar13 = (undefined4 *)(lVar1 + 0xfa4);
  if (fVar10 != fVar14) {
    *(float *)(lVar1 + 0xfa8) = fVar14;
    *(undefined8 *)(lVar1 + 0xfb0) = 0;
    *(undefined8 *)(lVar1 + 0xfb8) = 0;
    *piVar9 = 0;
    *pcVar8 = '\0';
    *puVar13 = 0;
    *pUVar12 = 0;
    *puVar11 = 0;
    fVar10 = fVar14;
  }
  iVar6 = *piVar9;
  if (iVar6 == 0) {
    *pcVar8 = '\0';
LAB_180117f60:
    *(char *)(iVar6 + lVar1 + 0xfb0) = cVar3;
  }
  else if (iVar6 < 0x10) goto LAB_180117f60;
  uVar2 = DAT_180423588;
  if (cVar3 != '\0') {
    UVar5 = GetTickCount64();
    pfVar7 = DAT_1803fa608;
    *puVar11 = uVar2;
    *pUVar12 = UVar5;
    *puVar13 = 1;
    fVar10 = *(float *)(lVar1 + 0xfa8);
  }
  uVar4 = 0;
  *piVar9 = *piVar9 + 1;
  if (DAT_180423660 != (code *)0x0) {
    uVar4 = (*DAT_180423660)(param_1);
    fVar10 = *(float *)(lVar1 + 0xfa8);
    pfVar7 = DAT_1803fa608;
  }
  fVar14 = 0.0;
  if (pfVar7 != (float *)0x0) {
    fVar14 = pfVar7[1];
  }
  if (fVar10 != fVar14) {
    *piVar9 = 0;
    *pcVar8 = '\0';
    *puVar13 = 0;
    *pUVar12 = 0;
    *puVar11 = 0;
    return uVar4;
  }
  iVar6 = *piVar9;
  if (0 < iVar6) {
    iVar6 = iVar6 + -1;
    *piVar9 = iVar6;
    if (0xf < iVar6) {
      cVar3 = *pcVar8;
      goto LAB_180118027;
    }
    if (0xf < (ulonglong)(longlong)iVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d8348();
    }
    *(undefined1 *)(iVar6 + lVar1 + 0xfb0) = 0;
  }
  cVar3 = *pcVar8;
  if (iVar6 == 0) {
    *pcVar8 = '\0';
    *puVar13 = 0;
    *pUVar12 = 0;
    *puVar11 = 0;
  }
LAB_180118027:
  if (cVar3 != '\0') {
    if (pfVar7 == (float *)0x0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = *pfVar7;
      if ((0.0 < fVar14) && (fVar14 - _DAT_1803e90d0 < DAT_180380db8)) {
        return uVar4;
      }
    }
    DAT_1804236ac = DAT_1804236ac + 1;
    PTR_s_Screen_capture_1803e90c8 = s_Render_target_copy_180351108;
    _DAT_1803e90d0 = fVar14;
  }
  return uVar4;
}



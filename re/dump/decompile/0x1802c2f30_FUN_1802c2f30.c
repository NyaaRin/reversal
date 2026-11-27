// 0x1802c2f30  FUN_1802c2f30
// size=1544 thunk=false
// signature: undefined FUN_1802c2f30()
// status: ok


void FUN_1802c2f30(int param_1,char *param_2,char *param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  char local_88;
  char local_86;
  undefined2 local_72;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar21 = *param_2;
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar15 = *(longlong *)(lVar3 + 0x1520);
  local_88 = *param_3;
  piVar4 = *(int **)(lVar3 + 0x24a8);
  lVar5 = *(longlong *)(piVar4 + 10);
  if (local_88 != '\0') {
    *(undefined1 *)((longlong)piVar4 + 0x52) = 1;
  }
  local_86 = '\0';
  if ((*(byte *)(lVar3 + 0x1f00) & 1) != 0) {
    local_86 = FUN_18026ee60(0x20);
  }
  if ((*(char *)((longlong)piVar4 + 0x52) == '\0') && (local_86 == '\0')) {
    return;
  }
  uVar2 = piVar4[0xd];
  lVar6 = *(longlong *)(lVar3 + 0x1ed0);
  uVar17 = piVar4[0x13] & 0x1000;
  bVar18 = uVar17 != 0;
  uVar16 = piVar4[0x13] & 0x2000;
  bVar19 = uVar16 != 0;
  bVar20 = false;
  if (*(int *)(lVar3 + 0x206c) == param_1) {
    bVar20 = *(longlong *)(lVar5 + 0x18) == -1;
  }
  if (*(char *)((longlong)piVar4 + 0x51) == '\0') {
    iVar11 = piVar4[1];
    if (iVar11 < 0) {
      iVar11 = iVar11 + iVar11 / 2;
      iVar12 = 0;
      if (0 < iVar11) {
        iVar12 = iVar11;
      }
      FUN_1802cf430(piVar4,iVar12);
    }
    *piVar4 = 0;
    *(undefined1 *)((longlong)piVar4 + 0x51) = 1;
  }
  if (*(int *)(lVar3 + 0x223c) == param_1) {
    if ((uVar2 & 8) == 0) {
      if (uVar17 == 0) {
        local_88 = '\x01';
        cVar21 = '\x01';
      }
      else if (uVar16 != 0) {
        local_88 = '\x01';
      }
      goto LAB_1802c30a4;
    }
    if (uVar16 != 0) {
      local_88 = '\x01';
      goto LAB_1802c30a4;
    }
    if (uVar17 != 0) goto LAB_1802c30a4;
LAB_1802c30a9:
    *(longlong *)(lVar5 + 0x18) = lVar6;
    *(char *)(lVar5 + 0x14) = cVar21;
  }
  else {
LAB_1802c30a4:
    if (bVar20) goto LAB_1802c30a9;
  }
  if ((piVar4[0x12] != 0) && (lVar9 = FUN_1802aa360(), lVar9 != 0)) {
    fVar23 = *(float *)(lVar3 + 0x1f04);
    fVar24 = *(float *)(lVar3 + 0x1f0c);
    fVar1 = *(float *)(lVar3 + 0x1f10);
    if ((*(char *)(lVar15 + 0x178) == '\0') &&
       ((lVar10 = *(longlong *)(lVar3 + 0x2368), lVar10 != 0 && (*(int *)(lVar10 + 0x74) != -1)))) {
      lVar13 = (longlong)*(int *)(lVar10 + 0x74) * 0x74;
      if ((*(uint *)(lVar3 + 0x1efc) & 0x200) == 0) {
        fVar22 = *(float *)(lVar15 + 0x268);
        fVar25 = *(float *)(lVar15 + 0x270);
      }
      else {
        fVar22 = *(float *)(lVar3 + 0x1f34);
        fVar25 = *(float *)(lVar3 + 0x1f3c);
      }
      fVar26 = *(float *)(lVar13 + 8 + *(longlong *)(lVar10 + 0x18));
      fVar27 = *(float *)(lVar13 + 0xc + *(longlong *)(lVar10 + 0x18));
      if (fVar22 != fVar25) {
        if (fVar22 <= fVar26) {
          fVar26 = fVar22;
        }
        if (fVar27 <= fVar25) {
          fVar27 = fVar25;
        }
      }
      if (fVar27 <= fVar24) {
        fVar24 = fVar27;
      }
      if (fVar23 <= fVar26) {
        fVar23 = fVar26;
      }
    }
    if ((((*(float *)(lVar9 + 0x80) < *(float *)(lVar3 + 0x1f08) ||
           *(float *)(lVar9 + 0x80) == *(float *)(lVar3 + 0x1f08)) ||
         (fVar1 < *(float *)(lVar9 + 0x78) || fVar1 == *(float *)(lVar9 + 0x78))) ||
        (*(float *)(lVar9 + 0x7c) <= fVar23)) ||
       (fVar24 < *(float *)(lVar9 + 0x74) || fVar24 == *(float *)(lVar9 + 0x74))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (((*(float *)(lVar9 + 0x70) < *(float *)(lVar3 + 0x1f08) ||
          *(float *)(lVar9 + 0x70) == *(float *)(lVar3 + 0x1f08)) ||
        (fVar1 < *(float *)(lVar9 + 0x68) || fVar1 == *(float *)(lVar9 + 0x68))) ||
       ((*(float *)(lVar9 + 0x6c) <= fVar23 ||
        (fVar24 < *(float *)(lVar9 + 100) || fVar24 == *(float *)(lVar9 + 100))))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar20) {
      if ((!bVar7) && (cVar21 == '\0')) {
LAB_1802c31ef:
        if ((*(int *)(lVar5 + 0x10) < 1) && (*(char *)(lVar9 + 7) != '\0')) {
          local_88 = '\x01';
          *(undefined1 *)(lVar9 + 7) = 0;
        }
        else {
          iVar11 = piVar4[1];
          cVar21 = cVar21 == '\0';
          if (*piVar4 == iVar11) {
            iVar12 = *piVar4 + 1;
            if (iVar11 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar11 / 2 + iVar11;
            }
            if (iVar12 < iVar11) {
              iVar12 = iVar11;
            }
            FUN_1802cf430(piVar4,iVar12);
          }
          lVar10 = (longlong)*piVar4;
          lVar9 = *(longlong *)(piVar4 + 2);
          *(undefined4 *)(lVar9 + lVar10 * 0x18) = 2;
          *(char *)(lVar9 + 4 + lVar10 * 0x18) = cVar21;
          *(undefined1 *)(lVar9 + 5 + lVar10 * 0x18) = 1;
          *(undefined2 *)(lVar9 + 6 + lVar10 * 0x18) = local_72;
          *(longlong *)(lVar9 + 8 + lVar10 * 0x18) = lVar6;
          *(longlong *)(lVar9 + 0x10 + lVar10 * 0x18) = lVar6;
          *piVar4 = *piVar4 + 1;
        }
        iVar12 = *(int *)(lVar5 + 0x10) + 1;
        iVar11 = 1;
        if (0 < iVar12) {
          iVar11 = iVar12;
        }
        *(int *)(lVar5 + 0x10) = iVar11;
      }
    }
    else if (bVar7) goto LAB_1802c31ef;
  }
  if (((local_86 == '\0') || (cVar8 = FUN_18027bce0(1,0,0), cVar8 == '\0')) ||
     ((uVar2 & 0x20008) != 0)) {
    if (local_88 != '\0') goto LAB_1802c330c;
LAB_1802c332f:
    bVar20 = false;
  }
  else {
    if ((*(int *)(lVar3 + 0x1594) != 0) && (*(int *)(lVar3 + 0x1594) != param_1)) {
      FUN_18026ea90(0,0);
    }
    FUN_180282e10(param_1,lVar15);
    if (local_88 == '\0') {
      if (cVar21 != '\0') goto LAB_1802c332f;
      local_88 = '\x01';
      bVar19 = false;
      bVar18 = false;
    }
LAB_1802c330c:
    if ((*(int *)(lVar3 + 0x2084) != param_1) || ((*(byte *)(lVar3 + 0x2090) & 1) == 0))
    goto LAB_1802c332f;
    bVar20 = true;
  }
  if ((local_88 == '\0') || ((bVar20 && (cVar21 != '\0')))) goto LAB_1802c34c9;
  if ((*(int *)(lVar3 + 0x223c) == param_1) || (iVar11 = 1, *(int *)(lVar3 + 0x2084) == param_1)) {
    iVar11 = *(int *)(lVar3 + 0x20c0);
  }
  if (((((uVar2 & 0xc0) != 0) && (*(char *)(lVar3 + 0x2424) == '\0')) &&
      (*(char *)(lVar3 + 0x2425) == '\0')) && ((iVar11 == 1 && (*(short *)(lVar3 + 0xb3a) == 1)))) {
    FUN_1802c2120(piVar4[0x12],lVar6);
  }
  if ((uVar2 & 0x10) != 0) goto LAB_1802c342f;
  if ((uVar2 & 1) == 0) {
    if (((iVar11 == 1) || (*(int *)(lVar3 + 0x2084) == param_1)) && (!bVar18)) {
      if ((uVar2 & 0x20) == 0) goto LAB_1802c341c;
      if (cVar21 == '\0') {
        FUN_1802c3540(piVar4);
      }
      goto LAB_1802c342f;
    }
    if (1 < iVar11 - 2U) goto LAB_1802c342f;
    if (!bVar19) goto LAB_1802c348d;
    if (!bVar18) {
      FUN_1802c3540(piVar4);
      goto LAB_1802c342f;
    }
LAB_1802c343e:
    lVar15 = *(longlong *)(lVar5 + 0x18);
    if (*(longlong *)(lVar5 + 0x18) == -1) {
      *(longlong *)(lVar5 + 0x18) = lVar6;
      lVar15 = lVar6;
    }
    if ((uVar2 & 8) == 0) {
      if (bVar18) {
LAB_1802c3459:
        if (*(char *)(lVar5 + 0x14) != -1) {
          bVar20 = *(char *)(lVar5 + 0x14) != '\0';
          goto LAB_1802c3474;
        }
      }
      bVar20 = true;
    }
    else {
      if (*(char *)((longlong)piVar4 + 0x53) != '\0') goto LAB_1802c3459;
      bVar20 = cVar21 == '\0';
    }
LAB_1802c3474:
    uVar14 = 0xffffffff;
    if (*(char *)((longlong)piVar4 + 0x55) != '\0') {
      uVar14 = 1;
    }
  }
  else {
LAB_1802c341c:
    FUN_1802c3540(piVar4);
LAB_1802c342f:
    if ((bVar19) && ((uVar2 & 1) == 0)) goto LAB_1802c343e;
LAB_1802c348d:
    if (((uVar2 & 8) != 0) || (bVar18)) {
      cVar21 = cVar21 == '\0';
    }
    else {
      cVar21 = true;
    }
    *(longlong *)(lVar5 + 0x18) = lVar6;
    uVar14 = 1;
    lVar15 = lVar6;
    bVar20 = (bool)cVar21;
  }
  FUN_1802c35d0(piVar4,bVar20,uVar14,lVar15,lVar6);
LAB_1802c34c9:
  if (*(longlong *)(lVar5 + 0x18) == lVar6) {
    *(bool *)(lVar5 + 0x14) = cVar21 != '\0';
  }
  if (*(int *)(lVar3 + 0x206c) == param_1) {
    *(longlong *)(lVar5 + 0x20) = lVar6;
    *(bool *)(lVar5 + 0x15) = cVar21 != '\0';
  }
  if (*(longlong *)(lVar5 + 0x20) == lVar6) {
    *(undefined1 *)(piVar4 + 0x15) = 1;
  }
  *param_2 = cVar21;
  *param_3 = local_88;
  return;
}



// 0x18026fbc0  FUN_18026fbc0
// size=1063 thunk=false
// signature: undefined FUN_18026fbc0()
// status: ok


void FUN_18026fbc0(undefined8 param_1)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  bVar18 = false;
  lVar10 = *(longlong *)(lVar10 + 0xec0);
  plVar1 = (longlong *)(lVar10 + 0x1528);
  fVar2 = *(float *)(lVar10 + 0xcec);
  if (*(float *)(lVar10 + 0xcec) <= *(float *)(lVar10 + 0xcf0)) {
    fVar2 = *(float *)(lVar10 + 0xcf0);
  }
  if (fVar2 <= *(float *)(lVar10 + 0xc9c)) {
    fVar2 = *(float *)(lVar10 + 0xc9c);
  }
  *(float *)(lVar10 + 0x1514) = fVar2;
  FUN_180272c00(param_1);
  *(longlong *)(lVar10 + 0x1538) = *plVar1;
  lVar15 = FUN_180280f50();
  if (((lVar15 != 0) && (*plVar1 != 0)) &&
     (lVar17 = *(longlong *)(*plVar1 + 0x3c0), *(longlong *)(lVar17 + 0x3c0) != lVar15)) {
    do {
      if (lVar17 == lVar15) goto LAB_18026fc84;
      lVar17 = *(longlong *)(lVar17 + 0x3b8);
    } while (lVar17 != 0);
    bVar18 = true;
  }
LAB_18026fc84:
  iVar9 = *(int *)(lVar10 + 0x2028);
  if ((*(byte *)(lVar10 + 0x28) & 0x10) != 0) {
    bVar18 = true;
  }
  if (*(char *)(lVar10 + 0xb30) != '\0') {
    if ((*plVar1 == 0) && (iVar9 < 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb80) = uVar14;
    if ((*plVar1 == 0) && (lVar15 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb85) = uVar14;
  }
  cVar4 = *(char *)(lVar10 + 0x108);
  lVar17 = -1;
  if ((cVar4 != '\0') || (iVar16 = -1, *(char *)(lVar10 + 0xb4e) != '\0')) {
    iVar16 = 0;
  }
  if (*(char *)(lVar10 + 0xb31) != '\0') {
    if ((*plVar1 == 0) && (iVar9 < 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb81) = uVar14;
    if ((*plVar1 == 0) && (lVar15 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb86) = uVar14;
  }
  cVar5 = *(char *)(lVar10 + 0x109);
  if (((cVar5 != '\0') || (*(char *)(lVar10 + 0xb4f) != '\0')) &&
     ((iVar16 == -1 ||
      (dVar3 = *(double *)(lVar10 + 0xb08 + (longlong)iVar16 * 8),
      *(double *)(lVar10 + 0xb10) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb10))))) {
    iVar16 = 1;
  }
  if (*(char *)(lVar10 + 0xb32) != '\0') {
    if ((*plVar1 == 0) && (iVar9 < 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb82) = uVar14;
    if ((*plVar1 == 0) && (lVar15 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb87) = uVar14;
  }
  cVar6 = *(char *)(lVar10 + 0x10a);
  if (((cVar6 != '\0') || (*(char *)(lVar10 + 0xb50) != '\0')) &&
     ((iVar16 == -1 ||
      (dVar3 = *(double *)(lVar10 + 0xb08 + (longlong)iVar16 * 8),
      *(double *)(lVar10 + 0xb18) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb18))))) {
    iVar16 = 2;
  }
  if (*(char *)(lVar10 + 0xb33) != '\0') {
    if ((*plVar1 == 0) && (iVar9 < 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb83) = uVar14;
    if ((*plVar1 == 0) && (lVar15 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb88) = uVar14;
  }
  cVar7 = *(char *)(lVar10 + 0x10b);
  if (((cVar7 != '\0') || (*(char *)(lVar10 + 0xb51) != '\0')) &&
     ((iVar16 == -1 ||
      (dVar3 = *(double *)(lVar10 + 0xb08 + (longlong)iVar16 * 8),
      *(double *)(lVar10 + 0xb20) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb20))))) {
    iVar16 = 3;
  }
  if (*(char *)(lVar10 + 0xb34) != '\0') {
    if ((*plVar1 == 0) && (iVar9 < 1)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb84) = uVar14;
    if ((*plVar1 == 0) && (lVar15 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)(lVar10 + 0xb89) = uVar14;
  }
  cVar8 = *(char *)(lVar10 + 0x10c);
  if ((cVar8 == '\0') && (*(char *)(lVar10 + 0xb52) == '\0')) {
    if (iVar16 != -1) goto LAB_18026fec1;
  }
  else {
    if ((iVar16 == -1) ||
       (dVar3 = *(double *)(lVar10 + 0xb08 + (longlong)iVar16 * 8),
       *(double *)(lVar10 + 0xb28) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb28))) {
      iVar16 = 4;
    }
LAB_18026fec1:
    lVar17 = (longlong)iVar16;
    if (*(char *)(lVar17 + 0xb80 + lVar10) == '\0') {
      bVar11 = false;
      goto LAB_18026fe8d;
    }
  }
  bVar11 = true;
LAB_18026fe8d:
  if ((iVar16 == -1) || (*(char *)(lVar17 + 0xb85 + lVar10) != '\0')) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if ((*(char *)(lVar10 + 0x2298) == '\0') || ((*(byte *)(lVar10 + 0x229c) & 0x10) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((!bVar11) && (!bVar12)) || (bVar18)) {
    *(undefined8 *)(lVar10 + 0x1530) = 0;
    *plVar1 = 0;
  }
  if (*(int *)(lVar10 + 0x2adc) == -1) {
    if (((bVar11) &&
        ((*plVar1 != 0 ||
         ((((cVar8 != '\0' || cVar7 != '\0') || cVar6 != '\0') || cVar5 != '\0') || cVar4 != '\0')))
        ) || (0 < iVar9)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    *(undefined1 *)(lVar10 + 0xd0) = uVar14;
    if (((bVar13) &&
        ((*plVar1 != 0 ||
         ((((cVar8 != '\0' || cVar7 != '\0') || cVar6 != '\0') || cVar5 != '\0') || cVar4 != '\0')))
        ) || (lVar15 != 0)) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
  }
  else {
    bVar18 = *(int *)(lVar10 + 0x2adc) != 0;
    *(bool *)(lVar10 + 0xd0) = bVar18;
  }
  *(bool *)(lVar10 + 0xad4) = bVar18;
  *(undefined1 *)(lVar10 + 0xd1) = 0;
  if (((*(uint *)(lVar10 + 0x28) & 0x40) == 0) &&
     (((*(int *)(lVar10 + 0x1594) != 0 || (lVar15 != 0)) ||
      ((*(char *)(lVar10 + 0xd5) != '\0' &&
       (((*(uint *)(lVar10 + 0x28) & 1) != 0 && (*(char *)(lVar10 + 0x73) != '\0')))))))) {
    *(undefined1 *)(lVar10 + 0xd1) = 1;
  }
  if (*(int *)(lVar10 + 0x2ae0) != -1) {
    *(bool *)(lVar10 + 0xd1) = *(int *)(lVar10 + 0x2ae0) != 0;
  }
  *(bool *)(lVar10 + 0xd2) = *(int *)(lVar10 + 0x2ae4) != -1 && *(int *)(lVar10 + 0x2ae4) != 0;
  return;
}



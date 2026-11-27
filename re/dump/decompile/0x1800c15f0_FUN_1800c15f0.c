// 0x1800c15f0  FUN_1800c15f0
// size=1155 thunk=false
// signature: undefined FUN_1800c15f0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001800c1a51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800c15f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  char local_d8;
  float local_cc;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  double local_b0;
  undefined8 local_a8;
  
  uVar14 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar12 = (undefined4)param_3;
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  local_b0 = 0.0;
  local_a8 = 0;
  local_d8 = '\0';
  cVar1 = FUN_18003a090("Pre_AnimUpdate");
  if ((((cVar1 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
      (lVar5 = FUN_1800c1370(param_1), lVar5 != 0)) && (iVar3 = FUN_1800c1570(lVar5), 0 < iVar3)) {
    local_c0 = CONCAT44(uVar10,iVar3);
    local_b8 = uVar12;
    local_d8 = FUN_1802034f0();
  }
  fVar16 = DAT_180380bb0;
  if (DAT_1803fa608 == 0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = (float)*(double *)(DAT_1803fa608 + 0x10);
  }
  fVar11 = fVar18 - _DAT_1803e8700;
  cVar1 = FUN_1800c12a0();
  uVar13 = uVar12;
  if (((((cVar1 != '\0') && (cVar1 = FUN_1800b81b0(), cVar1 != '\0')) || (fVar11 < fVar16)) &&
      ((DAT_1803fa668 != (longlong *)0x0 && (DAT_1803fa608 != 0)))) &&
     ((cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0' &&
      (lVar5 = FUN_1800c1370(param_1), lVar5 != 0)))) {
    iVar3 = FUN_1800c1570(lVar5);
    lVar7 = (longlong)iVar3;
    if (((0 < iVar3) && (iVar4 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar3 != iVar4)) &&
       (iVar3 <= *(int *)(DAT_1803fa608 + 0x1c))) {
      local_cc = 0.0;
      cVar1 = FUN_1800b5e40(lVar5,3,&local_cc);
      if (cVar1 != '\0') {
        local_c0 = lVar7 * 0x168;
        fVar11 = (float)FUN_1802d3e00(local_cc - *(float *)(&DAT_180561150 + lVar7 * 0x2d));
        (&DAT_180561148)[lVar7 * 0x5a] = fVar11;
        (&DAT_18056114c)[lVar7 * 0x168] = 1;
        fVar16 = 0.0;
        uVar17 = 0;
        local_c8 = 0.0;
        cVar1 = FUN_1800c12a0();
        if ((cVar1 != '\0') && (cVar1 = FUN_1800b81b0(), cVar1 != '\0')) {
          uVar8 = FUN_1800b9e90(iVar3,fVar11);
          sVar2 = _fdclass();
          if (sVar2 < 1) {
            fVar16 = (float)uVar8;
            uVar17 = (int)((ulonglong)uVar8 >> 0x20);
            local_c8 = (float)uVar8;
          }
        }
        uVar17 = FUN_1802d3e00(CONCAT44(uVar17,fVar16 + fVar11));
        cVar1 = FUN_1800b6370(lVar5,3,uVar17);
        if (cVar1 != '\0') {
          FUN_1800b6370(lVar5,2,uVar17);
          *(float *)(&DAT_180561150 + lVar7 * 0x2d) = fVar16;
          if (fVar16 != 0.0) {
            _DAT_1803e8700 = fVar18;
          }
        }
        uVar8 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
        uVar8 = FUN_180241610(uVar8,0x3d5b6f9e4e0af044);
        pcVar6 = (char *)FUN_1801fcfc0(uVar8);
        if (((*pcVar6 != '\0') && (cVar1 = FUN_1800c12a0(), cVar1 != '\0')) &&
           ((cVar1 = FUN_1800b81b0(), cVar1 != '\0' &&
            (*(char *)(&DAT_180561188 + lVar7 * 0xb4) != '\0')))) {
          uVar13 = 0;
          uVar14 = 0;
        }
      }
    }
  }
  cVar1 = FUN_1800c12f0();
  uVar17 = uVar10;
  if (((((cVar1 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
       (cVar1 = FUN_1800b8160(), cVar1 != '\0')) &&
      ((DAT_180409ce4 != '\0' && (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0'))))
     && ((lVar5 = FUN_1800c1370(param_1), lVar5 != 0 &&
         ((iVar3 = FUN_1800c1570(lVar5), 0 < iVar3 &&
          (iVar4 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar3 == iVar4)))))) {
    uVar15 = DAT_1803eb85c;
    if (DAT_180409d00 != '\0') {
      uVar15 = DAT_180409ccc;
    }
    sVar2 = _fdclass(uVar15);
    if (sVar2 < 1) {
      uVar8 = FUN_1802d3e00(uVar15);
      uVar17 = (undefined4)uVar8;
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    uVar15 = DAT_1803eb858;
    sVar2 = _fdclass(DAT_1803eb858);
    if (sVar2 < 1) {
      uVar14 = 0;
      uVar13 = uVar15;
    }
  }
  if (local_d8 != '\0') {
    uVar8 = FUN_1802d3e00((float)local_b0);
    uVar17 = (undefined4)uVar8;
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  sVar2 = _fdclass(CONCAT44(uVar9,uVar17));
  if ((0 < sVar2) || (sVar2 = _fdclass(CONCAT44(uVar14,uVar13)), 0 < sVar2)) {
    uVar13 = uVar12;
    uVar17 = uVar10;
  }
  if (DAT_180409ca8 != (code *)0x0) {
    (*DAT_180409ca8)(param_1,uVar17,uVar13);
  }
  return;
}



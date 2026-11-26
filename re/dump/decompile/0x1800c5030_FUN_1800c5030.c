// 0x1800c5030  FUN_1800c5030
// size=1186 thunk=false
// signature: undefined FUN_1800c5030()
// status: ok


undefined8 FUN_1800c5030(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint *puVar13;
  float fVar14;
  char local_res8 [8];
  
  if ((((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) || (param_1 == param_2)) ||
     ((BVar4 = IsBadReadPtr(param_1,8), BVar4 != 0 ||
      (BVar4 = IsBadReadPtr((void *)*param_1,8), BVar4 != 0)))) {
    return 0;
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if ((iVar5 < 1) || ((DAT_1803fa608 != (float *)0x0 && ((int)DAT_1803fa608[7] < iVar5)))) {
    return 0;
  }
  cVar3 = (**(code **)(*plVar9 + 0x40))(plVar9);
  if (cVar3 != '\0') {
    uVar10 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar10 = FUN_180241610(uVar10,0xe5e03453c741697f);
    pcVar11 = (char *)FUN_1801fcfc0(uVar10);
    if (*pcVar11 != '\0') {
      fVar14 = DAT_1803812fc;
      if ((((iVar5 < 0x100) && (DAT_1803fa608 != (float *)0x0)) &&
          (fVar1 = (float)(&DAT_1803ff300)[iVar5], 0.0 < fVar1)) &&
         (fVar1 <= (float)*(double *)(DAT_1803fa608 + 4))) {
        fVar14 = (float)*(double *)(DAT_1803fa608 + 4) - fVar1;
      }
      if (DAT_180380a58 < fVar14) {
        return 0;
      }
    }
  }
  fVar14 = DAT_1803812fc;
  fVar1 = DAT_180380a58;
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  local_res8[0] = FUN_18001e0a0(param_1);
  if (local_res8[0] == '\b') {
    iVar6 = FUN_180071aa0(iVar5);
  }
  else {
    iVar6 = 0;
  }
  uVar10 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar10 = FUN_180241610(uVar10,0x8dbcb6da1c093609);
  pcVar11 = (char *)FUN_1801fcfc0(uVar10);
  if ((*pcVar11 != '\0') && (cVar3 = (**(code **)(*plVar9 + 0x18))(plVar9), cVar3 == '\0')) {
    if (((iVar5 < 0x100) &&
        ((DAT_1803fa608 != (float *)0x0 && (fVar2 = (float)(&DAT_1803ff300)[iVar5], 0.0 < fVar2))))
       && (fVar2 <= (float)*(double *)(DAT_1803fa608 + 4))) {
      fVar14 = (float)*(double *)(DAT_1803fa608 + 4) - fVar2;
    }
    if ((fVar1 < fVar14) && (iVar6 < 1)) {
      return 0;
    }
  }
  cVar3 = FUN_18001c330(param_1);
  if ((cVar3 == '\0') || (iVar7 = FUN_18001c680(param_1), iVar7 < 1)) {
    return 0;
  }
  if ((((((iVar5 < 0x81) && (0.0 <= DAT_1803e9228)) && (DAT_1803fa608 != (float *)0x0)) &&
       ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9228 &&
        ((double)*DAT_1803fa608 - DAT_1803e9228 <= DAT_180380cb0)))) &&
      (((&DAT_1804239a0)[iVar5] != '\0' && (local_res8[0] == '\b')))) &&
     ((DAT_180423a28 == '\0' || (iVar6 < 1)))) {
    return 0;
  }
  uVar10 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar12 = FUN_180241610(uVar10,0x585adea58af62688);
  pcVar11 = (char *)FUN_1801fcfc0(uVar12);
  if ((*pcVar11 != '\0') &&
     ((iVar7 = FUN_18001c560(param_2), 0 < iVar7 && (iVar8 = FUN_18001c560(param_1), iVar8 == iVar7)
      ))) {
    return 0;
  }
  uVar12 = FUN_180241610(uVar10,0xb893a7799007b22f);
  pcVar11 = (char *)FUN_1801fcfc0(uVar12);
  if ((*pcVar11 != '\0') && ((local_res8[0] == '\b' && (iVar6 < 1)))) {
    return 0;
  }
  uVar12 = FUN_180241610(uVar10,0x8ae1ad0adb54c4f0);
  pcVar11 = (char *)FUN_1801fcfc0(uVar12);
  if ((*pcVar11 != '\0') &&
     (puVar13 = (uint *)FUN_18001d710(param_1,local_res8), (*puVar13 >> 6 & 1) != 0)) {
    return 0;
  }
  iVar6 = FUN_18001fad0(param_1);
  if (iVar6 != 0) {
    return 0;
  }
  uVar12 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar12 = FUN_180241610(uVar12,0x216df9830429193f);
  pcVar11 = (char *)FUN_1801fcfc0(uVar12);
  if ((*pcVar11 != '\0') && (cVar3 = FUN_1800c4740(iVar5), cVar3 != '\0')) {
    return 0;
  }
  if ((DAT_180400a30 != (code *)0x0) && (cVar3 = (*DAT_180400a30)(iVar5), cVar3 != '\0')) {
    return 0;
  }
  if ((DAT_1803fe3e0 != (code *)0x0) && (cVar3 = (*DAT_1803fe3e0)(iVar5), cVar3 != '\0')) {
    return 0;
  }
  if ((DAT_180425398 != (code *)0x0) && (cVar3 = (*DAT_180425398)(iVar5), cVar3 != '\0')) {
    return 0;
  }
  uVar10 = FUN_180241610(uVar10,0x7f0b28cb8d45cb74);
  pcVar11 = (char *)FUN_1801fcfc0(uVar10);
  if (((*pcVar11 != '\0') && (DAT_1803feb28 != (code *)0x0)) &&
     (cVar3 = (*DAT_1803feb28)(iVar5), cVar3 != '\0')) {
    return 0;
  }
  return 1;
}



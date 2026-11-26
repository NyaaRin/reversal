// 0x1800d6720  FUN_1800d6720
// size=1358 thunk=false
// signature: undefined FUN_1800d6720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800d6720(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int *piVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  byte bVar14;
  bool bVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  double local_e8;
  double local_e0;
  int local_d8;
  int local_d0;
  undefined1 local_c8;
  float local_c4 [4];
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar8 = FUN_180241610(uVar8,0x943e8f97e20d790f);
  pcVar9 = (char *)FUN_1801fcfc0(uVar8);
  if (*pcVar9 == '\0') {
    return 1;
  }
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar8 = FUN_180241610(uVar8,0xb180266dc2efa3d2);
  pcVar9 = (char *)FUN_1801fcfc0(uVar8);
  if (*pcVar9 == '\0') {
    return 1;
  }
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar8 = FUN_180241610(uVar8,0x8e62cf1c230948fa);
  piVar10 = (int *)FUN_1802029c0(uVar8);
  if (*piVar10 != 3) {
    return 1;
  }
  if ((param_1 == (int *)0x0) || (DAT_1803e921c < 1)) {
    return 1;
  }
  bVar15 = DAT_180423978 != 0;
  fVar19 = 0.0;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_c8 = bVar15;
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar11 = (*pcVar1)(DAT_1803fa360,uVar7);
  if (lVar11 != 0) {
    pfVar12 = (float *)FUN_18001d530(lVar11);
    fVar16 = (float)(*(code *)PTR_FUN_1803da018)
                              (pfVar12[1] * pfVar12[1] + *pfVar12 * *pfVar12 +
                               pfVar12[2] * pfVar12[2]);
    sVar6 = _fdclass();
    if (sVar6 < 1) {
      local_c4[2] = 1.0;
      local_c4[0] = 0.0;
      local_c4[1] = fVar16 / DAT_180381120;
      pfVar12 = local_c4;
      if (0.0 <= local_c4[1]) {
        pfVar12 = local_c4 + 1;
      }
      pfVar13 = local_c4 + 2;
      if (local_c4[1] <= DAT_180380bb0) {
        pfVar13 = pfVar12;
      }
      fVar19 = *pfVar13;
    }
  }
  iVar3 = DAT_1803e921c;
  fVar16 = DAT_1803e9218;
  fVar19 = fVar19 * _DAT_1803809d0 + _DAT_1803809b0;
  if (((bVar15) || (DAT_1803e9218 < 0.0)) || (DAT_1803e9218 <= fVar19)) {
    bVar2 = true;
    if (!bVar15) goto LAB_1800d691a;
  }
  else {
    bVar2 = false;
LAB_1800d691a:
    if ((DAT_18042a8e8 & 1) == 0) {
      DAT_18042a8e8 = DAT_18042a8e8 | 1;
      _DAT_1805707b0 = 0;
      _DAT_1805707b8 = 0;
    }
    if (DAT_180423987 == '\0') {
      DAT_1803fe788 = '\0';
      DAT_1803e7208 = -1;
      DAT_1803e9710 = '\x01';
    }
    else {
      if (DAT_1803e921c != DAT_1803e7208) {
        if (DAT_1803fe788 == '\0') {
          DAT_1803e9710 = false;
        }
        else {
          FUN_1802d3e70(&DAT_1805707b0,&local_a8,local_88,local_98);
          FUN_1802d3e70(&DAT_1803ebbb0,local_c4 + 3,local_88,local_98);
          DAT_1803e9710 =
               DAT_180380ba4 < local_b4 * local_a4 + local_c4[3] * local_a8 + local_b0 * local_a0;
        }
        _DAT_1805707b0 = CONCAT44(DAT_1803ebbb4,DAT_1803ebbb0);
        _DAT_1805707b8 = DAT_1803ebbb8;
        DAT_1803fe788 = '\x01';
        DAT_1803e7208 = iVar3;
      }
      if (DAT_1803e9710 == '\0') {
        bVar14 = 0;
        goto LAB_1800d6969;
      }
    }
  }
  bVar14 = 1;
LAB_1800d6969:
  uVar7 = DAT_18038120c;
  bVar15 = true;
  if (DAT_180423987 != '\0') {
    uVar17 = remainderf((float)param_1[2] - DAT_1803ebbb0,DAT_18038120c);
    uVar18 = remainderf((float)param_1[3] - DAT_1803ebbb4,uVar7);
    sVar6 = _fdclass();
    if (((0 < sVar6) || (sVar6 = _fdclass(), 0 < sVar6)) ||
       ((DAT_180380ac0 < (float)(uVar17 & _DAT_1803817c0) ||
        (DAT_180380ac0 < (float)(uVar18 & _DAT_1803817c0))))) {
      bVar15 = false;
    }
  }
  bVar4 = FUN_1800d65d0(param_1);
  cVar5 = FUN_180071c60();
  if (((cVar5 == '\0') || (DAT_18042398b == '\0')) ||
     (((DAT_180423974 != 0 ||
       ((((!bVar2 || (bVar14 == 0)) || (!bVar15)) || ((bVar4 != 0 || (DAT_1803e921c < 1)))))) ||
      (*param_1 != DAT_1803e921c)))) {
    uVar8 = 0;
    DAT_180425548 = DAT_180425548 + 1;
  }
  else {
    uVar8 = 1;
    DAT_180426140 = DAT_180426140 + 1;
  }
  if (DAT_180425548 + DAT_180426140 == ((DAT_180425548 + DAT_180426140) / 200) * 200) {
    local_e0 = (double)fVar19;
    local_e8 = (double)fVar16;
    local_f0 = (uint)DAT_180423974;
    local_d0 = *param_1;
    local_d8 = DAT_1803e921c;
    local_f8 = (uint)bVar4;
    local_100 = (uint)bVar14;
    local_108 = (uint)bVar15;
    FUN_180014410("[ZC-FRESH] allowed=%d blocked=%d native=%d applied=%d conv=%d sprint=%d held=%d unexp=%.4f/%.4f solveCmd=%d cmd#%d\n"
                  ,DAT_180426140,DAT_180425548,local_c8);
    return uVar8;
  }
  return uVar8;
}



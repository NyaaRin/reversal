// 0x1800b6fb0  FUN_1800b6fb0
// size=918 thunk=false
// signature: undefined FUN_1800b6fb0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1800b6fb0(longlong *param_1,double param_2,float param_3,char param_4,undefined8 *param_5)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  float fVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float local_res8;
  
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if ((((param_1 != (longlong *)0x0) && (param_5 != (undefined8 *)0x0)) && (3 < DAT_1803fb244)) &&
     ((0.0 < param_2 && (0.0 < param_3)))) {
    lVar2 = param_1[2];
    fVar14 = (float)(**(code **)(*param_1 + 0x10))();
    FUN_1800b6e80();
    uVar5 = _UNK_1803817d4;
    uVar4 = _DAT_1803817d0;
    fVar3 = DAT_1803812f8;
    local_res8 = DAT_1803809a8;
    if (DAT_1803809a8 <= extraout_XMM0_Da * _DAT_180380d60) {
      local_res8 = extraout_XMM0_Da * _DAT_180380d60;
    }
    if (0 < DAT_1803fb244) {
      uVar17 = (uint)DAT_180380ec0;
      uVar18 = (uint)((ulonglong)DAT_180380ec0 >> 0x20);
      pdVar13 = (double *)0x0;
      pdVar9 = (double *)0x0;
      iVar12 = -1;
      iVar10 = 0;
      uVar19 = uVar17;
      uVar20 = uVar18;
      iVar11 = DAT_1803fb244;
      while (((-1 < iVar10 && (iVar10 < iVar11)) && (-1 < DAT_1803db410))) {
        for (uVar7 = DAT_1803db410 - iVar10; (int)uVar7 < 0; uVar7 = uVar7 + 0x100) {
        }
        pdVar8 = (double *)(&DAT_1803fb250 + (ulonglong)(uVar7 & 0xff) * 0x18);
        if ((&DAT_1803fb260)[(ulonglong)(uVar7 & 0xff) * 0x18] == '\0') {
          pdVar8 = (double *)0x0;
        }
        if ((pdVar8 == (double *)0x0) ||
           ((param_4 != '\0' &&
            (*(int *)((longlong)pdVar8 + 0xc) != *(int *)((longlong)param_1 + 0x1c))))) break;
        if (((((longlong)(int)lVar2 - (longlong)*(int *)(pdVar8 + 1)) - 1U < 0x3f) &&
            (((cVar6 = (**(code **)(*param_1 + 0x88))(param_1,1), iVar11 = DAT_1803fb244,
              cVar6 != '\0' && (dVar1 = param_2 - *pdVar8, 0.0 < dVar1)) && (dVar1 <= DAT_180380d38)
             ))) && (((((**(code **)(*param_1 + 0x90))(param_1,1,*(undefined4 *)(pdVar8 + 1)),
                       iVar11 = DAT_1803fb244, fVar14 < 0.0 || (fVar3 < fVar14)) ||
                      ((extraout_XMM0_Da_00 < 0.0 || (fVar3 < extraout_XMM0_Da_00)))) ||
                     (((fVar15 = fVar14 - extraout_XMM0_Da_00, DAT_180381320 <= fVar15 &&
                       (fVar15 <= DAT_180380d30)) &&
                      ((double)CONCAT44((uint)((ulonglong)((double)fVar15 - dVar1) >> 0x20) & uVar5,
                                        SUB84((double)fVar15 - dVar1,0) & uVar4) <= DAT_180380ca0)))
                     ))) {
          uVar7 = SUB84(dVar1 - (double)param_3,0) & uVar4;
          uVar16 = (uint)((ulonglong)(dVar1 - (double)param_3) >> 0x20) & uVar5;
          if (iVar10 == DAT_1803db418) {
            pdVar9 = pdVar8;
            uVar19 = uVar7;
            uVar20 = uVar16;
          }
          if ((double)CONCAT44(uVar16,uVar7) <= (double)CONCAT44(uVar18,uVar17) &&
              (double)CONCAT44(uVar18,uVar17) != (double)CONCAT44(uVar16,uVar7)) {
            pdVar13 = pdVar8;
            uVar17 = uVar7;
            uVar18 = uVar16;
            iVar12 = iVar10;
          }
        }
        iVar10 = iVar10 + 1;
        if (iVar11 <= iVar10) break;
      }
      if ((pdVar9 != (double *)0x0) && ((double)CONCAT44(uVar20,uVar19) <= (double)local_res8)) {
        *param_5 = pdVar9;
        return 1;
      }
      if ((pdVar13 != (double *)0x0) &&
         (((double)CONCAT44(uVar18,uVar17) < (double)local_res8 ||
           (double)CONCAT44(uVar18,uVar17) == (double)local_res8 || (param_4 != '\0')))) {
        DAT_1803db418 = iVar12;
        *param_5 = pdVar13;
        return 1;
      }
    }
  }
  return 0;
}



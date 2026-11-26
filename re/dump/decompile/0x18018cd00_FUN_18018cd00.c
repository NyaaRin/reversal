// 0x18018cd00  FUN_18018cd00
// size=893 thunk=false
// signature: undefined FUN_18018cd00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18018cd00(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  
  fVar9 = param_2[1];
  fVar11 = *param_3;
  fVar21 = param_3[1];
  fVar12 = param_1[1];
  fVar1 = *param_2;
  dVar20 = (double)fVar11;
  dVar18 = (double)fVar21;
  dVar6 = (double)fVar12;
  fVar10 = *param_1;
  dVar14 = (double)fVar9 - dVar6;
  dVar5 = (double)fVar10;
  dVar2 = (double)fVar1 - dVar5;
  dVar3 = (dVar18 - dVar6) * dVar2 - (dVar20 - dVar5) * dVar14;
  fVar15 = param_4[1];
  fVar19 = *param_4;
  dVar16 = (double)fVar15 - dVar18;
  dVar4 = (double)fVar19 - dVar20;
  dVar2 = ((double)fVar15 - dVar6) * dVar2 - ((double)fVar19 - dVar5) * dVar14;
  dVar5 = (dVar6 - dVar18) * dVar4 - (dVar5 - dVar20) * dVar16;
  dVar4 = ((double)fVar9 - dVar18) * dVar4 - ((double)fVar1 - dVar20) * dVar16;
  if ((((dVar3 <= DAT_180380a50) || (DAT_180381340 <= dVar2)) &&
      ((DAT_180381340 <= dVar3 || (dVar2 <= DAT_180380a50)))) ||
     (((dVar5 <= DAT_180380a50 || (DAT_180381340 <= dVar4)) &&
      ((DAT_180381340 <= dVar5 || (dVar4 <= DAT_180380a50)))))) {
    fVar17 = fVar10;
    if (fVar1 <= fVar10) {
      fVar17 = fVar1;
    }
    fVar8 = fVar12;
    fVar13 = fVar12;
    if (DAT_180380a50 <
        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar3,0) & _DAT_1803817d0)) {
      if (param_2[1] <= fVar12) {
        fVar13 = param_2[1];
      }
      if (fVar12 <= param_2[1]) {
        fVar8 = param_2[1];
      }
    }
    else {
      if (fVar17 - DAT_180380948 <= fVar11) {
        fVar7 = fVar10;
        if (fVar10 <= fVar1) {
          fVar7 = fVar1;
        }
        if (fVar11 <= fVar7 + DAT_180380948) {
          fVar9 = param_2[1];
          fVar7 = fVar12;
          if (fVar9 <= fVar12) {
            fVar7 = fVar9;
          }
          if (fVar7 - DAT_180380948 <= fVar21) {
            fVar7 = fVar12;
            if (fVar12 <= fVar9) {
              fVar7 = fVar9;
            }
            if (fVar21 <= fVar7 + DAT_180380948) {
              return 1;
            }
          }
        }
      }
      if (fVar9 <= fVar12) {
        fVar13 = fVar9;
      }
      if (fVar12 <= fVar9) {
        fVar8 = fVar9;
      }
    }
    fVar9 = fVar10;
    if (fVar10 <= fVar1) {
      fVar9 = fVar1;
    }
    if ((((DAT_180380a50 <
           (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & _UNK_1803817d4,
                            SUB84(dVar2,0) & _DAT_1803817d0)) ||
         (fVar19 = *param_4, fVar19 < fVar17 - DAT_180380948)) || (fVar9 + DAT_180380948 < fVar19))
       || ((fVar15 = param_4[1], fVar15 < fVar13 - DAT_180380948 || (fVar8 + DAT_180380948 < fVar15)
           ))) {
      if ((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_1803817d4,
                           SUB84(dVar5,0) & _DAT_1803817d0) <= DAT_180380a50) {
        fVar9 = fVar11;
        if (fVar19 <= fVar11) {
          fVar9 = fVar19;
        }
        if (fVar9 - DAT_180380948 <= fVar10) {
          fVar9 = fVar11;
          if (fVar11 <= fVar19) {
            fVar9 = fVar19;
          }
          if (fVar10 <= fVar9 + DAT_180380948) {
            fVar10 = fVar21;
            if (fVar15 <= fVar21) {
              fVar10 = fVar15;
            }
            if (fVar10 - DAT_180380948 <= fVar12) {
              if (fVar21 <= fVar15) {
                fVar21 = fVar15;
              }
              if (fVar12 <= fVar21 + DAT_180380948) {
                return 1;
              }
            }
          }
        }
      }
      if ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_1803817d4,
                           SUB84(dVar4,0) & _DAT_1803817d0) <= DAT_180380a50) {
        if (fVar19 <= fVar11) {
          fVar11 = fVar19;
        }
        if (fVar11 - DAT_180380948 <= fVar1) {
          fVar11 = *param_3;
          if (*param_3 <= *param_4) {
            fVar11 = *param_4;
          }
          if (fVar1 <= fVar11 + DAT_180380948) {
            fVar11 = param_3[1];
            fVar21 = param_4[1];
            fVar12 = fVar11;
            if (fVar21 <= fVar11) {
              fVar12 = fVar21;
            }
            if (fVar12 - DAT_180380948 <= param_2[1]) {
              if (fVar11 <= fVar21) {
                fVar11 = fVar21;
              }
              if (param_2[1] <= fVar11 + DAT_180380948) {
                return 1;
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}



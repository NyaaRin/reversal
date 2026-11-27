// 0x1800c3e10  FUN_1800c3e10
// size=1388 thunk=false
// signature: undefined FUN_1800c3e10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1800c3e10(float param_1,float param_2,int param_3,int param_4,float param_5,float *param_6,
             float *param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((0 < param_3) && (0 < param_4)) {
    plVar4 = (longlong *)FUN_1800c3d00(param_3);
    plVar5 = (longlong *)FUN_1800c3d00(param_4);
    fVar21 = DAT_180380938;
    lVar1 = *plVar4;
    if (lVar1 != plVar4[1]) {
      lVar2 = *plVar5;
      if (lVar2 != plVar5[1]) {
        fVar13 = (float)((uint)param_1 & _DAT_1803817c0);
        fVar14 = (float)((uint)param_2 & _DAT_1803817c0);
        uVar9 = 0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        uVar6 = plVar5[1] - lVar2 >> 2;
        fVar18 = 0.0;
        uVar8 = plVar4[1] - lVar1 >> 2;
        fVar16 = DAT_1803813c0;
        do {
          if (uVar9 == uVar8) {
            fVar17 = 0.0;
          }
          else {
            fVar17 = (float)*(int *)(lVar1 + uVar9 * 4);
          }
          uVar7 = 0;
          if (uVar6 + 1 < 4) {
LAB_1800c41f1:
            do {
              if (uVar7 == uVar6) {
                fVar15 = 0.0;
              }
              else {
                fVar15 = (float)*(int *)(lVar2 + uVar7 * 4);
              }
              fVar11 = fVar15 * fVar15 + fVar17 * fVar17;
              if (0.0 < fVar11) {
                if (fVar11 < 0.0) {
                  fVar11 = sqrtf(fVar11);
                }
                else {
                  fVar11 = SQRT(fVar11);
                }
                if ((param_5 <= fVar11) &&
                   ((fVar10 = (fVar15 * fVar14 + fVar17 * fVar13) / fVar11, fVar16 + fVar21 < fVar10
                    || ((fVar16 - fVar21 < fVar10 && (fVar18 < fVar11)))))) {
                  fVar16 = fVar10;
                  fVar18 = fVar11;
                  fVar19 = fVar17;
                  fVar20 = fVar15;
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 <= uVar6);
          }
          else {
            fVar15 = fVar17 * fVar17;
            do {
              if (uVar7 == uVar6) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (float)*(int *)(uVar7 * 4 + lVar2);
              }
              fVar10 = fVar11 * fVar11 + fVar15;
              if (0.0 < fVar10) {
                if (fVar10 < 0.0) {
                  fVar10 = sqrtf(fVar10);
                }
                else {
                  fVar10 = SQRT(fVar10);
                }
                if ((param_5 <= fVar10) &&
                   ((fVar12 = (fVar11 * fVar14 + fVar17 * fVar13) / fVar10, fVar16 + fVar21 < fVar12
                    || ((fVar16 - fVar21 < fVar12 && (fVar18 < fVar10)))))) {
                  fVar16 = fVar12;
                  fVar18 = fVar10;
                  fVar19 = fVar17;
                  fVar20 = fVar11;
                }
              }
              if (uVar7 + 1 == uVar6) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (float)*(int *)(uVar7 * 4 + 4 + lVar2);
              }
              fVar10 = fVar11 * fVar11 + fVar15;
              if (0.0 < fVar10) {
                if (fVar10 < 0.0) {
                  fVar10 = sqrtf(fVar10);
                }
                else {
                  fVar10 = SQRT(fVar10);
                }
                if ((param_5 <= fVar10) &&
                   ((fVar12 = (fVar11 * fVar14 + fVar17 * fVar13) / fVar10, fVar16 + fVar21 < fVar12
                    || ((fVar16 - fVar21 < fVar12 && (fVar18 < fVar10)))))) {
                  fVar16 = fVar12;
                  fVar18 = fVar10;
                  fVar19 = fVar17;
                  fVar20 = fVar11;
                }
              }
              if (uVar7 + 2 == uVar6) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (float)*(int *)(lVar2 + (uVar7 + 2) * 4);
              }
              fVar10 = fVar11 * fVar11 + fVar15;
              if (0.0 < fVar10) {
                if (fVar10 < 0.0) {
                  fVar10 = sqrtf(fVar10);
                }
                else {
                  fVar10 = SQRT(fVar10);
                }
                if ((param_5 <= fVar10) &&
                   ((fVar12 = (fVar11 * fVar14 + fVar17 * fVar13) / fVar10, fVar16 + fVar21 < fVar12
                    || ((fVar16 - fVar21 < fVar12 && (fVar18 < fVar10)))))) {
                  fVar16 = fVar12;
                  fVar18 = fVar10;
                  fVar19 = fVar17;
                  fVar20 = fVar11;
                }
              }
              if (uVar7 + 3 == uVar6) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (float)*(int *)(lVar2 + (uVar7 + 3) * 4);
              }
              fVar10 = fVar11 * fVar11 + fVar15;
              if (0.0 < fVar10) {
                if (fVar10 < 0.0) {
                  fVar10 = sqrtf(fVar10);
                }
                else {
                  fVar10 = SQRT(fVar10);
                }
                if ((param_5 <= fVar10) &&
                   ((fVar12 = (fVar11 * fVar14 + fVar17 * fVar13) / fVar10, fVar16 + fVar21 < fVar12
                    || ((fVar16 - fVar21 < fVar12 && (fVar18 < fVar10)))))) {
                  fVar16 = fVar12;
                  fVar18 = fVar10;
                  fVar19 = fVar17;
                  fVar20 = fVar11;
                }
              }
              uVar7 = uVar7 + 4;
            } while (uVar7 <= uVar6 - 3);
            if (uVar7 <= uVar6) goto LAB_1800c41f1;
          }
          uVar3 = DAT_1803817f0;
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar8);
        if (0.0 < fVar18) {
          if (fVar19 == 0.0) {
            fVar19 = 0.0;
          }
          else if (param_1 < 0.0) {
            fVar19 = (float)((uint)fVar19 ^ DAT_1803817f0);
          }
          *param_6 = fVar19;
          fVar21 = 0.0;
          if ((fVar20 != 0.0) && (fVar21 = fVar20, param_2 < 0.0)) {
            fVar21 = (float)((uint)fVar20 ^ uVar3);
          }
          *param_7 = fVar21;
          return 1;
        }
      }
    }
  }
  return 0;
}



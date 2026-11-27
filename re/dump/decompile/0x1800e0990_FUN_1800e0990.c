// 0x1800e0990  FUN_1800e0990
// size=2285 thunk=false
// signature: undefined FUN_1800e0990()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e0990(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  float fVar22;
  float fVar23;
  float _X;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_118;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (DAT_1803e90a8 != *param_1) {
    return 0;
  }
  if ((param_1[2] & 0x7f800000U) == 0x7f800000) {
    return 0;
  }
  if ((param_1[3] & 0x7f800000U) == 0x7f800000) {
    return 0;
  }
  if ((param_1[4] & 0x7f800000U) == 0x7f800000) {
    return 0;
  }
  if ((DAT_1803fe410 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803fe410 = FUN_180016fb0("cl_forwardspeed");
  }
  if ((DAT_1803fcf50 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1803fcf50 = FUN_180016fb0("cl_sidespeed");
  }
  local_118 = 400;
  if (DAT_1803fe410 == 0) {
    iVar4 = 400;
  }
  else {
    iVar4 = FUN_1800197a0(DAT_1803fe410);
  }
  if (DAT_1803fcf50 != 0) {
    local_118 = FUN_1800197a0();
  }
  if (iVar4 < 1) {
    return 0;
  }
  if (local_118 < 1) {
    return 0;
  }
  fVar12 = (float)FUN_180022110();
  fVar12 = fVar12 * DAT_180380994;
  fVar13 = cosf(fVar12);
  fVar14 = sinf(fVar12);
  plVar6 = (longlong *)FUN_1800c3d00(iVar4);
  plVar7 = (longlong *)FUN_1800c3d00(local_118);
  fVar25 = DAT_180380938;
  if (*plVar6 == plVar6[1]) {
    return 0;
  }
  if (*plVar7 == plVar7[1]) {
    return 0;
  }
  fVar14 = (float)((uint)fVar14 ^ DAT_1803817f0);
  fVar19 = (float)((uint)fVar13 & _DAT_1803817c0);
  fVar20 = (float)((uint)fVar14 & _DAT_1803817c0);
  if (DAT_1803e8770 == *param_1) {
    fVar15 = 0.0;
    bVar3 = fVar19 <= DAT_180380948;
    if (!bVar3) {
      fVar15 = (float)iVar4 / fVar19;
    }
    if (fVar20 <= DAT_180380948) {
      if (bVar3) goto LAB_1800e0c84;
    }
    else if ((bVar3) || ((float)local_118 / fVar20 < fVar15)) {
      fVar15 = (float)local_118 / fVar20;
    }
    if (0.0 < fVar15) {
      iVar4 = DAT_1803fcf08 + 1;
      DAT_1803fcf08 = iVar4;
      param_1[5] = (int)(fVar13 * fVar15);
      param_1[6] = (int)(fVar14 * fVar15);
      if (iVar4 % 200 != 1) {
        return 1;
      }
      FUN_180014410("[STRAFE] AA tick: wish=%.2f view=%.2f rel=%.2f -> move=(%.1f,%.1f) exact, len=%.0f (lattice skipped)\n"
                    ,(double)DAT_180423568,(double)(float)param_1[3],
                    (double)(fVar12 * DAT_1803810bc),(double)(fVar13 * fVar15),
                    (double)(fVar14 * fVar15),(double)fVar15);
      return 1;
    }
  }
LAB_1800e0c84:
  lVar1 = *plVar6;
  iVar5 = iVar4;
  if (iVar4 < local_118) {
    iVar5 = local_118;
  }
  uVar11 = 0;
  lVar2 = *plVar7;
  _X = 0.0;
  uVar10 = plVar6[1] - lVar1 >> 2;
  uVar8 = plVar7[1] - lVar2 >> 2;
  fVar24 = 0.0;
  fVar15 = 0.0;
  fVar26 = (float)local_118 * fVar20 + (float)iVar4 * fVar19;
  if ((float)iVar5 <= fVar26) {
    fVar26 = (float)iVar5;
  }
  fVar26 = fVar26 * DAT_180380ac0;
  fVar22 = DAT_1803813c0;
  do {
    if (uVar11 == uVar10) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)*(int *)(lVar1 + uVar11 * 4);
    }
    uVar9 = 0;
    if (uVar8 + 1 < 4) {
LAB_1800e0ff4:
      do {
        if (uVar9 == uVar8) {
          fVar21 = 0.0;
        }
        else {
          fVar21 = (float)*(int *)(lVar2 + uVar9 * 4);
        }
        fVar17 = fVar21 * fVar21 + fVar23 * fVar23;
        if (0.0 < fVar17) {
          if (fVar17 < 0.0) {
            fVar17 = sqrtf(fVar17);
          }
          else {
            fVar17 = SQRT(fVar17);
          }
          if ((fVar26 <= fVar17) &&
             ((fVar16 = (fVar21 * fVar20 + fVar23 * fVar19) / fVar17, fVar22 + fVar25 < fVar16 ||
              ((fVar22 - fVar25 < fVar16 && (fVar15 < fVar17)))))) {
            fVar22 = fVar16;
            fVar15 = fVar17;
            _X = fVar23;
            fVar24 = fVar21;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 <= uVar8);
    }
    else {
      fVar21 = fVar23 * fVar23;
      do {
        if (uVar9 == uVar8) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (float)*(int *)(uVar9 * 4 + lVar2);
        }
        fVar16 = fVar17 * fVar17 + fVar21;
        if (0.0 < fVar16) {
          if (fVar16 < 0.0) {
            fVar16 = sqrtf(fVar16);
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          if ((fVar26 <= fVar16) &&
             ((fVar18 = (fVar17 * fVar20 + fVar23 * fVar19) / fVar16, fVar22 + fVar25 < fVar18 ||
              ((fVar22 - fVar25 < fVar18 && (fVar15 < fVar16)))))) {
            fVar22 = fVar18;
            fVar15 = fVar16;
            _X = fVar23;
            fVar24 = fVar17;
          }
        }
        if (uVar9 + 1 == uVar8) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (float)*(int *)(uVar9 * 4 + 4 + lVar2);
        }
        fVar16 = fVar17 * fVar17 + fVar21;
        if (0.0 < fVar16) {
          if (fVar16 < 0.0) {
            fVar16 = sqrtf(fVar16);
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          if ((fVar26 <= fVar16) &&
             ((fVar18 = (fVar17 * fVar20 + fVar23 * fVar19) / fVar16, fVar22 + fVar25 < fVar18 ||
              ((fVar22 - fVar25 < fVar18 && (fVar15 < fVar16)))))) {
            fVar22 = fVar18;
            fVar15 = fVar16;
            _X = fVar23;
            fVar24 = fVar17;
          }
        }
        if (uVar9 + 2 == uVar8) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (float)*(int *)(lVar2 + (uVar9 + 2) * 4);
        }
        fVar16 = fVar17 * fVar17 + fVar21;
        if (0.0 < fVar16) {
          if (fVar16 < 0.0) {
            fVar16 = sqrtf(fVar16);
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          if ((fVar26 <= fVar16) &&
             ((fVar18 = (fVar17 * fVar20 + fVar23 * fVar19) / fVar16, fVar22 + fVar25 < fVar18 ||
              ((fVar22 - fVar25 < fVar18 && (fVar15 < fVar16)))))) {
            fVar22 = fVar18;
            fVar15 = fVar16;
            _X = fVar23;
            fVar24 = fVar17;
          }
        }
        if (uVar9 + 3 == uVar8) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (float)*(int *)(lVar2 + (uVar9 + 3) * 4);
        }
        fVar16 = fVar17 * fVar17 + fVar21;
        if (0.0 < fVar16) {
          if (fVar16 < 0.0) {
            fVar16 = sqrtf(fVar16);
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          if ((fVar26 <= fVar16) &&
             ((fVar18 = (fVar17 * fVar20 + fVar23 * fVar19) / fVar16, fVar22 + fVar25 < fVar18 ||
              ((fVar22 - fVar25 < fVar18 && (fVar15 < fVar16)))))) {
            fVar22 = fVar18;
            fVar15 = fVar16;
            _X = fVar23;
            fVar24 = fVar17;
          }
        }
        uVar9 = uVar9 + 4;
      } while (uVar9 <= uVar8 - 3);
      if (uVar9 <= uVar8) goto LAB_1800e0ff4;
    }
    uVar11 = uVar11 + 1;
    if (uVar10 < uVar11) {
      if (fVar15 <= 0.0) {
        return 0;
      }
      if (_X == 0.0) {
        _X = 0.0;
      }
      else if (fVar13 < 0.0) {
        _X = (float)((uint)_X ^ DAT_1803817f0);
      }
      param_1[5] = (int)_X;
      fVar25 = 0.0;
      if ((fVar24 != 0.0) && (fVar25 = fVar24, fVar14 < 0.0)) {
        fVar25 = (float)((uint)fVar24 ^ DAT_1803817f0);
      }
      DAT_180425538 = DAT_180425538 + 1;
      param_1[6] = (int)fVar25;
      if (DAT_180425538 % 200 != 1) {
        return 1;
      }
      fVar13 = atan2f((float)((uint)fVar25 ^ DAT_1803817f0),_X);
      fVar13 = fVar13 * DAT_1803810bc;
      fVar12 = fVar12 * DAT_1803810bc;
      fVar14 = (float)FUN_180022110();
      FUN_180014410("[STRAFE] wish=%.2f view=%.2f rel=%.2f -> move=(%.0f,%.0f) solved=%.2f err=%.3f (fwd=%d side=%d min=%.0f)\n"
                    ,(double)DAT_180423568,(double)(float)param_1[3],(double)fVar12,(double)_X,
                    (double)fVar25,(double)fVar13,(double)fVar14,iVar4,local_118,(double)fVar26);
      return 1;
    }
  } while( true );
}



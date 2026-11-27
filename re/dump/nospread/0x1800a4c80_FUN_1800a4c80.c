// 1800a4c80  FUN_1800a4c80
// signature: undefined FUN_1800a4c80()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800a4c80(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  iVar1 = *(int *)(param_1 + 0xa8);
  dVar7 = (double)param_2;
  dVar10 = dVar7 + *(double *)(param_1 + 0xb0);
  dVar8 = dVar7 * dVar7 + *(double *)(param_1 + 0xc0);
  dVar5 = (double)param_3 + *(double *)(param_1 + 0xb8);
  dVar7 = (double)param_3 * dVar7 + *(double *)(param_1 + 200);
  *(double *)(param_1 + 0xb0) = dVar10;
  *(double *)(param_1 + 0xc0) = dVar8;
  *(double *)(param_1 + 0xb8) = dVar5;
  *(double *)(param_1 + 200) = dVar7;
  if ((299 < iVar1) && (iVar1 == (iVar1 / 300) * 300)) {
    dVar11 = (double)iVar1;
    dVar4 = dVar8 * dVar11 - dVar10 * dVar10;
    dVar8 = dVar4 / (dVar11 * dVar11);
    if (DAT_180380e58 < dVar8) {
      dVar4 = (dVar7 * dVar11 - dVar5 * dVar10) / dVar4;
      dVar7 = dVar4 + DAT_180380d08;
      if ((dVar7 <= DAT_180380c48) || (DAT_180380d18 <= dVar7)) {
        FUN_180014410(&DAT_180349cd0,iVar1,dVar4,dVar7,(double)*(float *)(param_1 + 0xd0));
      }
      else {
        fVar12 = (float)dVar4;
        if (*(char *)(param_1 + 0xd4) != '\0') {
          fVar12 = fVar12 * DAT_180380ac0 + *(float *)(param_1 + 0xd0) * DAT_180380ac0;
        }
        *(float *)(param_1 + 0xd0) = fVar12;
        fVar6 = (float)((uint)fVar12 ^ DAT_1803817f0);
        *(undefined1 *)(param_1 + 0xd4) = 1;
        fVar13 = 0.0;
        if ((0.0 <= fVar6) && (fVar13 = DAT_180380b68, fVar6 <= DAT_180380b68)) {
          fVar13 = fVar6;
        }
        if (dVar8 < 0.0) {
          dVar8 = sqrt(dVar8);
        }
        else {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = dVar8;
          auVar9 = sqrtpd(ZEXT816(0),auVar9);
          dVar8 = auVar9._0_8_;
        }
        FUN_180014410("[OCTO-FIT] n=%d d(off.p)/d(eye.p)=%+.3f -> pitch response %.3f, g_MuzzlePitchScale=%.3f (intercept %+.2f, spread %.1fdeg)\n"
                      ,iVar1,dVar4,(double)fVar12 + DAT_180380d08,(double)fVar13,
                      (dVar5 - dVar10 * dVar4) / dVar11,dVar8);
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) / 2;
      dVar8 = *(double *)(param_1 + 0xb8) * _UNK_180381788;
      *(double *)(param_1 + 0xb0) = *(double *)(param_1 + 0xb0) * _DAT_180381780;
      *(double *)(param_1 + 0xb8) = dVar8;
      dVar8 = *(double *)(param_1 + 200) * _UNK_180381788;
      auVar2._8_4_ = SUB84(dVar8,0);
      auVar2._0_8_ = *(double *)(param_1 + 0xc0) * _DAT_180381780;
      auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar2;
    }
    else {
      fVar12 = *(float *)(param_1 + 0xd0);
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      if (dVar8 < 0.0) {
        dVar8 = sqrt(dVar8);
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar8;
        auVar9 = sqrtpd(ZEXT816(0),auVar3);
        dVar8 = auVar9._0_8_;
      }
      FUN_180014410(&DAT_180349c70,iVar1,dVar8,(double)fVar12);
    }
  }
  return;
}



// 0x1800a4c80  FUN_1800a4c80
// size=711 thunk=false
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
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar6;
  
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  iVar1 = *(int *)(param_1 + 0xa8);
  dVar8 = (double)param_2;
  dVar11 = dVar8 + *(double *)(param_1 + 0xb0);
  dVar9 = dVar8 * dVar8 + *(double *)(param_1 + 0xc0);
  dVar5 = (double)param_3 + *(double *)(param_1 + 0xb8);
  dVar8 = (double)param_3 * dVar8 + *(double *)(param_1 + 200);
  *(double *)(param_1 + 0xb0) = dVar11;
  *(double *)(param_1 + 0xc0) = dVar9;
  *(double *)(param_1 + 0xb8) = dVar5;
  *(double *)(param_1 + 200) = dVar8;
  if ((299 < iVar1) && (iVar1 == (iVar1 / 300) * 300)) {
    dVar12 = (double)iVar1;
    dVar4 = dVar9 * dVar12 - dVar11 * dVar11;
    dVar9 = dVar4 / (dVar12 * dVar12);
    if (DAT_180380e58 < dVar9) {
      dVar4 = (dVar8 * dVar12 - dVar5 * dVar11) / dVar4;
      dVar8 = dVar4 + DAT_180380d08;
      if ((dVar8 <= DAT_180380c48) || (DAT_180380d18 <= dVar8)) {
        FUN_180014410(&DAT_180349cd0,iVar1,SUB84(dVar4,0),dVar8,(double)*(float *)(param_1 + 0xd0));
      }
      else {
        fVar13 = (float)dVar4;
        if (*(char *)(param_1 + 0xd4) != '\0') {
          fVar13 = fVar13 * DAT_180380ac0 + *(float *)(param_1 + 0xd0) * DAT_180380ac0;
        }
        *(float *)(param_1 + 0xd0) = fVar13;
        fVar7 = (float)((uint)fVar13 ^ DAT_1803817f0);
        *(undefined1 *)(param_1 + 0xd4) = 1;
        fVar14 = 0.0;
        if ((0.0 <= fVar7) && (fVar14 = DAT_180380b68, fVar7 <= DAT_180380b68)) {
          fVar14 = fVar7;
        }
        if (dVar9 < 0.0) {
          dVar9 = sqrt(dVar9);
        }
        else {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = dVar9;
          auVar10 = sqrtpd(ZEXT816(0),auVar10);
          dVar9 = auVar10._0_8_;
        }
        FUN_180014410("[OCTO-FIT] n=%d d(off.p)/d(eye.p)=%+.3f -> pitch response %.3f, g_MuzzlePitchScale=%.3f (intercept %+.2f, spread %.1fdeg)\n"
                      ,iVar1,SUB84(dVar4,0),(double)fVar13 + DAT_180380d08,(double)fVar14,
                      (dVar5 - dVar11 * dVar4) / dVar12,dVar9);
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) / 2;
      dVar9 = *(double *)(param_1 + 0xb8) * _UNK_180381788;
      *(double *)(param_1 + 0xb0) = *(double *)(param_1 + 0xb0) * _DAT_180381780;
      *(double *)(param_1 + 0xb8) = dVar9;
      dVar9 = *(double *)(param_1 + 200) * _UNK_180381788;
      auVar2._8_4_ = SUB84(dVar9,0);
      auVar2._0_8_ = *(double *)(param_1 + 0xc0) * _DAT_180381780;
      auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar2;
    }
    else {
      fVar13 = *(float *)(param_1 + 0xd0);
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      if (dVar9 < 0.0) {
        dVar9 = sqrt(dVar9);
        uVar6 = SUB84(dVar9,0);
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar9;
        auVar10 = sqrtpd(ZEXT816(0),auVar3);
        uVar6 = auVar10._0_4_;
      }
      FUN_180014410(&DAT_180349c70,iVar1,uVar6,(double)fVar13);
    }
  }
  return;
}



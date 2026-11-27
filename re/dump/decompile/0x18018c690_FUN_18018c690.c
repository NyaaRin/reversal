// 0x18018c690  FUN_18018c690
// size=1196 thunk=false
// signature: undefined FUN_18018c690()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18018c690(float *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 unaff_XMM12 [16];
  double local_res10;
  
  auVar15._0_8_ = (double)param_2[9];
  auVar15._8_8_ = 0;
  dVar6 = (double)param_2[5];
  dVar17 = (double)param_2[1];
  dVar4 = (double)param_2[8];
  dVar7 = (double)param_2[4];
  dVar5 = (double)param_2[10];
  dVar3 = auVar15._0_8_ * dVar7 - dVar4 * dVar6;
  dVar9 = (double)param_2[6];
  auVar21._0_8_ = dVar5 * dVar7;
  auVar21._8_8_ = 0;
  dVar18 = dVar5 * dVar6 - auVar15._0_8_ * dVar9;
  dVar8 = (double)*param_2;
  dVar10 = (double)param_2[2];
  dVar14 = (dVar18 * dVar8 - (auVar21._0_8_ - dVar4 * dVar9) * dVar17) + dVar3 * dVar10;
  dVar19 = dVar6 * dVar6 + dVar17 * dVar17 + auVar15._0_8_ * auVar15._0_8_;
  if (dVar19 < 0.0) {
    local_res10 = sqrt(dVar19);
  }
  else {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar19;
    auVar16 = sqrtpd(auVar15,auVar16);
    local_res10 = auVar16._0_8_;
  }
  dVar19 = dVar7 * dVar7 + dVar8 * dVar8 + dVar4 * dVar4;
  if (dVar19 < 0.0) {
    dVar19 = sqrt(dVar19);
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar19;
    auVar16 = sqrtpd(auVar21,auVar1);
    dVar19 = auVar16._0_8_;
  }
  dVar20 = dVar9 * dVar9 + dVar10 * dVar10 + dVar5 * dVar5;
  if (dVar20 < 0.0) {
    dVar20 = sqrt(dVar20);
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar20;
    auVar16 = sqrtpd(unaff_XMM12,auVar2);
    dVar20 = auVar16._0_8_;
  }
  sVar11 = _dclass(SUB84(dVar14,0));
  if (sVar11 < 1) {
    dVar20 = dVar19 * local_res10 * dVar20;
    sVar11 = _dclass(SUB84(dVar20,0));
    if (((sVar11 < 1) && (DAT_180380950 < dVar20)) &&
       (dVar20 * _DAT_180380a30 <
        (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar14,0) & _DAT_1803817d0))) {
      dVar14 = DAT_180380d08 / dVar14;
      dVar22 = (double)*param_1 - (double)param_2[3];
      dVar20 = (double)param_1[1] - (double)param_2[7];
      dVar19 = (double)param_1[2] - (double)param_2[0xb];
      dVar18 = ((auVar15._0_8_ * dVar10 - dVar5 * dVar17) * dVar20 + dVar22 * dVar18 +
               (dVar9 * dVar17 - dVar6 * dVar10) * dVar19) * dVar14;
      sVar11 = _dclass(SUB84(dVar18,0));
      if (sVar11 < 1) {
        dVar5 = ((dVar5 * dVar8 - dVar4 * dVar10) * dVar20 +
                 (dVar4 * dVar9 - auVar21._0_8_) * dVar22 +
                (dVar7 * dVar10 - dVar9 * dVar8) * dVar19) * dVar14;
        sVar11 = _dclass(SUB84(dVar5,0));
        if (sVar11 < 1) {
          dVar14 = ((dVar4 * dVar17 - auVar15._0_8_ * dVar8) * dVar20 + dVar22 * dVar3 +
                   (dVar6 * dVar8 - dVar7 * dVar17) * dVar19) * dVar14;
          sVar11 = _dclass(SUB84(dVar14,0));
          if (((sVar11 < 1) &&
              (uVar12 = SUB84(dVar18,0) & _DAT_1803817d0,
              uVar13 = (uint)((ulonglong)dVar18 >> 0x20) & _UNK_1803817d4,
              (double)CONCAT44(uVar13,uVar12) < DAT_1803812e8 ||
              (double)CONCAT44(uVar13,uVar12) == DAT_1803812e8)) &&
             ((uVar12 = SUB84(dVar5,0) & _DAT_1803817d0,
              uVar13 = (uint)((ulonglong)dVar5 >> 0x20) & _UNK_1803817d4,
              (double)CONCAT44(uVar13,uVar12) < DAT_1803812e8 ||
              (double)CONCAT44(uVar13,uVar12) == DAT_1803812e8 &&
              (uVar12 = SUB84(dVar14,0) & _DAT_1803817d0,
              uVar13 = (uint)((ulonglong)dVar14 >> 0x20) & _UNK_1803817d4,
              (double)CONCAT44(uVar13,uVar12) < DAT_1803812e8 ||
              (double)CONCAT44(uVar13,uVar12) == DAT_1803812e8)))) {
            *param_3 = (float)dVar18;
            param_3[1] = (float)dVar5;
            param_3[2] = (float)dVar14;
            sVar11 = _fdclass();
            if (((sVar11 < 1) && (sVar11 = _fdclass((float)dVar5), sVar11 < 1)) &&
               (sVar11 = _fdclass((float)dVar14), sVar11 < 1)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



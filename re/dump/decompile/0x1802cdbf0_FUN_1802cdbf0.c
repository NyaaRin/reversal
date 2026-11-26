// 0x1802cdbf0  FUN_1802cdbf0
// size=1068 thunk=false
// signature: undefined FUN_1802cdbf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802cdbf0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                   float param_5,float param_6)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  uint uVar12;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar4 = DAT_1803817e0._4_4_;
  uVar3 = (uint)DAT_1803817e0;
  fVar2 = DAT_180380bb0;
  if (param_3 == param_4) {
    return 0.0;
  }
  if (param_3 < param_4) {
    uVar5 = param_3;
    if ((param_3 <= param_2) && (uVar5 = param_2, param_4 < param_2)) {
      uVar5 = param_4;
    }
  }
  else {
    uVar5 = param_4;
    if ((param_4 <= param_2) && (uVar5 = param_2, param_3 < param_2)) {
      uVar5 = param_3;
    }
  }
  if (0.0 < param_5) {
    uVar6 = param_3;
    uVar1 = param_4;
    if (param_3 <= param_4) {
      uVar6 = param_4;
      uVar1 = param_3;
    }
    dVar11 = (double)param_5;
    dVar10 = (double)uVar1;
    fVar14 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar13 = (float)uVar1;
    if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar10,0) & _DAT_1803817d0) < dVar11) {
      fVar7 = param_5;
      if (fVar13 < 0.0) {
        fVar7 = fVar14;
      }
      dVar10 = (double)fVar7;
    }
    dVar9 = (double)uVar6;
    fVar7 = (float)uVar6;
    if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar9,0) & _DAT_1803817d0) < dVar11) {
      if (fVar7 < 0.0) {
        param_5 = fVar14;
      }
      dVar9 = (double)param_5;
    }
    if ((fVar13 != 0.0) || (0.0 <= fVar7)) {
      if ((fVar7 == 0.0) && (fVar13 < 0.0)) {
        dVar9 = (double)fVar14;
      }
    }
    else {
      dVar10 = (double)fVar14;
    }
    uVar17 = (uint)((ulonglong)dVar10 >> 0x20);
    dVar8 = (double)uVar5;
    fVar14 = 0.0;
    if ((dVar10 < dVar8) && (fVar14 = DAT_180380bb0, dVar8 < dVar9)) {
      uVar12 = (uint)((ulonglong)dVar8 >> 0x20);
      if (0.0 <= (float)(uVar6 * uVar1)) {
        if ((fVar13 < 0.0) || (fVar7 < 0.0)) {
          uVar15 = SUB84(dVar9,0) ^ (uint)DAT_1803817e0;
          uVar16 = (uint)((ulonglong)dVar9 >> 0x20) ^ DAT_1803817e0._4_4_;
          dVar11 = log((double)CONCAT44(uVar12 ^ DAT_1803817e0._4_4_,
                                        SUB84(dVar8,0) ^ (uint)DAT_1803817e0) /
                       (double)CONCAT44(uVar16,uVar15));
          dVar10 = log((double)CONCAT44(uVar17 ^ uVar4,SUB84(dVar10,0) ^ uVar3) /
                       (double)CONCAT44(uVar16,uVar15));
          fVar14 = fVar2 - (float)(dVar11 / dVar10);
        }
        else {
          dVar11 = log(dVar8 / dVar10);
          dVar10 = log(dVar9 / dVar10);
          fVar14 = (float)(dVar11 / dVar10);
        }
      }
      else {
        fVar14 = (float)((uint)fVar13 ^ DAT_1803817f0) / (fVar7 - fVar13);
        if ((float)param_2 != 0.0) {
          if (0.0 <= (float)param_2) {
            dVar10 = log(dVar8 / dVar11);
            dVar11 = log(dVar9 / dVar11);
            fVar14 = (float)(dVar10 / dVar11) * (fVar2 - (fVar14 + param_6)) + fVar14 + param_6;
          }
          else {
            dVar9 = log((double)CONCAT44(uVar12 ^ DAT_1803817e0._4_4_,
                                         SUB84(dVar8,0) ^ (uint)DAT_1803817e0) / dVar11);
            dVar10 = log((double)CONCAT44(uVar17 ^ DAT_1803817e0._4_4_,
                                          SUB84(dVar10,0) ^ (uint)DAT_1803817e0) / dVar11);
            fVar14 = (fVar2 - (float)(dVar9 / dVar10)) * (fVar14 - param_6);
          }
        }
      }
    }
    if (param_4 < param_3) {
      return fVar2 - fVar14;
    }
    return fVar14;
  }
  return (float)((double)(longlong)(uVar5 - param_3) / (double)(longlong)(param_4 - param_3));
}



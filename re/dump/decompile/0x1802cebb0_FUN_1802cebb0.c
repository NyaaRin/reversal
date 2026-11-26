// 0x1802cebb0  FUN_1802cebb0
// size=843 thunk=false
// signature: undefined FUN_1802cebb0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802cebb0(undefined8 param_1,double param_2,double param_3,double param_4,
                       float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar6 = DAT_1803817e0._4_4_;
  uVar5 = (uint)DAT_1803817e0;
  fVar4 = DAT_180380bb0;
  uVar13 = SUB84(param_3,0);
  if (param_3 == param_4) {
    return 0;
  }
  dVar7 = param_3;
  dVar8 = param_4;
  if (param_3 < param_4) {
    dVar7 = param_4;
    dVar8 = param_3;
  }
  if ((dVar8 <= param_2) && (dVar8 = dVar7, param_2 <= dVar7)) {
    dVar8 = param_2;
  }
  if (param_5 <= 0.0) {
    uVar9 = (ulonglong)(uint)(float)((dVar8 - param_3) / (param_4 - param_3));
  }
  else {
    dVar7 = param_4;
    uVar14 = (uint)((ulonglong)param_3 >> 0x20);
    if (param_4 < param_3) {
      uVar13 = SUB84(param_4,0);
      dVar7 = param_3;
      uVar14 = (uint)((ulonglong)param_4 >> 0x20);
    }
    dVar2 = (double)CONCAT44(uVar14,uVar13);
    dVar3 = (double)param_5;
    fVar11 = (float)((uint)param_5 ^ DAT_1803817f0);
    if ((double)CONCAT44(uVar14 & _UNK_1803817d4,uVar13 & _DAT_1803817d0) < dVar3) {
      if (0.0 < (double)CONCAT44(uVar14,uVar13) || (double)CONCAT44(uVar14,uVar13) == 0.0) {
        dVar2 = (double)param_5;
      }
      else {
        dVar2 = (double)fVar11;
      }
    }
    dVar1 = dVar7;
    if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar7,0) & _DAT_1803817d0) < dVar3) {
      if (dVar7 < 0.0) {
        param_5 = fVar11;
      }
      dVar1 = (double)param_5;
    }
    if (((double)CONCAT44(uVar14,uVar13) != 0.0) || (0.0 <= dVar7)) {
      if ((dVar7 == 0.0) &&
         ((double)CONCAT44(uVar14,uVar13) <= 0.0 && (double)CONCAT44(uVar14,uVar13) != 0.0)) {
        dVar1 = (double)fVar11;
      }
    }
    else {
      dVar2 = (double)fVar11;
    }
    uVar15 = (uint)((ulonglong)dVar2 >> 0x20);
    fVar11 = 0.0;
    uVar12 = 0;
    if ((dVar2 < dVar8) && (uVar12 = 0, fVar11 = DAT_180380bb0, dVar8 < dVar1)) {
      uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
      if (0.0 <= (double)CONCAT44(uVar14,uVar13) * dVar7) {
        if (((double)CONCAT44(uVar14,uVar13) <= 0.0 && (double)CONCAT44(uVar14,uVar13) != 0.0) ||
           (dVar7 < 0.0)) {
          uVar13 = SUB84(dVar1,0) ^ (uint)DAT_1803817e0;
          uVar14 = (uint)((ulonglong)dVar1 >> 0x20) ^ DAT_1803817e0._4_4_;
          dVar7 = log((double)CONCAT44(uVar10 ^ DAT_1803817e0._4_4_,
                                       SUB84(dVar8,0) ^ (uint)DAT_1803817e0) /
                      (double)CONCAT44(uVar14,uVar13));
          dVar8 = log((double)CONCAT44(uVar15 ^ uVar6,SUB84(dVar2,0) ^ uVar5) /
                      (double)CONCAT44(uVar14,uVar13));
          uVar12 = 0;
          fVar11 = fVar4 - (float)(dVar7 / dVar8);
        }
        else {
          dVar7 = log(dVar8 / dVar2);
          dVar8 = log(dVar1 / dVar2);
          uVar12 = 0;
          fVar11 = (float)(dVar7 / dVar8);
        }
      }
      else {
        fVar11 = (float)((uint)(float)(double)CONCAT44(uVar14,uVar13) ^ DAT_1803817f0) /
                 ((float)dVar7 - (float)(double)CONCAT44(uVar14,uVar13));
        uVar12 = _UNK_1803817f4;
        if (param_2 != 0.0) {
          if (0.0 <= param_2) {
            dVar7 = log(dVar8 / dVar3);
            dVar8 = log(dVar1 / dVar3);
            uVar12 = 0;
            fVar11 = (float)(dVar7 / dVar8) * (fVar4 - (fVar11 + param_6)) + fVar11 + param_6;
          }
          else {
            dVar7 = log((double)CONCAT44(uVar10 ^ DAT_1803817e0._4_4_,
                                         SUB84(dVar8,0) ^ (uint)DAT_1803817e0) / dVar3);
            dVar8 = log((double)CONCAT44(uVar15 ^ DAT_1803817e0._4_4_,
                                         SUB84(dVar2,0) ^ (uint)DAT_1803817e0) / dVar3);
            uVar12 = 0;
            fVar11 = (fVar4 - (float)(dVar7 / dVar8)) * (fVar11 - param_6);
          }
        }
      }
    }
    if (param_3 <= param_4) {
      uVar9 = CONCAT44(uVar12,fVar11);
    }
    else {
      uVar9 = (ulonglong)(uint)(fVar4 - fVar11);
    }
  }
  return uVar9;
}



// 0x1802cd4c0  FUN_1802cd4c0
// size=874 thunk=false
// signature: undefined FUN_1802cd4c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802cd4c0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                   float param_5,float param_6)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  float fVar12;
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
    lVar5 = param_3;
    if ((param_3 <= param_2) && (lVar5 = param_2, param_4 < param_2)) {
      lVar5 = param_4;
    }
  }
  else {
    lVar5 = param_4;
    if ((param_4 <= param_2) && (lVar5 = param_2, param_3 < param_2)) {
      lVar5 = param_3;
    }
  }
  if (param_5 <= 0.0) {
    return (float)((double)(lVar5 - param_3) / (double)(param_4 - param_3));
  }
  lVar6 = param_3;
  lVar1 = param_4;
  if (param_3 <= param_4) {
    lVar6 = param_4;
    lVar1 = param_3;
  }
  dVar8 = (double)lVar1;
  dVar9 = (double)param_5;
  fVar13 = (float)((uint)param_5 ^ DAT_1803817f0);
  fVar14 = (float)lVar1;
  if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_1803817d4,
                       SUB84(dVar8,0) & _DAT_1803817d0) < dVar9) {
    fVar12 = param_5;
    if (fVar14 < 0.0) {
      fVar12 = fVar13;
    }
    dVar8 = (double)fVar12;
  }
  dVar7 = (double)lVar6;
  fVar12 = (float)lVar6;
  if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_1803817d4,
                       SUB84(dVar7,0) & _DAT_1803817d0) < dVar9) {
    if (fVar12 < 0.0) {
      param_5 = fVar13;
    }
    dVar7 = (double)param_5;
  }
  if ((fVar14 != 0.0) || (0.0 <= fVar12)) {
    if ((fVar12 == 0.0) && (fVar14 < 0.0)) {
      dVar7 = (double)fVar13;
    }
  }
  else {
    dVar8 = (double)fVar13;
  }
  uVar17 = (uint)((ulonglong)dVar8 >> 0x20);
  dVar10 = (double)lVar5;
  fVar13 = 0.0;
  if ((dVar8 < dVar10) && (fVar13 = DAT_180380bb0, dVar10 < dVar7)) {
    uVar11 = (uint)((ulonglong)dVar10 >> 0x20);
    if (0.0 <= (float)(lVar6 * lVar1)) {
      if ((fVar14 < 0.0) || (fVar12 < 0.0)) {
        uVar15 = SUB84(dVar7,0) ^ (uint)DAT_1803817e0;
        uVar16 = (uint)((ulonglong)dVar7 >> 0x20) ^ DAT_1803817e0._4_4_;
        dVar9 = log((double)CONCAT44(uVar11 ^ DAT_1803817e0._4_4_,
                                     SUB84(dVar10,0) ^ (uint)DAT_1803817e0) /
                    (double)CONCAT44(uVar16,uVar15));
        dVar8 = log((double)CONCAT44(uVar17 ^ uVar4,SUB84(dVar8,0) ^ uVar3) /
                    (double)CONCAT44(uVar16,uVar15));
        fVar13 = fVar2 - (float)(dVar9 / dVar8);
      }
      else {
        dVar9 = log(dVar10 / dVar8);
        dVar8 = log(dVar7 / dVar8);
        fVar13 = (float)(dVar9 / dVar8);
      }
    }
    else {
      fVar13 = (float)((uint)fVar14 ^ DAT_1803817f0) / (fVar12 - fVar14);
      if ((float)param_2 != 0.0) {
        if (0.0 <= (float)param_2) {
          dVar8 = log(dVar10 / dVar9);
          dVar9 = log(dVar7 / dVar9);
          fVar13 = (float)(dVar8 / dVar9) * (fVar2 - (fVar13 + param_6)) + fVar13 + param_6;
        }
        else {
          dVar7 = log((double)CONCAT44(uVar11 ^ DAT_1803817e0._4_4_,
                                       SUB84(dVar10,0) ^ (uint)DAT_1803817e0) / dVar9);
          dVar8 = log((double)CONCAT44(uVar17 ^ DAT_1803817e0._4_4_,
                                       SUB84(dVar8,0) ^ (uint)DAT_1803817e0) / dVar9);
          fVar13 = (fVar2 - (float)(dVar7 / dVar8)) * (fVar13 - param_6);
        }
      }
    }
  }
  if (param_3 <= param_4) {
    return fVar13;
  }
  return fVar2 - fVar13;
}



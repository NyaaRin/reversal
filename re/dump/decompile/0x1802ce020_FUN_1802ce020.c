// 0x1802ce020  FUN_1802ce020
// size=1014 thunk=false
// signature: undefined FUN_1802ce020()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802ce020(int param_1,float param_2,ulonglong param_3,ulonglong param_4,float param_5,
                       float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  
  uVar5 = DAT_1803817e0._4_4_;
  uVar4 = (uint)DAT_1803817e0;
  if ((param_2 <= 0.0) || (param_3 == param_4)) {
    return param_3;
  }
  if (DAT_180380bb0 <= param_2) {
    return param_4;
  }
  if (param_5 <= 0.0) {
    if (param_1 - 8U < 2) {
      fVar9 = (float)(param_4 - param_3) * param_2 + (float)param_3;
      lVar7 = 0;
      if ((DAT_180381300 <= fVar9) && (fVar9 = fVar9 - DAT_180381300, fVar9 < DAT_180381300)) {
        lVar7 = -0x8000000000000000;
      }
      uVar6 = (longlong)fVar9 + lVar7;
    }
    else {
      uVar6 = 0;
      if (param_2 < DAT_180380bb0) {
        dVar8 = DAT_180380cb0;
        if (param_4 < param_3) {
          dVar8 = DAT_1803813a8;
        }
        uVar6 = (longlong)((double)((float)(longlong)(param_4 - param_3) * param_2) + dVar8) +
                param_3;
      }
    }
  }
  else {
    dVar2 = (double)param_5;
    dVar8 = (double)param_3;
    fVar14 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar9 = (float)param_3;
    if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar8,0) & _DAT_1803817d0) < dVar2) {
      fVar10 = param_5;
      if (fVar9 < 0.0) {
        fVar10 = fVar14;
      }
      dVar8 = (double)fVar10;
    }
    dVar1 = (double)param_4;
    fVar10 = (float)param_4;
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & _UNK_1803817d4,
                         SUB84(dVar1,0) & _DAT_1803817d0) < dVar2) {
      if (fVar10 < 0.0) {
        param_5 = fVar14;
      }
      dVar1 = (double)param_5;
    }
    dVar3 = dVar8;
    if (param_4 < param_3) {
      dVar3 = dVar1;
      dVar1 = dVar8;
    }
    uVar13 = (uint)((ulonglong)dVar3 >> 0x20);
    if ((fVar10 == 0.0) && (fVar9 < 0.0)) {
      dVar1 = (double)fVar14;
    }
    if (param_4 < param_3) {
      param_2 = DAT_180380bb0 - param_2;
    }
    if (0.0 <= (float)(param_3 * param_4)) {
      if ((fVar9 < 0.0) || (fVar10 < 0.0)) {
        uVar11 = SUB84(dVar1,0) ^ (uint)DAT_1803817e0;
        uVar12 = (uint)((ulonglong)dVar1 >> 0x20) ^ DAT_1803817e0._4_4_;
        dVar8 = pow((double)CONCAT44(uVar13 ^ DAT_1803817e0._4_4_,
                                     SUB84(dVar3,0) ^ (uint)DAT_1803817e0) /
                    (double)CONCAT44(uVar12,uVar11),(double)(DAT_180380bb0 - param_2));
        dVar8 = dVar8 * (double)CONCAT44(uVar12,uVar11);
        dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar5,SUB84(dVar8,0) ^ uVar4);
      }
      else {
        dVar8 = pow(dVar1 / dVar3,(double)param_2);
        dVar8 = dVar8 * dVar3;
      }
    }
    else {
      if (param_3 < param_4) {
        param_4 = param_3;
      }
      fVar9 = (float)((uint)(float)param_4 ^ DAT_1803817f0) /
              (float)((uint)(fVar10 - fVar9) & _DAT_1803817c0);
      fVar14 = fVar9 + param_6;
      if ((fVar9 - param_6 <= param_2) && (param_2 <= fVar14)) {
        return 0;
      }
      if (fVar9 <= param_2) {
        dVar8 = pow(dVar1 / dVar2,(double)((param_2 - fVar14) / (DAT_180380bb0 - fVar14)));
        dVar8 = dVar8 * dVar2;
      }
      else {
        dVar8 = pow((double)CONCAT44(uVar13 ^ DAT_1803817e0._4_4_,
                                     SUB84(dVar3,0) ^ (uint)DAT_1803817e0) / dVar2,
                    (double)(DAT_180380bb0 - param_2 / (fVar9 - param_6)));
        dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar2) >> 0x20) ^ DAT_1803817e0._4_4_,
                                 SUB84(dVar8 * dVar2,0) ^ (uint)DAT_1803817e0);
      }
    }
    lVar7 = 0;
    if ((DAT_180381238 <= dVar8) && (dVar8 = dVar8 - DAT_180381238, dVar8 < DAT_180381238)) {
      lVar7 = -0x8000000000000000;
    }
    uVar6 = (longlong)dVar8 + lVar7;
  }
  return uVar6;
}



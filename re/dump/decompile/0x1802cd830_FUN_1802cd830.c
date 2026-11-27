// 0x1802cd830  FUN_1802cd830
// size=712 thunk=false
// signature: undefined FUN_1802cd830()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1802cd830(int param_1,float param_2,longlong param_3,longlong param_4,float param_5,
                      float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  uVar5 = DAT_1803817e0._4_4_;
  uVar4 = (uint)DAT_1803817e0;
  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (DAT_180380bb0 <= param_2) {
      return param_4;
    }
    if (param_5 <= 0.0) {
      if (param_1 - 8U < 2) {
        lVar6 = (longlong)((float)(param_4 - param_3) * param_2 + (float)param_3);
      }
      else {
        lVar6 = 0;
        if (param_2 < DAT_180380bb0) {
          dVar7 = DAT_180380cb0;
          if (param_4 < param_3) {
            dVar7 = DAT_1803813a8;
          }
          lVar6 = (longlong)((double)((float)(param_4 - param_3) * param_2) + dVar7) + param_3;
        }
      }
    }
    else {
      fVar8 = (float)((uint)param_5 ^ DAT_1803817f0);
      dVar7 = (double)param_3;
      dVar2 = (double)param_5;
      fVar13 = (float)param_3;
      if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_1803817d4,
                           SUB84(dVar7,0) & _DAT_1803817d0) < dVar2) {
        fVar9 = param_5;
        if (fVar13 < 0.0) {
          fVar9 = fVar8;
        }
        dVar7 = (double)fVar9;
      }
      dVar1 = (double)param_4;
      fVar9 = (float)param_4;
      if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & _UNK_1803817d4,
                           SUB84(dVar1,0) & _DAT_1803817d0) < dVar2) {
        if (fVar9 < 0.0) {
          param_5 = fVar8;
        }
        dVar1 = (double)param_5;
      }
      dVar3 = dVar7;
      if (param_4 < param_3) {
        dVar3 = dVar1;
        dVar1 = dVar7;
      }
      uVar12 = (uint)((ulonglong)dVar3 >> 0x20);
      if ((fVar9 == 0.0) && (fVar13 < 0.0)) {
        dVar1 = (double)fVar8;
      }
      if (param_4 < param_3) {
        param_2 = DAT_180380bb0 - param_2;
      }
      if (0.0 <= (float)(param_3 * param_4)) {
        if ((fVar13 < 0.0) || (fVar9 < 0.0)) {
          uVar10 = SUB84(dVar1,0) ^ (uint)DAT_1803817e0;
          uVar11 = (uint)((ulonglong)dVar1 >> 0x20) ^ DAT_1803817e0._4_4_;
          dVar7 = pow((double)CONCAT44(uVar12 ^ DAT_1803817e0._4_4_,
                                       SUB84(dVar3,0) ^ (uint)DAT_1803817e0) /
                      (double)CONCAT44(uVar11,uVar10),(double)(DAT_180380bb0 - param_2));
          dVar7 = dVar7 * (double)CONCAT44(uVar11,uVar10);
          lVar6 = (longlong)
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar5,SUB84(dVar7,0) ^ uVar4);
        }
        else {
          dVar7 = pow(dVar1 / dVar3,(double)param_2);
          lVar6 = (longlong)(dVar7 * dVar3);
        }
      }
      else {
        if (param_3 < param_4) {
          param_4 = param_3;
        }
        fVar13 = (float)((uint)(float)param_4 ^ DAT_1803817f0) /
                 (float)((uint)(fVar9 - fVar13) & _DAT_1803817c0);
        fVar8 = fVar13 + param_6;
        if ((param_2 < fVar13 - param_6) || (fVar8 < param_2)) {
          if (fVar13 <= param_2) {
            dVar7 = pow(dVar1 / dVar2,(double)((param_2 - fVar8) / (DAT_180380bb0 - fVar8)));
            lVar6 = (longlong)(dVar7 * dVar2);
          }
          else {
            dVar7 = pow((double)CONCAT44(uVar12 ^ DAT_1803817e0._4_4_,
                                         SUB84(dVar3,0) ^ (uint)DAT_1803817e0) / dVar2,
                        (double)(DAT_180380bb0 - param_2 / (fVar13 - param_6)));
            lVar6 = (longlong)
                    (double)CONCAT44((uint)((ulonglong)(dVar7 * dVar2) >> 0x20) ^
                                     DAT_1803817e0._4_4_,
                                     SUB84(dVar7 * dVar2,0) ^ (uint)DAT_1803817e0);
          }
        }
        else {
          lVar6 = 0;
        }
      }
    }
    return lVar6;
  }
  return param_3;
}



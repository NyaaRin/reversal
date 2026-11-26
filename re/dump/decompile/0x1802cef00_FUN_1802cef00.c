// 0x1802cef00  FUN_1802cef00
// size=748 thunk=false
// signature: undefined FUN_1802cef00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1802cef00(int param_1,float param_2,double param_3,double param_4,float param_5,
                    float param_6)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  
  uVar2 = (uint)DAT_1803817e0;
  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (DAT_180380bb0 <= param_2) {
      return param_4;
    }
    if (param_5 <= 0.0) {
      if (param_1 - 8U < 2) {
        dVar4 = (double)((float)(param_4 - param_3) * param_2 + (float)param_3);
      }
      else if (DAT_180380bb0 <= param_2) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = (param_4 - param_3) * (double)param_2;
        if (param_3 <= param_4) {
          dVar4 = dVar4 + DAT_180380cb0 + param_3;
        }
        else {
          dVar4 = dVar4 + DAT_1803813a8 + param_3;
        }
      }
    }
    else {
      dVar8 = (double)param_5;
      fVar5 = (float)((uint)param_5 ^ DAT_1803817f0);
      dVar4 = 0.0;
      dVar3 = param_3;
      if ((double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) & _UNK_1803817d4,
                           SUB84(param_3,0) & _DAT_1803817d0) < dVar8) {
        if (0.0 <= param_3) {
          dVar3 = (double)param_5;
        }
        else {
          dVar3 = (double)fVar5;
        }
      }
      dVar7 = param_4;
      if ((double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & _UNK_1803817d4,
                           SUB84(param_4,0) & _DAT_1803817d0) < dVar8) {
        if (param_4 < 0.0) {
          param_5 = fVar5;
        }
        dVar7 = (double)param_5;
      }
      dVar1 = dVar3;
      if (param_4 < param_3) {
        dVar1 = dVar7;
        dVar7 = dVar3;
      }
      uVar9 = (uint)((ulonglong)dVar1 >> 0x20);
      if ((param_4 == 0.0) && (param_3 < 0.0)) {
        dVar7 = (double)fVar5;
      }
      if (param_4 < param_3) {
        param_2 = DAT_180380bb0 - param_2;
      }
      if (0.0 <= param_3 * param_4) {
        if ((param_3 < 0.0) || (param_4 < 0.0)) {
          dVar8 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ DAT_1803817e0._4_4_,
                                   SUB84(dVar7,0) ^ (uint)DAT_1803817e0);
          dVar4 = pow((double)CONCAT44(uVar9 ^ DAT_1803817e0._4_4_,
                                       SUB84(dVar1,0) ^ (uint)DAT_1803817e0) / dVar8,
                      (double)(DAT_180380bb0 - param_2));
          dVar4 = (double)(ulonglong)(SUB84(dVar4 * dVar8,0) ^ uVar2);
        }
        else {
          dVar4 = pow(dVar7 / dVar1,(double)param_2);
          dVar4 = dVar4 * dVar1;
        }
      }
      else {
        dVar3 = param_3;
        if (param_4 <= param_3) {
          dVar3 = param_4;
        }
        fVar6 = (float)((uint)(float)dVar3 ^ DAT_1803817f0) /
                (float)((uint)((float)param_4 - (float)param_3) & _DAT_1803817c0);
        fVar5 = fVar6 + param_6;
        if ((param_2 < fVar6 - param_6) || (fVar5 < param_2)) {
          if (fVar6 <= param_2) {
            dVar4 = pow(dVar7 / dVar8,(double)((param_2 - fVar5) / (DAT_180380bb0 - fVar5)));
            dVar4 = dVar4 * dVar8;
          }
          else {
            dVar4 = pow((double)CONCAT44(uVar9 ^ DAT_1803817e0._4_4_,
                                         SUB84(dVar1,0) ^ (uint)DAT_1803817e0) / dVar8,
                        (double)(DAT_180380bb0 - param_2 / (fVar6 - param_6)));
            dVar4 = (double)(ulonglong)(SUB84(dVar4 * dVar8,0) ^ (uint)DAT_1803817e0);
          }
        }
      }
    }
    return dVar4;
  }
  return param_3;
}



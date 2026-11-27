// 0x1802cd120  FUN_1802cd120
// size=680 thunk=false
// signature: undefined FUN_1802cd120()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802cd120(int param_1,float param_2,uint param_3,uint param_4,float param_5,
                       float param_6)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = DAT_1803817f0;
  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (DAT_180380bb0 <= param_2) {
      return (ulonglong)param_4;
    }
    if (param_5 <= 0.0) {
      if (param_1 - 8U < 2) {
        uVar2 = (ulonglong)((float)(param_4 - param_3) * param_2 + (float)param_3);
      }
      else {
        uVar2 = 0;
        if (param_2 < DAT_180380bb0) {
          dVar4 = DAT_180380cb0;
          if (param_4 < param_3) {
            dVar4 = DAT_1803813a8;
          }
          uVar2 = (ulonglong)
                  ((int)((float)(int)(param_4 - param_3) * param_2 + (float)dVar4) + param_3);
        }
      }
    }
    else {
      fVar5 = (float)((uint)param_5 ^ DAT_1803817f0);
      fVar9 = (float)param_3;
      fVar3 = fVar9;
      if (((float)((uint)fVar9 & _DAT_1803817c0) < param_5) && (fVar3 = param_5, fVar9 < 0.0)) {
        fVar3 = fVar5;
      }
      fVar6 = (float)param_4;
      fVar7 = fVar6;
      if (((float)((uint)fVar6 & _DAT_1803817c0) < param_5) && (fVar7 = param_5, fVar6 < 0.0)) {
        fVar7 = fVar5;
      }
      fVar8 = fVar7;
      if (param_4 < param_3) {
        fVar8 = fVar3;
        fVar3 = fVar7;
      }
      if ((fVar6 == 0.0) && (fVar9 < 0.0)) {
        fVar8 = fVar5;
      }
      if (param_4 < param_3) {
        param_2 = DAT_180380bb0 - param_2;
      }
      if (0.0 <= (float)(param_3 * param_4)) {
        if ((fVar9 < 0.0) || (fVar6 < 0.0)) {
          fVar8 = (float)((uint)fVar8 ^ DAT_1803817f0);
          fVar3 = powf((float)((uint)fVar3 ^ DAT_1803817f0) / fVar8,DAT_180380bb0 - param_2);
          uVar2 = (ulonglong)(float)((uint)(fVar3 * fVar8) ^ uVar1);
        }
        else {
          fVar5 = powf(fVar8 / fVar3,param_2);
          uVar2 = (ulonglong)(fVar5 * fVar3);
        }
      }
      else {
        if (param_3 < param_4) {
          param_4 = param_3;
        }
        fVar9 = (float)((uint)(float)param_4 ^ DAT_1803817f0) /
                (float)((uint)(fVar6 - fVar9) & _DAT_1803817c0);
        fVar5 = fVar9 + param_6;
        if ((param_2 < fVar9 - param_6) || (fVar5 < param_2)) {
          if (fVar9 <= param_2) {
            fVar3 = powf(fVar8 / param_5,(param_2 - fVar5) / (DAT_180380bb0 - fVar5));
            uVar2 = (ulonglong)(fVar3 * param_5);
          }
          else {
            fVar3 = powf((float)((uint)fVar3 ^ DAT_1803817f0) / param_5,
                         DAT_180380bb0 - param_2 / (fVar9 - param_6));
            uVar2 = (ulonglong)(float)((uint)(fVar3 * param_5) ^ uVar1);
          }
        }
        else {
          uVar2 = 0;
        }
      }
    }
    return uVar2;
  }
  return (ulonglong)param_3;
}



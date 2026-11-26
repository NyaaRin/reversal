// 0x1802cce10  FUN_1802cce10
// size=778 thunk=false
// signature: undefined FUN_1802cce10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cce10(undefined8 param_1,uint param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = DAT_1803817f0;
  if (param_3 != param_4) {
    if (param_3 < param_4) {
      uVar3 = param_3;
      if ((param_3 <= param_2) && (uVar3 = param_2, param_4 < param_2)) {
        uVar3 = param_4;
      }
    }
    else {
      uVar3 = param_4;
      if ((param_4 <= param_2) && (uVar3 = param_2, param_3 < param_2)) {
        uVar3 = param_3;
      }
    }
    if (0.0 < param_5) {
      uVar1 = param_4;
      if (param_3 <= param_4) {
        uVar1 = param_3;
      }
      if (param_3 <= param_4) {
        param_3 = param_4;
      }
      fVar4 = (float)((uint)param_5 ^ DAT_1803817f0);
      fVar7 = (float)uVar1;
      fVar5 = fVar7;
      if (((float)((uint)fVar7 & _DAT_1803817c0) < param_5) && (fVar5 = param_5, fVar7 < 0.0)) {
        fVar5 = fVar4;
      }
      fVar6 = (float)param_3;
      fVar8 = fVar6;
      if (((float)((uint)fVar6 & _DAT_1803817c0) < param_5) && (fVar8 = param_5, fVar6 < 0.0)) {
        fVar8 = fVar4;
      }
      if ((((fVar7 != 0.0) || (fVar9 = fVar4, 0.0 <= fVar6)) && (fVar9 = fVar5, fVar6 == 0.0)) &&
         (fVar7 < 0.0)) {
        fVar8 = fVar4;
      }
      fVar5 = (float)uVar3;
      if ((fVar9 < fVar5) && (fVar5 < fVar8)) {
        if (0.0 <= (float)(param_3 * uVar1)) {
          if ((fVar7 < 0.0) || (fVar6 < 0.0)) {
            fVar8 = (float)((uint)fVar8 ^ DAT_1803817f0);
            logf((float)((uint)fVar5 ^ DAT_1803817f0) / fVar8);
            logf((float)((uint)fVar9 ^ uVar2) / fVar8);
          }
          else {
            logf(fVar5 / fVar9);
            logf(fVar8 / fVar9);
          }
        }
        else if ((float)param_2 != 0.0) {
          if (0.0 <= (float)param_2) {
            logf(fVar5 / param_5);
            logf(fVar8 / param_5);
          }
          else {
            logf((float)((uint)fVar5 ^ DAT_1803817f0) / param_5);
            logf((float)((uint)fVar9 ^ uVar2) / param_5);
          }
        }
      }
    }
    return;
  }
  return;
}



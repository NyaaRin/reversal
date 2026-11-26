// 0x1802cc780  FUN_1802cc780
// size=768 thunk=false
// signature: undefined FUN_1802cc780()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cc780(undefined8 param_1,int param_2,int param_3,int param_4,float param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = DAT_1803817f0;
  if (param_3 == param_4) {
    return;
  }
  if (param_3 < param_4) {
    iVar2 = param_3;
    if ((param_3 <= param_2) && (iVar2 = param_2, param_4 < param_2)) {
      iVar2 = param_4;
    }
  }
  else {
    iVar2 = param_4;
    if ((param_4 <= param_2) && (iVar2 = param_2, param_3 < param_2)) {
      iVar2 = param_3;
    }
  }
  if (0.0 < param_5) {
    iVar3 = param_3;
    if (param_3 <= param_4) {
      iVar3 = param_4;
      param_4 = param_3;
    }
    fVar4 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar7 = (float)param_4;
    fVar5 = fVar7;
    if (((float)((uint)fVar7 & _DAT_1803817c0) < param_5) && (fVar5 = param_5, fVar7 < 0.0)) {
      fVar5 = fVar4;
    }
    fVar6 = (float)iVar3;
    fVar8 = fVar6;
    if (((float)((uint)fVar6 & _DAT_1803817c0) < param_5) && (fVar8 = param_5, fVar6 < 0.0)) {
      fVar8 = fVar4;
    }
    if ((((fVar7 != 0.0) || (fVar9 = fVar4, 0.0 <= fVar6)) && (fVar9 = fVar5, fVar6 == 0.0)) &&
       (fVar7 < 0.0)) {
      fVar8 = fVar4;
    }
    fVar5 = (float)iVar2;
    if ((fVar9 < fVar5) && (fVar5 < fVar8)) {
      if (0.0 <= (float)(iVar3 * param_4)) {
        if ((fVar7 < 0.0) || (fVar6 < 0.0)) {
          fVar8 = (float)((uint)fVar8 ^ DAT_1803817f0);
          logf((float)((uint)fVar5 ^ DAT_1803817f0) / fVar8);
          logf((float)((uint)fVar9 ^ uVar1) / fVar8);
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
          logf((float)((uint)fVar9 ^ uVar1) / param_5);
        }
      }
    }
  }
  return;
}



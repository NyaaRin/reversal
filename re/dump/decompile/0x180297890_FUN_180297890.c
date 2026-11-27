// 0x180297890  FUN_180297890
// size=726 thunk=false
// signature: undefined FUN_180297890()
// status: ok


void FUN_180297890(longlong param_1,int param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = 0.0;
  fVar9 = *param_6;
  fVar5 = *param_7;
  fVar3 = param_7[1];
  fVar10 = param_6[1];
  if (param_5[1] - param_4[1] == 0.0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (fVar3 - fVar10) / (param_5[1] - param_4[1]);
  }
  if (*param_5 - *param_4 != 0.0) {
    fVar8 = (fVar5 - fVar9) / (*param_5 - *param_4);
  }
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 0x14);
  pfVar2 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x14);
  if (pfVar2 < pfVar1) {
    fVar6 = fVar9;
    if (fVar5 <= fVar9) {
      fVar6 = fVar5;
    }
    fVar7 = fVar10;
    if (fVar3 <= fVar10) {
      fVar7 = fVar3;
    }
    if (fVar9 <= fVar5) {
      fVar9 = fVar5;
    }
    if (fVar10 <= fVar3) {
      fVar10 = fVar3;
    }
    if (0x4f < (ulonglong)((longlong)pfVar1 + (0x13 - (longlong)pfVar2))) {
      do {
        fVar3 = (pfVar2[1] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (*pfVar2 - *param_4) * fVar8 + *param_6;
        fVar5 = fVar7;
        if ((fVar7 <= fVar3) && (fVar5 = fVar10, fVar3 <= fVar10)) {
          fVar5 = fVar3;
        }
        fVar3 = fVar6;
        if ((fVar6 <= fVar4) && (fVar3 = fVar9, fVar4 <= fVar9)) {
          fVar3 = fVar4;
        }
        pfVar2[2] = fVar3;
        pfVar2[3] = fVar5;
        fVar3 = (pfVar2[6] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (pfVar2[5] - *param_4) * fVar8 + *param_6;
        fVar5 = fVar7;
        if ((fVar7 <= fVar3) && (fVar5 = fVar10, fVar3 <= fVar10)) {
          fVar5 = fVar3;
        }
        fVar3 = fVar6;
        if ((fVar6 <= fVar4) && (fVar3 = fVar9, fVar4 <= fVar9)) {
          fVar3 = fVar4;
        }
        pfVar2[7] = fVar3;
        pfVar2[8] = fVar5;
        fVar3 = (pfVar2[0xb] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (pfVar2[10] - *param_4) * fVar8 + *param_6;
        fVar5 = fVar7;
        if ((fVar7 <= fVar3) && (fVar5 = fVar10, fVar3 <= fVar10)) {
          fVar5 = fVar3;
        }
        fVar3 = fVar6;
        if ((fVar6 <= fVar4) && (fVar3 = fVar9, fVar4 <= fVar9)) {
          fVar3 = fVar4;
        }
        pfVar2[0xc] = fVar3;
        pfVar2[0xd] = fVar5;
        fVar3 = (pfVar2[0x10] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (pfVar2[0xf] - *param_4) * fVar8 + *param_6;
        fVar5 = fVar7;
        if ((fVar7 <= fVar3) && (fVar5 = fVar10, fVar3 <= fVar10)) {
          fVar5 = fVar3;
        }
        fVar3 = fVar6;
        if ((fVar6 <= fVar4) && (fVar3 = fVar9, fVar4 <= fVar9)) {
          fVar3 = fVar4;
        }
        pfVar2[0x11] = fVar3;
        pfVar2[0x12] = fVar5;
        pfVar2 = pfVar2 + 0x14;
      } while (pfVar2 < pfVar1 + -0xf);
      if (pfVar1 <= pfVar2) {
        return;
      }
    }
    do {
      fVar4 = (pfVar2[1] - param_4[1]) * fVar11 + param_6[1];
      fVar3 = (*pfVar2 - *param_4) * fVar8 + *param_6;
      fVar5 = fVar7;
      if ((fVar7 <= fVar4) && (fVar5 = fVar10, fVar4 <= fVar10)) {
        fVar5 = fVar4;
      }
      fVar4 = fVar6;
      if ((fVar6 <= fVar3) && (fVar4 = fVar9, fVar3 <= fVar9)) {
        fVar4 = fVar3;
      }
      pfVar2[2] = fVar4;
      pfVar2[3] = fVar5;
      pfVar2 = pfVar2 + 5;
    } while (pfVar2 < pfVar1);
  }
  return;
}



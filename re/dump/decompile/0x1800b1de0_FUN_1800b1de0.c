// 0x1800b1de0  FUN_1800b1de0
// size=579 thunk=false
// signature: undefined FUN_1800b1de0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b1de0(float *param_1,float param_2,float param_3,float param_4)

{
  char *pcVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  sVar2 = _fdclass(param_2);
  fVar3 = DAT_180381420;
  fVar4 = DAT_18038120c;
  if (sVar2 < 1) {
    fVar7 = fmodf(param_2,DAT_18038120c);
    if (DAT_180381188 < fVar7) {
      fVar7 = fVar7 - fVar4;
    }
    if (fVar7 < fVar3) {
      fVar7 = fVar7 + fVar4;
    }
  }
  else {
    fVar7 = 0.0;
  }
  fVar8 = DAT_180380bb0;
  pcVar1 = (char *)((longlong)param_1 + 9);
  if ((param_3 <= DAT_180380bb0) && (*pcVar1 == '\0')) {
    if (*(char *)(param_1 + 2) == '\0') {
      param_1[1] = fVar7;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      fVar5 = *param_1;
      sVar2 = _fdclass(fVar5 - fVar7);
      if (sVar2 < 1) {
        fVar7 = fmodf(fVar5 - fVar7,fVar4);
        if (DAT_180381188 < fVar7) {
          fVar7 = fVar7 - fVar4;
        }
        if (fVar7 < fVar3) {
          fVar7 = fVar7 + fVar4;
        }
      }
      else {
        fVar7 = 0.0;
      }
      if ((float)((uint)fVar7 & _DAT_1803817c0) <= DAT_180381094) {
        fVar7 = *param_1;
      }
      else if (fVar7 <= 0.0) {
        fVar7 = *param_1 + DAT_180381094;
      }
      else {
        fVar7 = *param_1 + DAT_180381404;
      }
    }
  }
  sVar2 = _fdclass(fVar7);
  if (sVar2 < 1) {
    fVar7 = fmodf(fVar7,fVar4);
    if (DAT_180381188 < fVar7) {
      fVar7 = fVar7 - fVar4;
    }
    if (fVar7 < fVar3) {
      fVar7 = fVar7 + fVar4;
    }
  }
  else {
    fVar7 = 0.0;
  }
  fVar4 = param_1[1];
  *param_1 = fVar7;
  if (fVar7 != fVar4) {
    if (*pcVar1 == '\0') {
      fVar6 = (float)((uint)(fVar7 - fVar4) & _DAT_1803817c0);
      fVar5 = fVar6 / DAT_1803810c8;
      fVar3 = DAT_180380980;
      if (DAT_180380980 <= fVar5) {
        fVar3 = fVar5;
      }
      if (fVar3 <= fVar8) {
        fVar8 = fVar3;
      }
      fVar8 = fVar8 * param_4 * _DAT_180381264;
      if (fVar8 < fVar6) {
        fVar3 = (float)FUN_1800b1d70(fVar7 - fVar4);
        if (fVar3 < 0.0) {
          fVar8 = (float)((uint)fVar8 ^ DAT_1803817f0);
        }
        fVar7 = fVar4 + fVar8;
      }
      fVar4 = (float)FUN_1800b1d70(fVar7);
      param_1[1] = fVar4;
    }
    else {
      param_1[1] = fVar7;
    }
  }
  *pcVar1 = '\0';
  return;
}



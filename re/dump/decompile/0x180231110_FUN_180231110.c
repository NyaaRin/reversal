// 0x180231110  FUN_180231110
// size=936 thunk=false
// signature: undefined FUN_180231110()
// status: ok


void FUN_180231110(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  
  fVar1 = *param_1;
  lVar4 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar4 < 0x29) {
    fVar2 = *param_2;
    if ((fVar2 < fVar1) ||
       ((fVar2 == fVar1 && (param_2[1] <= param_1[1] && param_1[1] != param_2[1])))) {
      fVar1 = param_2[1];
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *param_1 = fVar2;
      param_1[1] = fVar1;
    }
    fVar1 = *param_3;
    if ((fVar1 < *param_2) ||
       ((fVar1 == *param_2 && (param_3[1] <= param_2[1] && param_2[1] != param_3[1])))) {
      fVar2 = param_3[1];
      *(undefined8 *)param_3 = *(undefined8 *)param_2;
      *param_2 = fVar1;
      param_2[1] = fVar2;
      if ((fVar1 < *param_1) || ((fVar1 == *param_1 && (fVar2 < param_1[1])))) {
        *(undefined8 *)param_2 = *(undefined8 *)param_1;
        *param_1 = fVar1;
        param_1[1] = fVar2;
      }
    }
  }
  else {
    lVar4 = lVar4 + 1 >> 3;
    fVar2 = param_1[lVar4 * 2];
    if ((fVar2 < fVar1) ||
       ((fVar2 == fVar1 &&
        (param_1[lVar4 * 2 + 1] <= param_1[1] && param_1[1] != param_1[lVar4 * 2 + 1])))) {
      fVar1 = param_1[lVar4 * 2 + 1];
      *(undefined8 *)(param_1 + lVar4 * 2) = *(undefined8 *)param_1;
      *param_1 = fVar2;
      param_1[1] = fVar1;
    }
    fVar1 = param_1[lVar4 * 4];
    if ((fVar1 < param_1[lVar4 * 2]) ||
       ((fVar1 == param_1[lVar4 * 2] &&
        (param_1[lVar4 * 4 + 1] <= param_1[lVar4 * 2 + 1] &&
         param_1[lVar4 * 2 + 1] != param_1[lVar4 * 4 + 1])))) {
      fVar2 = param_1[lVar4 * 4 + 1];
      *(undefined8 *)(param_1 + lVar4 * 4) = *(undefined8 *)(param_1 + lVar4 * 2);
      param_1[lVar4 * 2] = fVar1;
      param_1[lVar4 * 2 + 1] = fVar2;
      if ((fVar1 < *param_1) || ((fVar1 == *param_1 && (fVar2 < param_1[1])))) {
        *(undefined8 *)(param_1 + lVar4 * 2) = *(undefined8 *)param_1;
        *param_1 = fVar1;
        param_1[1] = fVar2;
      }
    }
    fVar1 = *param_2;
    pfVar3 = param_2 + lVar4 * -2;
    if ((fVar1 < *pfVar3) ||
       ((fVar1 == *pfVar3 && (param_2[1] <= pfVar3[1] && pfVar3[1] != param_2[1])))) {
      fVar2 = param_2[1];
      *(undefined8 *)param_2 = *(undefined8 *)pfVar3;
      *pfVar3 = fVar1;
      pfVar3[1] = fVar2;
    }
    fVar1 = param_2[lVar4 * 2];
    if ((fVar1 < *param_2) ||
       ((fVar1 == *param_2 &&
        (param_2[lVar4 * 2 + 1] <= param_2[1] && param_2[1] != param_2[lVar4 * 2 + 1])))) {
      fVar2 = param_2[lVar4 * 2 + 1];
      *(undefined8 *)(param_2 + lVar4 * 2) = *(undefined8 *)param_2;
      *param_2 = fVar1;
      param_2[1] = fVar2;
      if ((fVar1 < *pfVar3) || ((fVar1 == *pfVar3 && (fVar2 < pfVar3[1])))) {
        *(undefined8 *)param_2 = *(undefined8 *)pfVar3;
        *pfVar3 = fVar1;
        pfVar3[1] = fVar2;
      }
    }
    pfVar5 = param_3 + lVar4 * -2;
    pfVar3 = param_3 + lVar4 * -4;
    fVar1 = *pfVar5;
    if ((fVar1 < *pfVar3) ||
       ((fVar1 == *pfVar3 && (pfVar5[1] <= pfVar3[1] && pfVar3[1] != pfVar5[1])))) {
      fVar2 = pfVar5[1];
      *(undefined8 *)pfVar5 = *(undefined8 *)pfVar3;
      *pfVar3 = fVar1;
      pfVar3[1] = fVar2;
    }
    fVar1 = *param_3;
    if ((fVar1 < *pfVar5) ||
       ((fVar1 == *pfVar5 && (param_3[1] <= pfVar5[1] && pfVar5[1] != param_3[1])))) {
      fVar2 = param_3[1];
      *(undefined8 *)param_3 = *(undefined8 *)pfVar5;
      *pfVar5 = fVar1;
      pfVar5[1] = fVar2;
      if ((fVar1 < *pfVar3) || ((fVar1 == *pfVar3 && (fVar2 < pfVar3[1])))) {
        *(undefined8 *)pfVar5 = *(undefined8 *)pfVar3;
        *pfVar3 = fVar1;
        pfVar3[1] = fVar2;
      }
    }
    fVar1 = *param_2;
    param_3 = param_3 + lVar4 * -2;
    if ((fVar1 < param_1[lVar4 * 2]) ||
       ((fVar1 == param_1[lVar4 * 2] &&
        (param_2[1] <= param_1[lVar4 * 2 + 1] && param_1[lVar4 * 2 + 1] != param_2[1])))) {
      fVar2 = param_2[1];
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + lVar4 * 2);
      param_1[lVar4 * 2] = fVar1;
      param_1[lVar4 * 2 + 1] = fVar2;
    }
    fVar1 = *param_3;
    if ((fVar1 < *param_2) ||
       ((fVar1 == *param_2 && (param_3[1] <= param_2[1] && param_2[1] != param_3[1])))) {
      fVar2 = param_3[1];
      *(undefined8 *)param_3 = *(undefined8 *)param_2;
      *param_2 = fVar1;
      param_2[1] = fVar2;
      if ((fVar1 < param_1[lVar4 * 2]) ||
         ((fVar1 == param_1[lVar4 * 2] && (fVar2 < param_1[lVar4 * 2 + 1])))) {
        *(undefined8 *)param_2 = *(undefined8 *)(param_1 + lVar4 * 2);
        param_1[lVar4 * 2] = fVar1;
        param_1[lVar4 * 2 + 1] = fVar2;
        return;
      }
    }
  }
  return;
}



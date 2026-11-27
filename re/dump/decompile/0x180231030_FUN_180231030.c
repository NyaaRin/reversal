// 0x180231030  FUN_180231030
// size=214 thunk=false
// signature: undefined FUN_180231030()
// status: ok


void FUN_180231030(longlong param_1,longlong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  while (lVar5 < lVar6) {
    lVar4 = lVar5 * 2 + 2;
    fVar2 = *(float *)(param_1 + -8 + lVar4 * 8);
    fVar3 = *(float *)(param_1 + lVar4 * 8);
    if ((fVar3 < fVar2) ||
       ((fVar3 == fVar2 &&
        (fVar2 = *(float *)(param_1 + -4 + lVar4 * 8), pfVar1 = (float *)(param_1 + 4 + lVar4 * 8),
        *pfVar1 <= fVar2 && fVar2 != *pfVar1)))) {
      lVar4 = lVar5 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
    lVar5 = lVar4;
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar5 = param_3 - 1;
  }
  if (param_2 < lVar5) {
    fVar2 = *param_4;
    do {
      lVar6 = lVar5 + -1 >> 1;
      fVar3 = *(float *)(param_1 + lVar6 * 8);
      if ((fVar2 <= fVar3) &&
         ((fVar3 != fVar2 ||
          (pfVar1 = (float *)(param_1 + 4 + lVar6 * 8),
          param_4[1] < *pfVar1 || param_4[1] == *pfVar1)))) break;
      *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + lVar6 * 8);
      lVar5 = lVar6;
    } while (param_2 < lVar6);
  }
  *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)param_4;
  return;
}



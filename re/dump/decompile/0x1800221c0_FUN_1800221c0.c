// 0x1800221c0  FUN_1800221c0
// size=143 thunk=false
// signature: undefined FUN_1800221c0()
// status: ok


void FUN_1800221c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_180381188;
  fVar3 = *param_1;
  if (DAT_180381108 < fVar3) {
    do {
      fVar3 = fVar3 - DAT_180381188;
    } while (DAT_180381108 < fVar3);
    *param_1 = fVar3;
  }
  if (fVar3 < DAT_180381410) {
    do {
      fVar3 = fVar3 + fVar1;
    } while (fVar3 < DAT_180381410);
    *param_1 = fVar3;
  }
  fVar2 = DAT_18038120c;
  fVar3 = param_1[1];
  if (fVar1 < fVar3) {
    do {
      fVar3 = fVar3 - DAT_18038120c;
    } while (fVar1 < fVar3);
    param_1[1] = fVar3;
  }
  if (fVar3 < DAT_180381420) {
    do {
      fVar3 = fVar3 + fVar2;
    } while (fVar3 < DAT_180381420);
    param_1[1] = fVar3;
  }
  return;
}



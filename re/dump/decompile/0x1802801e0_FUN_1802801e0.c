// 0x1802801e0  FUN_1802801e0
// size=531 thunk=false
// signature: undefined FUN_1802801e0()
// status: ok


float * FUN_1802801e0(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x98);
  fVar4 = DAT_180381308;
  fVar5 = *(float *)(param_2 + 0xa8);
  fVar7 = *(float *)(param_2 + 0x74);
  fVar1 = *(float *)(param_2 + 0x84);
  fVar9 = *(float *)(param_2 + 0x7c);
  if (fVar5 < DAT_180381308) {
    fVar2 = *(float *)(param_2 + 0xb8);
    fVar8 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x78);
    fVar3 = *(float *)(param_2 + 0xb0);
    if (0.0 < fVar2) {
      if (fVar2 + 0.0 < fVar5) {
        fVar6 = (*(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0x38)) - fVar8;
        if (fVar6 - fVar2 <= fVar5) {
          fVar5 = (fVar6 - fVar5) * fVar3 + fVar5;
        }
      }
      else {
        fVar5 = (fVar5 - 0.0) * fVar3 + 0.0;
      }
    }
    *param_1 = fVar5 - (*(float *)(param_2 + 0x38) - fVar8) * fVar3;
  }
  fVar2 = DAT_180380ac0;
  fVar5 = *param_1;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = (float)(longlong)(fVar5 + DAT_180380ac0);
  *param_1 = fVar5;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    if (*(float *)(param_2 + 0xa0) <= fVar5) {
      fVar5 = *(float *)(param_2 + 0xa0);
    }
    *param_1 = fVar5;
  }
  fVar5 = *(float *)(param_2 + 0xac);
  if (fVar5 < fVar4) {
    fVar4 = *(float *)(param_2 + 0xbc);
    fVar3 = *(float *)(param_2 + 0xb4);
    fVar9 = fVar7 + fVar1 + fVar9;
    if (0.0 < fVar4) {
      if (fVar4 + 0.0 < fVar5) {
        fVar7 = (*(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0x3c)) - fVar9;
        if (fVar7 - fVar4 <= fVar5) {
          fVar5 = (fVar7 - fVar5) * fVar3 + fVar5;
        }
      }
      else {
        fVar5 = (fVar5 - 0.0) * fVar3 + 0.0;
      }
    }
    param_1[1] = fVar5 - (*(float *)(param_2 + 0x3c) - fVar9) * fVar3;
  }
  fVar5 = param_1[1];
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = (float)(longlong)(fVar5 + fVar2);
  param_1[1] = fVar5;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    if (*(float *)(param_2 + 0xa4) <= fVar5) {
      fVar5 = *(float *)(param_2 + 0xa4);
    }
    param_1[1] = fVar5;
  }
  return param_1;
}



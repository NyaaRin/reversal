// 0x180290050  FUN_180290050
// size=1180 thunk=false
// signature: undefined FUN_180290050()
// status: ok


void FUN_180290050(longlong param_1,int *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,int param_12)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5);
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar4 = (param_6 - param_4) * (param_6 - param_4) + (param_5 - param_3) * (param_5 - param_3);
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar6 = (param_10 - param_8) * (param_10 - param_8) + (param_9 - param_7) * (param_9 - param_7);
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  fVar6 = fVar2 + fVar4 + fVar6;
  fVar2 = (param_10 - param_4) * (param_10 - param_4) + (param_9 - param_3) * (param_9 - param_3);
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar2 = fVar6 * fVar6 - fVar2 * fVar2;
  while( true ) {
    if (0x10 < param_12) {
      return;
    }
    if (fVar2 <= param_11) break;
    param_12 = param_12 + 1;
    fVar6 = (param_4 + param_6) * DAT_180380ac0;
    fVar2 = (param_6 + param_8) * DAT_180380ac0;
    fVar7 = (param_5 + param_7) * DAT_180380ac0;
    param_8 = (param_8 + param_10) * DAT_180380ac0;
    param_7 = (param_7 + param_9) * DAT_180380ac0;
    fVar3 = (param_3 + param_5) * DAT_180380ac0;
    param_6 = (param_8 + fVar2) * DAT_180380ac0;
    fVar2 = (fVar2 + fVar6) * DAT_180380ac0;
    fVar4 = (fVar7 + fVar3) * DAT_180380ac0;
    param_5 = (param_7 + fVar7) * DAT_180380ac0;
    fVar7 = (param_6 + fVar2) * DAT_180380ac0;
    fVar5 = (param_5 + fVar4) * DAT_180380ac0;
    FUN_180290050(param_1,param_2,param_3,param_4,fVar3,fVar6,fVar4,fVar2,fVar5,fVar7,param_11,
                  param_12);
    fVar2 = (param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5);
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar4 = (param_6 - fVar7) * (param_6 - fVar7) + (param_5 - fVar5) * (param_5 - fVar5);
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar6 = (param_10 - param_8) * (param_10 - param_8) + (param_9 - param_7) * (param_9 - param_7);
    if (fVar6 < 0.0) {
      fVar6 = sqrtf(fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    fVar6 = fVar2 + fVar4 + fVar6;
    fVar2 = (param_10 - fVar7) * (param_10 - fVar7) + (param_9 - fVar5) * (param_9 - fVar5);
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar6 * fVar6 - fVar2 * fVar2;
    param_4 = fVar7;
    param_3 = fVar5;
  }
  iVar1 = *param_2;
  if (param_1 != 0) {
    *(float *)(param_1 + (longlong)iVar1 * 8) = param_9;
    *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_10;
  }
  *param_2 = iVar1 + 1;
  return;
}



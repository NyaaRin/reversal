// 0x180269040  FUN_180269040
// size=415 thunk=false
// signature: undefined FUN_180269040()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180269040(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_180380bb0;
  if (param_2 == 0.0) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
    return;
  }
  fVar2 = fmodf(param_1,DAT_180380bb0);
  uVar1 = (uint)(fVar2 / _DAT_180380a24);
  fVar3 = (fVar5 - param_2) * param_3;
  fVar4 = fVar2 / _DAT_180380a24 - (float)(int)uVar1;
  fVar2 = (fVar5 - fVar4 * param_2) * param_3;
  if (uVar1 < 6) {
    fVar5 = (fVar5 - (fVar5 - fVar4) * param_2) * param_3;
    switch(uVar1) {
    case 0:
      *param_4 = param_3;
      *param_5 = fVar5;
      *param_6 = fVar3;
      break;
    case 1:
      *param_4 = fVar2;
      *param_5 = param_3;
      *param_6 = fVar3;
      break;
    case 2:
      *param_4 = fVar3;
      *param_5 = param_3;
      *param_6 = fVar5;
      break;
    case 3:
      *param_4 = fVar3;
      *param_5 = fVar2;
      *param_6 = param_3;
      break;
    case 4:
      *param_4 = fVar5;
      *param_5 = fVar3;
      *param_6 = param_3;
      break;
    case 5:
      goto switchD_180269112_caseD_5;
    }
  }
  else {
switchD_180269112_caseD_5:
    *param_4 = param_3;
    *param_5 = fVar3;
    *param_6 = fVar2;
  }
  return;
}



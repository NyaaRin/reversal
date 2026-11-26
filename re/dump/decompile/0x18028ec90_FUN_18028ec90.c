// 0x18028ec90  FUN_18028ec90
// size=320 thunk=false
// signature: undefined FUN_18028ec90()
// status: ok


void FUN_18028ec90(longlong param_1,int param_2,longlong param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  
  if (((param_5 != param_7) && (fVar2 = *(float *)(param_3 + 0x1c), param_5 <= fVar2)) &&
     (fVar1 = *(float *)(param_3 + 0x18), fVar1 <= param_7)) {
    if (param_5 < fVar1) {
      param_4 = param_4 + ((fVar1 - param_5) * (param_6 - param_4)) / (param_7 - param_5);
      param_5 = fVar1;
    }
    if (fVar2 < param_7) {
      param_6 = param_6 + ((fVar2 - param_7) * (param_6 - param_4)) / (param_7 - param_5);
      param_7 = fVar2;
    }
    fVar2 = (float)param_2;
    if ((param_4 <= fVar2) && (param_6 <= fVar2)) {
      *(float *)(param_1 + (longlong)param_2 * 4) =
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (longlong)param_2 * 4);
      return;
    }
    if ((param_4 < (float)(param_2 + 1)) || (param_6 < (float)(param_2 + 1))) {
      *(float *)(param_1 + (longlong)param_2 * 4) =
           (DAT_180380bb0 - ((param_4 - fVar2) + (param_6 - fVar2)) * DAT_180380ac0) *
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (longlong)param_2 * 4);
    }
  }
  return;
}



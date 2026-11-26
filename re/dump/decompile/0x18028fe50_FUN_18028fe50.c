// 0x18028fe50  FUN_18028fe50
// size=508 thunk=false
// signature: undefined FUN_18028fe50()
// status: ok


undefined8
FUN_18028fe50(longlong param_1,int *param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,float param_9,int param_10)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_180380ac0;
  if (param_10 < 0x11) {
    fVar5 = (param_5 + param_5 + param_3 + param_7) * DAT_180380a58;
    fVar6 = (param_6 + param_6 + param_4 + param_8) * DAT_180380a58;
    fVar4 = (param_3 + param_7) * DAT_180380ac0 - fVar5;
    fVar3 = (param_4 + param_8) * DAT_180380ac0 - fVar6;
    if (fVar3 * fVar3 + fVar4 * fVar4 <= param_9) {
      iVar1 = *param_2;
      if (param_1 != 0) {
        *(float *)(param_1 + (longlong)iVar1 * 8) = param_7;
        *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_8;
      }
      *param_2 = iVar1 + 1;
    }
    else {
      FUN_18028fe50();
      FUN_18028fe50(param_1,param_2,fVar5,fVar6,(param_5 + param_7) * fVar2,
                    (param_6 + param_8) * fVar2,param_7,param_8,param_9,param_10 + 1);
    }
  }
  return 1;
}



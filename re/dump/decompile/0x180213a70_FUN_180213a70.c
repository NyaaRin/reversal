// 0x180213a70  FUN_180213a70
// size=645 thunk=false
// signature: undefined FUN_180213a70()
// status: ok


void FUN_180213a70(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float *local_58;
  float *local_50;
  
  uVar3 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar3 & 0xfffffffffffffff8) < 0x101) {
      pfVar5 = param_1;
      if (param_1 != param_2) {
        while (pfVar5 = pfVar5 + 2, pfVar5 != param_2) {
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          if ((fVar1 < *param_1) || ((pfVar4 = pfVar5, fVar1 == *param_1 && (fVar2 < param_1[1]))))
          {
            memmove((void *)((longlong)pfVar5 + (8 - ((longlong)pfVar5 - (longlong)param_1))),
                    param_1,(longlong)pfVar5 - (longlong)param_1);
            *param_1 = fVar1;
            param_1[1] = fVar2;
          }
          else {
            while( true ) {
              if ((pfVar4[-2] <= fVar1) && ((fVar1 != pfVar4[-2] || (pfVar4[-1] <= fVar2)))) break;
              *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar4 + -2);
              pfVar4 = pfVar4 + -2;
            }
            *pfVar4 = fVar1;
            pfVar4[1] = fVar2;
          }
        }
      }
      return;
    }
    lVar6 = (longlong)param_2 - (longlong)param_1 >> 4;
    if (param_3 < 1) break;
    pfVar5 = param_1 + lVar6 * 2;
    FUN_180231110(param_1,pfVar5,param_2 + -2,param_4);
    FUN_1802314c0(&local_58,param_1,pfVar5,param_2);
    pfVar4 = local_50;
    pfVar5 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_58 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)local_50 & 0xfffffffffffffff8U)) {
      FUN_180213a70(param_1,local_58,param_3,param_4);
      pfVar5 = param_2;
      param_1 = pfVar4;
    }
    else {
      FUN_180213a70(local_50,param_2,param_3,param_4);
    }
    uVar3 = (longlong)pfVar5 - (longlong)param_1;
    param_2 = pfVar5;
  }
  lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
  while (0 < lVar6) {
    local_58 = *(float **)(param_1 + lVar6 * 2 + -2);
    lVar6 = lVar6 + -1;
    FUN_180231030(param_1,lVar6);
  }
  if (lVar7 < 2) {
    return;
  }
  do {
    pfVar5 = param_2 + -2;
    if (0xf < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
      local_58 = *(float **)pfVar5;
      *(undefined8 *)pfVar5 = *(undefined8 *)param_1;
      FUN_180231030(param_1,0,(longlong)pfVar5 - (longlong)param_1 >> 3,&local_58,param_4);
    }
    param_2 = pfVar5;
  } while (0xf < (longlong)((longlong)pfVar5 - (longlong)param_1 & 0xfffffffffffffff8U));
  return;
}



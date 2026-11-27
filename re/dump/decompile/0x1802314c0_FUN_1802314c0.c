// 0x1802314c0  FUN_1802314c0
// size=1182 thunk=false
// signature: undefined FUN_1802314c0()
// status: ok


ulonglong * FUN_1802314c0(ulonglong *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  
  pfVar3 = param_3 + 2;
  if (param_2 < param_3) {
    fVar7 = *param_3;
    do {
      fVar2 = param_3[-2];
      pfVar5 = param_3 + -2;
      if ((fVar2 < fVar7) ||
         ((((fVar2 == fVar7 && (param_3[-1] <= param_3[1] && param_3[1] != param_3[-1])) ||
           (fVar7 < fVar2)) ||
          ((fVar7 == fVar2 && (param_3[1] <= param_3[-1] && param_3[-1] != param_3[1])))))) break;
      param_3 = pfVar5;
      fVar7 = fVar2;
    } while (param_2 < pfVar5);
  }
  pfVar5 = param_3;
  pfVar6 = pfVar3;
  if (pfVar3 < param_4) {
    fVar7 = *param_3;
    while (((fVar2 = *pfVar3, pfVar6 = pfVar3, fVar7 <= fVar2 &&
            ((fVar2 != fVar7 || (param_3[1] < pfVar3[1] || param_3[1] == pfVar3[1])))) &&
           (fVar2 <= fVar7))) {
      if (((fVar7 == fVar2) && (param_3[1] <= pfVar3[1] && pfVar3[1] != param_3[1])) ||
         (pfVar3 = pfVar3 + 2, pfVar6 = pfVar3, param_4 <= pfVar3)) break;
    }
  }
LAB_180231580:
  if (pfVar3 < param_4) {
    if (0x1f < ((longlong)param_4 + (7 - (longlong)pfVar3) & 0xfffffffffffffff8U)) {
      do {
        fVar7 = *pfVar3;
        fVar2 = *param_3;
        if ((fVar7 <= fVar2) &&
           ((fVar2 != fVar7 || (pfVar3[1] < param_3[1] || pfVar3[1] == param_3[1])))) {
          if ((fVar7 < fVar2) ||
             ((fVar7 == fVar2 && (pfVar3[1] <= param_3[1] && param_3[1] != pfVar3[1]))))
          goto joined_r0x0001802317d3;
          if (pfVar6 != pfVar3) {
            fVar7 = *pfVar6;
            fVar2 = pfVar6[1];
            *(undefined8 *)pfVar6 = *(undefined8 *)pfVar3;
            *pfVar3 = fVar7;
            pfVar3[1] = fVar2;
          }
          pfVar6 = pfVar6 + 2;
        }
        fVar7 = pfVar3[2];
        fVar2 = *param_3;
        if ((fVar7 <= fVar2) &&
           ((fVar2 != fVar7 || (pfVar3[3] < param_3[1] || pfVar3[3] == param_3[1])))) {
          if ((fVar7 < fVar2) ||
             ((fVar7 == fVar2 && (pfVar3[3] <= param_3[1] && param_3[1] != pfVar3[3])))) {
            pfVar3 = pfVar3 + 2;
            goto joined_r0x0001802317d3;
          }
          if (pfVar6 != pfVar3 + 2) {
            fVar7 = *pfVar6;
            fVar2 = pfVar6[1];
            *(undefined8 *)pfVar6 = *(undefined8 *)(pfVar3 + 2);
            pfVar3[2] = fVar7;
            pfVar3[3] = fVar2;
          }
          pfVar6 = pfVar6 + 2;
        }
        fVar7 = pfVar3[4];
        fVar2 = *param_3;
        if ((fVar7 <= fVar2) &&
           ((fVar2 != fVar7 || (pfVar3[5] < param_3[1] || pfVar3[5] == param_3[1])))) {
          if ((fVar7 < fVar2) ||
             ((fVar7 == fVar2 && (pfVar3[5] <= param_3[1] && param_3[1] != pfVar3[5])))) {
            pfVar3 = pfVar3 + 4;
            goto joined_r0x0001802317d3;
          }
          if (pfVar6 != pfVar3 + 4) {
            fVar7 = *pfVar6;
            fVar2 = pfVar6[1];
            *(undefined8 *)pfVar6 = *(undefined8 *)(pfVar3 + 4);
            pfVar3[4] = fVar7;
            pfVar3[5] = fVar2;
          }
          pfVar6 = pfVar6 + 2;
        }
        fVar7 = pfVar3[6];
        fVar2 = *param_3;
        if ((fVar7 <= fVar2) &&
           ((fVar2 != fVar7 || (pfVar3[7] < param_3[1] || pfVar3[7] == param_3[1])))) {
          if ((fVar7 < fVar2) ||
             ((fVar7 == fVar2 && (pfVar3[7] <= param_3[1] && param_3[1] != pfVar3[7])))) {
            pfVar3 = pfVar3 + 6;
            goto joined_r0x0001802317d3;
          }
          if (pfVar6 != pfVar3 + 6) {
            fVar7 = *pfVar6;
            fVar2 = pfVar6[1];
            *(undefined8 *)pfVar6 = *(undefined8 *)(pfVar3 + 6);
            pfVar3[6] = fVar7;
            pfVar3[7] = fVar2;
          }
          pfVar6 = pfVar6 + 2;
        }
        pfVar3 = pfVar3 + 8;
      } while (pfVar3 < param_4 + -6);
      if (param_4 <= pfVar3) goto joined_r0x0001802317d3;
    }
    do {
      fVar7 = *pfVar3;
      fVar2 = *param_3;
      if ((fVar7 <= fVar2) &&
         ((fVar2 != fVar7 || (pfVar3[1] < param_3[1] || pfVar3[1] == param_3[1])))) {
        if ((fVar7 < fVar2) ||
           ((fVar7 == fVar2 && (pfVar3[1] <= param_3[1] && param_3[1] != pfVar3[1])))) break;
        if (pfVar6 != pfVar3) {
          fVar7 = *pfVar6;
          fVar2 = pfVar6[1];
          *(undefined8 *)pfVar6 = *(undefined8 *)pfVar3;
          *pfVar3 = fVar7;
          pfVar3[1] = fVar2;
        }
        pfVar6 = pfVar6 + 2;
      }
      pfVar3 = pfVar3 + 2;
    } while (pfVar3 < param_4);
  }
joined_r0x0001802317d3:
  do {
    if (pfVar5 <= param_2) break;
    fVar7 = pfVar5[-2];
    pfVar1 = pfVar5 + -2;
    fVar2 = *param_3;
    pfVar4 = param_3;
    if ((fVar2 <= fVar7) &&
       ((fVar7 != fVar2 || (param_3[1] < pfVar5[-1] || param_3[1] == pfVar5[-1])))) {
      if ((fVar2 < fVar7) ||
         ((fVar2 == fVar7 && (param_3[1] <= pfVar5[-1] && pfVar5[-1] != param_3[1])))) break;
      pfVar4 = param_3 + -2;
      if (pfVar4 != pfVar1) {
        fVar7 = *pfVar4;
        fVar2 = param_3[-1];
        *(undefined8 *)pfVar4 = *(undefined8 *)pfVar1;
        *pfVar1 = fVar7;
        pfVar5[-1] = fVar2;
      }
    }
    pfVar5 = pfVar5 + -2;
    param_3 = pfVar4;
  } while( true );
  if (pfVar5 == param_2) {
    if (pfVar3 == param_4) {
      *param_1 = (ulonglong)param_3;
      param_1[1] = (ulonglong)pfVar6;
      return param_1;
    }
    if (pfVar6 != pfVar3) {
      fVar7 = *param_3;
      fVar2 = param_3[1];
      *(undefined8 *)param_3 = *(undefined8 *)pfVar6;
      *pfVar6 = fVar7;
      pfVar6[1] = fVar2;
    }
    fVar7 = *param_3;
    fVar2 = param_3[1];
    *(undefined8 *)param_3 = *(undefined8 *)pfVar3;
    *pfVar3 = fVar7;
    pfVar3[1] = fVar2;
    pfVar3 = pfVar3 + 2;
    param_3 = param_3 + 2;
    pfVar6 = pfVar6 + 2;
  }
  else {
    pfVar1 = pfVar5 + -2;
    if (pfVar3 == param_4) {
      pfVar4 = param_3 + -2;
      if (pfVar1 != pfVar4) {
        fVar7 = *pfVar1;
        fVar2 = pfVar5[-1];
        *(undefined8 *)pfVar1 = *(undefined8 *)pfVar4;
        *pfVar4 = fVar7;
        param_3[-1] = fVar2;
      }
      fVar7 = *pfVar4;
      fVar2 = param_3[-1];
      *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar6 + -2);
      pfVar6[-2] = fVar7;
      pfVar6[-1] = fVar2;
      param_3 = pfVar4;
      pfVar5 = pfVar1;
      pfVar6 = pfVar6 + -2;
    }
    else {
      fVar7 = *pfVar3;
      fVar2 = pfVar3[1];
      *(undefined8 *)pfVar3 = *(undefined8 *)pfVar1;
      pfVar3 = pfVar3 + 2;
      *pfVar1 = fVar7;
      pfVar5[-1] = fVar2;
      pfVar5 = pfVar1;
    }
  }
  goto LAB_180231580;
}



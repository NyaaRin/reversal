// 0x18014b840  FUN_18014b840
// size=385 thunk=false
// signature: undefined FUN_18014b840()
// status: ok


undefined8 FUN_18014b840(byte *param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    uVar1 = (ulonglong)(*param_1 & 0x7f);
    if (-1 < (char)*param_1) {
      *param_3 = uVar1;
      return 1;
    }
    if (1 < param_2) {
      uVar1 = (ulonglong)(param_1[1] & 0x7f) | uVar1 << 7;
      if (-1 < (char)param_1[1]) {
        *param_3 = uVar1;
        return 2;
      }
      if (2 < param_2) {
        uVar1 = (ulonglong)(param_1[2] & 0x7f) | uVar1 << 7;
        if (-1 < (char)param_1[2]) {
          *param_3 = uVar1;
          return 3;
        }
        if (3 < param_2) {
          uVar1 = (ulonglong)(param_1[3] & 0x7f) | uVar1 << 7;
          if (-1 < (char)param_1[3]) {
            *param_3 = uVar1;
            return 4;
          }
          if (4 < param_2) {
            uVar1 = (ulonglong)(param_1[4] & 0x7f) | uVar1 << 7;
            if (-1 < (char)param_1[4]) {
              *param_3 = uVar1;
              return 5;
            }
            if (5 < param_2) {
              uVar1 = (ulonglong)(param_1[5] & 0x7f) | uVar1 << 7;
              if (-1 < (char)param_1[5]) {
                *param_3 = uVar1;
                return 6;
              }
              if (6 < param_2) {
                uVar1 = (ulonglong)(param_1[6] & 0x7f) | uVar1 << 7;
                if (-1 < (char)param_1[6]) {
                  *param_3 = uVar1;
                  return 7;
                }
                if (7 < param_2) {
                  uVar1 = (ulonglong)(param_1[7] & 0x7f) | uVar1 << 7;
                  if (-1 < (char)param_1[7]) {
                    *param_3 = uVar1;
                    return 8;
                  }
                  if (8 < param_2) {
                    *param_3 = (ulonglong)param_1[8] | uVar1 << 8;
                    return 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



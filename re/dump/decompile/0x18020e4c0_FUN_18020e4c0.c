// 0x18020e4c0  FUN_18020e4c0
// size=101 thunk=false
// signature: undefined FUN_18020e4c0()
// status: ok


undefined8 *
FUN_18020e4c0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (param_3 <= (ulonglong)param_1[2]) {
    uVar1 = param_1[2] - param_3;
    if (uVar1 < param_4) {
      param_4 = uVar1;
    }
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_180211510(param_2,(longlong)param_1 + param_3 * 2,param_4,param_4,0,param_2);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18022ec00();
}



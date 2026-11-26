// 0x18020e670  FUN_18020e670
// size=101 thunk=false
// signature: undefined FUN_18020e670()
// status: ok


undefined8 *
FUN_18020e670(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_18001d080(param_2,(longlong)param_1 + param_3,param_4,param_4,0,param_2);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18022ec00();
}



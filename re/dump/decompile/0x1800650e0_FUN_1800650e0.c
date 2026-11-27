// 0x1800650e0  FUN_1800650e0
// size=345 thunk=false
// signature: undefined FUN_1800650e0()
// status: ok


undefined8 * FUN_1800650e0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int extraout_var;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar2 = param_3[1];
  if (uVar2 != 0) {
    if (0x7fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar2 = FUN_1802d760c(param_2,*param_3,uVar2,0,0);
    if ((int)(uVar2 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(uVar2 >> 0x20);
    }
    uVar1 = param_1[2];
    uVar5 = (ulonglong)(int)uVar2;
    if (uVar1 < uVar5) {
      uVar4 = uVar5 - uVar1;
      if (param_1[3] - uVar1 < uVar4) {
        FUN_18022a480(param_1,uVar4);
      }
      else {
        param_1[2] = uVar5;
        puVar3 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar3 = (undefined8 *)*param_1;
        }
        puVar6 = (undefined2 *)((longlong)puVar3 + uVar1 * 2);
        if (uVar4 != 0) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        *(undefined2 *)((longlong)puVar3 + uVar5 * 2) = 0;
      }
    }
    else {
      param_1[2] = uVar5;
      puVar3 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      *(undefined2 *)((longlong)puVar3 + uVar5 * 2) = 0;
    }
    puVar3 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    FUN_1802d760c(param_2,*param_3,*(undefined4 *)(param_3 + 1),puVar3,(int)uVar2);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_1;
}



// 0x180201d80  FUN_180201d80
// size=222 thunk=false
// signature: undefined FUN_180201d80()
// status: ok


undefined8 * FUN_180201d80(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int extraout_var;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar2 = *param_3;
    uVar3 = FUN_1802d7790(param_2,uVar2,uVar1 & 0xffffffff,0,0);
    if ((int)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(uVar3 >> 0x20);
    }
    FUN_18020e770(param_1,(longlong)(int)uVar3);
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802d7790(param_2,uVar2,uVar1 & 0xffffffff,puVar4,(int)uVar3);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_1;
}



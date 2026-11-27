// 0x180065810  FUN_180065810
// size=272 thunk=false
// signature: undefined FUN_180065810()
// status: ok


undefined8 * FUN_180065810(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int extraout_var;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar1 = param_1[2];
  uVar2 = FUN_1802d75e4();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar3 = FUN_1802d7654(uVar2,puVar5,uVar1 & 0xffffffff,0,0);
    if ((int)((ulonglong)uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900();
    }
    FUN_18020e770(param_2,(longlong)(int)uVar3);
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_1802d7654(uVar2,puVar5,uVar1 & 0xffffffff,puVar4,(int)uVar3);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_2;
}



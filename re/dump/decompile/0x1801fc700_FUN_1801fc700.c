// 0x1801fc700  FUN_1801fc700
// size=116 thunk=false
// signature: undefined FUN_1801fc700()
// status: ok


undefined8 FUN_1801fc700(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  
  plVar1 = param_2 + 2;
  puVar2 = param_3 + 2;
  if (*puVar2 <= 0x7fffffffffffffffU - *plVar1) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_18020e930(param_1,param_2,param_3,param_2,*plVar1,param_3,*puVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800130a0();
}



// 0x1802d908c  FUN_1802d908c
// size=33 thunk=false
// signature: undefined FUN_1802d908c()
// status: ok


undefined8 * FUN_1802d908c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = vftable_std_bad_alloc;
  return param_1;
}



// 0x1802de22c  FUN_1802de22c
// size=38 thunk=false
// signature: undefined FUN_1802de22c()
// status: ok


void FUN_1802de22c(undefined8 param_1,uint *param_2)

{
  if ((*param_2 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffffe;
    FUN_180066900(*(undefined8 *)(param_2 + 10));
  }
  return;
}



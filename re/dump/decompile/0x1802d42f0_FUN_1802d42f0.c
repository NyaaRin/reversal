// 0x1802d42f0  FUN_1802d42f0
// size=29 thunk=false
// signature: undefined FUN_1802d42f0()
// status: ok


void FUN_1802d42f0(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  *param_3 = *(undefined4 *)(param_1 + lVar1 * 4);
  param_3[1] = *(undefined4 *)(param_1 + 0x10 + lVar1 * 4);
  param_3[2] = *(undefined4 *)(param_1 + 0x20 + lVar1 * 4);
  return;
}



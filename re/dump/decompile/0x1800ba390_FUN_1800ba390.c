// 0x1800ba390  FUN_1800ba390
// size=21 thunk=false
// signature: undefined FUN_1800ba390()
// status: ok


undefined8 FUN_1800ba390(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + param_2 + (longlong)param_3 * 4);
  *param_4 = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// 0x1800b2670  FUN_1800b2670
// size=12 thunk=false
// signature: undefined FUN_1800b2670()
// status: ok


undefined8 FUN_1800b2670(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *param_3 = uVar1;
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



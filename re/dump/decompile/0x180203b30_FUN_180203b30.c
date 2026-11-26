// 0x180203b30  FUN_180203b30
// size=127 thunk=false
// signature: undefined FUN_180203b30()
// status: ok


undefined8
FUN_180203b30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar2 = FUN_1802d75e4();
  local_18 = param_2;
  local_10 = uVar1;
  FUN_1800650e0(param_1,uVar2,&local_18,param_4,uVar3);
  return param_1;
}



// 0x180014190  FUN_180014190
// size=112 thunk=false
// signature: undefined FUN_180014190()
// status: ok


void FUN_180014190(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = param_2[7];
  param_1[7] = uVar1;
  uVar4 = (uint)uVar1 & 3;
  if ((uVar1 & 3) != 0) {
    if (uVar4 == 1) {
      param_1[6] = param_2[6];
      param_1[5] = param_2[5];
      param_2[7] = 0;
      return;
    }
    if (uVar4 == 2) {
      lVar2 = param_2[6];
      param_1[6] = lVar2;
      (**(code **)(lVar2 + 0x10))();
      return;
    }
  }
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = param_2[6];
  return;
}



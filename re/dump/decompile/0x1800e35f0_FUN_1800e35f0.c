// 0x1800e35f0  FUN_1800e35f0
// size=184 thunk=false
// signature: undefined FUN_1800e35f0()
// status: ok


undefined8 FUN_1800e35f0(void *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  BOOL BVar2;
  longlong lVar3;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (DAT_180409ca8 == (code *)0x0) {
    return 0;
  }
  sVar1 = _fdclass(param_2);
  if (0 < sVar1) {
    return 0;
  }
  sVar1 = _fdclass(param_3);
  if (sVar1 < 1) {
    BVar2 = IsBadReadPtr(param_1,8);
    if ((BVar2 == 0) && (lVar3 = FUN_1800b58b0(), lVar3 != 0)) {
      lVar3 = FUN_1800b5940(param_1,lVar3);
    }
    else {
      lVar3 = 0;
    }
    if (lVar3 == 0) {
      return 0;
    }
    (*DAT_180409ca8)(lVar3,param_2,param_3,param_4,lVar3);
    return 1;
  }
  return 0;
}



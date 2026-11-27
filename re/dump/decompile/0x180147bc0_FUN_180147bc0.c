// 0x180147bc0  FUN_180147bc0
// size=123 thunk=false
// signature: undefined FUN_180147bc0()
// status: ok


undefined8 FUN_180147bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  *param_2 = param_1;
  if ((param_1 == 0) || (DAT_1803f9250 == (longlong *)0x0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*DAT_1803f9250 + 0xb8))(DAT_1803f9250,param_1);
  }
  uVar3 = 0;
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xbc);
    }
  }
  else {
    uVar3 = *(uint *)(lVar1 + 0x18);
  }
  *(uint *)(param_2 + 2) = uVar3;
  uVar2 = 0x2000;
  if ((int)uVar3 < 0x2001) {
    uVar2 = (ulonglong)uVar3;
  }
  else {
    *(undefined4 *)(param_2 + 2) = 0x2000;
  }
  return CONCAT71((int7)(uVar2 >> 8),0 < (int)uVar2);
}



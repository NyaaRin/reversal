// 0x1800246e0  FUN_1800246e0
// size=56 thunk=false
// signature: undefined FUN_1800246e0()
// status: ok


ulonglong FUN_1800246e0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(param_1 - 1U);
  if (param_1 - 1U < 0xfe) {
    uVar1 = FUN_180024540();
    if (((char)uVar1 != '\0') && (DAT_1803fa545 == '\0')) {
      uVar1 = FUN_1800245f0(param_1);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



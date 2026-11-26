// 0x18006dac0  FUN_18006dac0
// size=30 thunk=false
// signature: undefined FUN_18006dac0()
// status: ok


undefined4 FUN_18006dac0(longlong param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0xffffffff;
  if (*(uint *)(param_1 + 0x18) < 0x2000) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



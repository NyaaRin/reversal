// 0x18011f6f0  FUN_18011f6f0
// size=64 thunk=false
// signature: undefined FUN_18011f6f0()
// status: ok


void FUN_18011f6f0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = FUN_18001e3f0();
    FUN_18011f690(uVar1,param_2,0x40);
    return;
  }
  return;
}



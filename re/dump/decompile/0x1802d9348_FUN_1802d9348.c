// 0x1802d9348  FUN_1802d9348
// size=127 thunk=false
// signature: undefined FUN_1802d9348()
// status: ok


void FUN_1802d9348(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1802d8d2c(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



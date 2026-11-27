// 0x1802e12f0  FUN_1802e12f0
// size=99 thunk=false
// signature: undefined FUN_1802e12f0()
// status: ok


undefined8 FUN_1802e12f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 0x148) = 0;
  *(undefined4 *)(param_2 + 0x14c) = 0;
  *(undefined4 *)(param_2 + 0x150) = 0;
  lVar1 = *(longlong *)(param_2 + 0x80);
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_2 + 0x150);
  return 0;
}



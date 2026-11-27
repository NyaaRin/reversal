// 0x1802e3fc0  FUN_1802e3fc0
// size=67 thunk=false
// signature: undefined FUN_1802e3fc0()
// status: ok


undefined8 FUN_1802e3fc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(undefined1 *)(lVar1 + 0x54) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0xbff0000000000000;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return 0;
}



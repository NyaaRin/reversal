// 0x1802e3f60  FUN_1802e3f60
// size=51 thunk=false
// signature: undefined FUN_1802e3f60()
// status: ok


undefined8 FUN_1802e3f60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  *(undefined8 *)(lVar1 + 0x10) = 0xbff0000000000000;
  *(undefined8 *)(lVar1 + 8) = 0xbff0000000000000;
  return 0;
}



// 0x1802e33b0  FUN_1802e33b0
// size=53 thunk=false
// signature: undefined FUN_1802e33b0()
// status: ok


undefined8 FUN_1802e33b0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3df5c28f;
  puVar1[2] = 0x3df5c28f;
  return 0;
}



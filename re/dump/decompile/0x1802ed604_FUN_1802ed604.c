// 0x1802ed604  FUN_1802ed604
// size=78 thunk=false
// signature: undefined FUN_1802ed604()
// status: ok


undefined8 FUN_1802ed604(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  return 0;
}



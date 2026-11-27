// 0x1802f186e  FUN_1802f186e
// size=74 thunk=false
// signature: undefined FUN_1802f186e()
// status: ok


undefined8 FUN_1802f186e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_18001d080(puVar1,&DAT_18033e5ea,0);
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  return 0;
}



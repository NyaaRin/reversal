// 0x1802e3790  FUN_1802e3790
// size=54 thunk=false
// signature: undefined FUN_1802e3790()
// status: ok


undefined8 FUN_1802e3790(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  puVar2 = *(undefined8 **)(param_2 + 0x150);
  *puVar1 = *puVar2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
  return 0;
}



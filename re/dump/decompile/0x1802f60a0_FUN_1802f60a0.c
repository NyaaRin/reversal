// 0x1802f60a0  FUN_1802f60a0
// size=63 thunk=false
// signature: undefined FUN_1802f60a0()
// status: ok


undefined8 FUN_1802f60a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xa8) + 0x48))();
  *(undefined8 *)(param_2 + 0xf0) = *puVar1;
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(puVar1 + 1);
  return 0;
}



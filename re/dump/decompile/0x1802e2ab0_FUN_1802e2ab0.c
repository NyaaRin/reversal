// 0x1802e2ab0  FUN_1802e2ab0
// size=45 thunk=false
// signature: undefined FUN_1802e2ab0()
// status: ok


undefined8 FUN_1802e2ab0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(**(longlong **)(param_2 + 0x30) + 4) =
       *(undefined4 *)(*(longlong **)(param_2 + 0x30))[2];
  return 0;
}



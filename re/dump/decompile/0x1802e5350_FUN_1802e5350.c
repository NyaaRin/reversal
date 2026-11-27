// 0x1802e5350  FUN_1802e5350
// size=72 thunk=false
// signature: undefined FUN_1802e5350()
// status: ok


undefined8 FUN_1802e5350(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  (**(code **)(*plVar1 + 0xf8))(plVar1,0);
  (**(code **)(*plVar1 + 0xe8))(plVar1,"read failed",0);
  return 0;
}



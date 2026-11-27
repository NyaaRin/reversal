// 0x1802fa45b  FUN_1802fa45b
// size=68 thunk=false
// signature: undefined FUN_1802fa45b()
// status: ok


undefined8 FUN_1802fa45b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"Visuals::Hooks::hookPresent",0x556);
  return 0;
}



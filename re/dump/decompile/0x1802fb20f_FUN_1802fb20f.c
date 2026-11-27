// 0x1802fb20f  FUN_1802fb20f
// size=68 thunk=false
// signature: undefined FUN_1802fb20f()
// status: ok


undefined8 FUN_1802fb20f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x68) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"Hooks::BuildEspOverlay",0xfc1);
  return 0;
}



// 0x1802fbb3f  FUN_1802fbb3f
// size=68 thunk=false
// signature: undefined FUN_1802fbb3f()
// status: ok


undefined8 FUN_1802fbb3f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"RunInit",0x2b);
  return 0;
}



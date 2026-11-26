// 0x1800c7670  FUN_1800c7670
// size=79 thunk=false
// signature: undefined FUN_1800c7670()
// status: ok


void FUN_1800c7670(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined8 *)(DAT_1803fa608 + 0x10);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
  (**(code **)(*plVar2 + 0x80))(plVar2,param_2,0x80,0x100,uVar1);
  return;
}



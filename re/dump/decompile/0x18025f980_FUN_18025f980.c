// 0x18025f980  FUN_18025f980
// size=519 thunk=false
// signature: undefined FUN_18025f980()
// status: ok


void FUN_18025f980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x3f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x3c0));
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x3b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x380));
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x378);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x340));
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x338);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x300));
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  FUN_180209700(param_1 + 0x2d8);
  FUN_18020da00(param_1 + 0x2c8);
  FUN_180209700(param_1 + 0x298);
  FUN_18020da00(param_1 + 0x288);
  FUN_180209700(param_1 + 600);
  FUN_18020da00(param_1 + 0x248);
  plVar1 = *(longlong **)(param_1 + 0x230);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,plVar1 != (longlong *)(param_1 + 0x1f8),param_3,param_4,
               (longlong *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x1b8));
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  FUN_18020e450(param_1 + 400);
  FUN_18020e450(param_1 + 0x170);
  FUN_18020e450(param_1 + 0x150);
  FUN_18020e450(param_1 + 0x130);
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN_18020e450(param_1 + 0x88);
  FUN_18020e450(param_1 + 0x68);
  FUN_18020e450(param_1 + 0x48);
  FUN_18020e450(param_1 + 0x28);
  FUN_18020e450(param_1);
  return;
}



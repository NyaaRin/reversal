// 0x1800f5240  FUN_1800f5240
// size=612 thunk=false
// signature: undefined FUN_1800f5240()
// status: ok


void FUN_1800f5240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x8b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x880));
    *(undefined8 *)(param_1 + 0x8b8) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x860);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x828));
    *(undefined8 *)(param_1 + 0x860) = 0;
  }
  FUN_18020e450(param_1 + 0x7d8);
  FUN_18020e450(param_1 + 0x7b8);
  FUN_18020e450(param_1 + 0x790);
  FUN_18020e450(param_1 + 0x770);
  FUN_18020e450(param_1 + 0x750);
  FUN_18020e450(param_1 + 0x730);
  plVar1 = *(longlong **)(param_1 + 0x710);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x6d8));
    *(undefined8 *)(param_1 + 0x710) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x698));
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x690);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x658));
    *(undefined8 *)(param_1 + 0x690) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x650);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x618));
    *(undefined8 *)(param_1 + 0x650) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x610);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x5d8));
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x5d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x598));
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  FUN_1800f56c0(param_1 + 0x370);
  FUN_18020d2d0(param_1 + 0x358);
  FUN_18020ac70(param_1 + 0x340);
  FUN_18020d390();
  FUN_1800f5600(param_1 + 0x220);
  FUN_18020abf0(param_1 + 0x1d8);
  FUN_18020d430();
  lVar2 = param_1 + 0x188;
  FUN_18021ddb0();
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,plVar1 != (longlong *)(param_1 + 0x140),param_3,param_4,lVar2,param_1 + 0x118,
               (longlong *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  FUN_18020d4a0(param_1 + 0x118);
  FUN_18020a040();
  FUN_1800f54b0(param_1 + 0x50);
  return;
}



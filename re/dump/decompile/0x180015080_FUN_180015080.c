// 0x180015080  FUN_180015080
// size=238 thunk=false
// signature: undefined FUN_180015080()
// status: ok


void FUN_180015080(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != lVar1) {
    do {
      FUN_18023b050(lVar2);
      lVar2 = lVar2 + 0x60;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x118) != *(longlong *)(param_1 + 0x120)) {
    FUN_18022a400();
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_180254220(param_1 + 0xf0);
  FUN_18024f460(param_1);
  FUN_18024f770(param_1);
  *(undefined8 *)(param_1 + 0x578) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0xbe99999a;
  *(undefined1 *)(param_1 + 0x588) = 1;
  FUN_1801fc8c0(param_1 + 0x50,param_1,param_2);
  return;
}



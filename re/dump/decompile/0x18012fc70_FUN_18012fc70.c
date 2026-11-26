// 0x18012fc70  FUN_18012fc70
// size=122 thunk=false
// signature: undefined FUN_18012fc70()
// status: ok


void FUN_18012fc70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  for (plVar2 = &DAT_180400bd0; plVar2 != (longlong *)&DAT_180400c00; plVar2 = plVar2 + 1) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3,plVar2);
    }
  }
  return;
}



// 0x1802886f0  FUN_1802886f0
// size=99 thunk=false
// signature: undefined FUN_1802886f0()
// status: ok


void FUN_1802886f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x14c8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x14c0);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    *(undefined4 *)(*plVar2 + 0x2c4) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x27d0) != 0) {
    *(undefined8 *)(param_1 + 0x27c8) = 0;
    FUN_18026f680();
    *(undefined8 *)(param_1 + 0x27d0) = 0;
  }
  return;
}



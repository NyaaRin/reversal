// 0x1802e205c  FUN_1802e205c
// size=73 thunk=false
// signature: undefined FUN_1802e205c()
// status: ok


undefined8 FUN_1802e205c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)*plVar1)(plVar1);
    if (*(int *)(param_2 + 0xb8) < iVar2) {
      (**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0xb8));
    }
  }
  return 0;
}



// 0x1802e1490  FUN_1802e1490
// size=65 thunk=false
// signature: undefined FUN_1802e1490()
// status: ok


undefined8 FUN_1802e1490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  iVar2 = (**(code **)*plVar1)(plVar1);
  if (*(int *)(param_2 + 0x20) < iVar2) {
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0x20));
  }
  return 0;
}



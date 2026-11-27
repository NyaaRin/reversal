// 0x1802e1630  FUN_1802e1630
// size=65 thunk=false
// signature: undefined FUN_1802e1630()
// status: ok


undefined8 FUN_1802e1630(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  iVar2 = (**(code **)*plVar1)(plVar1);
  if (*(int *)(param_2 + 0x20) < iVar2) {
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0x20));
  }
  return 0;
}



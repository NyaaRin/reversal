// 0x1802e03bc  FUN_1802e03bc
// size=57 thunk=false
// signature: undefined FUN_1802e03bc()
// status: ok


undefined8 FUN_1802e03bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  pcVar2 = (code *)((undefined8 *)*plVar1)[2];
  uVar3 = (**(code **)*plVar1)(plVar1);
  (*pcVar2)(plVar1,uVar3);
  return 0;
}



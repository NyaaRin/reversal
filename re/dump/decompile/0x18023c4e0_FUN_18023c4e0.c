// 0x18023c4e0  FUN_18023c4e0
// size=60 thunk=false
// signature: undefined FUN_18023c4e0()
// status: ok


void FUN_18023c4e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar3 = (longlong *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



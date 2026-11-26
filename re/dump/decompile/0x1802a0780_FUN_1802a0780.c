// 0x1802a0780  FUN_1802a0780
// size=88 thunk=false
// signature: undefined FUN_1802a0780()
// status: ok


void FUN_1802a0780(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar2 + *(int *)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_18026f680(*puVar2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_18026f680();
  }
  return;
}



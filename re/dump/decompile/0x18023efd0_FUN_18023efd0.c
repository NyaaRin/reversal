// 0x18023efd0  FUN_18023efd0
// size=171 thunk=false
// signature: undefined FUN_18023efd0()
// status: ok


void FUN_18023efd0(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_38;
  int local_30 [4];
  
  local_38 = (undefined8 *)0x0;
  local_30[0] = param_2 + 10;
  FUN_1801fc1f0(&local_38,local_30);
  puVar2 = (undefined8 *)FUN_1802d8350(0x20);
  puVar1 = local_38;
  *puVar2 = vftable_std__Node_base;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  local_38 = (undefined8 *)0x0;
  FUN_18023c1f0(param_1 + 0x38,puVar1);
  puVar1[4] = puVar2;
  puVar2[3] = puVar1;
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  FUN_180235010(param_1);
  FUN_180235430(param_1 + 0x38,puVar1);
  *(undefined8 **)(param_1 + 0x40) = puVar1;
  return;
}



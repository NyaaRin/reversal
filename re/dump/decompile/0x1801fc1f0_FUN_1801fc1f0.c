// 0x1801fc1f0  FUN_1801fc1f0
// size=133 thunk=false
// signature: undefined FUN_1801fc1f0()
// status: ok


undefined8 * FUN_1801fc1f0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1802d8350();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  uVar1 = *param_2;
  *puVar2 = vftable_std__Node_base;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = vftable_std__Node_assert;
  puVar2[4] = 0;
  *param_1 = puVar2;
  return param_1;
}



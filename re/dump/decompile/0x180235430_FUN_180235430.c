// 0x180235430  FUN_180235430
// size=152 thunk=false
// signature: undefined FUN_180235430()
// status: ok


void FUN_180235430(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 8) == 8) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xc;
    if (1 < *(int *)(param_2 + 8) - 10U) {
      uVar2 = 0xe;
    }
  }
  puVar1 = (undefined8 *)FUN_1802d8350();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = vftable_std__Node_base;
  *(undefined4 *)(puVar1 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = vftable_std__Node_end_group;
  puVar1[4] = param_2;
  FUN_18023c1f0(param_1,puVar1);
  return;
}



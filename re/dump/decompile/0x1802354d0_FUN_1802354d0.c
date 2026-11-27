// 0x1802354d0  FUN_1802354d0
// size=108 thunk=false
// signature: undefined FUN_1802354d0()
// status: ok


void FUN_1802354d0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1802d8350();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = vftable_std__Node_base;
  puVar1[1] = 0xd;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = vftable_std__Node_capture;
  *(undefined4 *)(puVar1 + 4) = param_2;
  FUN_18023c1f0(param_1,puVar1);
  return;
}



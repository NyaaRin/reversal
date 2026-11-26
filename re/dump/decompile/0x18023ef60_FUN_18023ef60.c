// 0x18023ef60  FUN_18023ef60
// size=106 thunk=false
// signature: undefined FUN_18023ef60()
// status: ok


void FUN_18023ef60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1802d8350(0x20);
  *puVar1 = vftable_std__Node_base;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 8;
  uVar2 = FUN_18023c1f0(param_1 + 0x38,puVar1);
  FUN_180235010(param_1);
  FUN_180235430(param_1 + 0x38,uVar2);
  return;
}



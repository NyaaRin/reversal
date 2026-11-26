// 0x1802416a0  FUN_1802416a0
// size=84 thunk=false
// signature: undefined FUN_1802416a0()
// status: ok


void FUN_1802416a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50) & 3;
  if (uVar1 == 1) {
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  else {
    if (uVar1 != 2) goto LAB_1802416da;
    lVar2 = param_1 + 0x18;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x48))(lVar2);
LAB_1802416da:
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_180241430(param_1 + 8);
  return;
}



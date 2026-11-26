// 0x180014130  FUN_180014130
// size=85 thunk=false
// signature: undefined FUN_180014130()
// status: ok


void FUN_180014130(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38) & 3;
  if (uVar1 == 1) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  if (uVar1 == 2) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// 0x180241640  FUN_180241640
// size=82 thunk=false
// signature: undefined FUN_180241640()
// status: ok


void FUN_180241640(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48) & 3;
  if (uVar1 == 1) {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  else {
    if (uVar1 != 2) goto LAB_180241678;
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    lVar3 = param_1 + 0x10;
  }
  (*(code *)*puVar2)(lVar3);
LAB_180241678:
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_180241430(param_1);
  return;
}



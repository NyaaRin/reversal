// 0x180241c90  FUN_180241c90
// size=137 thunk=false
// signature: undefined FUN_180241c90()
// status: ok


void FUN_180241c90(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) goto LAB_180241cf5;
  uVar2 = *(uint *)(lVar1 + 0x70) & 3;
  if (uVar2 == 1) {
    lVar3 = *(longlong *)(lVar1 + 0x60);
LAB_180241cde:
    (*(code *)**(undefined8 **)(lVar1 + 0x68))(lVar3);
  }
  else if (uVar2 == 2) {
    lVar3 = lVar1 + 0x38;
    goto LAB_180241cde;
  }
  *(undefined8 *)(lVar1 + 0x70) = 0;
  FUN_180241430(lVar1 + 0x28);
LAB_180241cf5:
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



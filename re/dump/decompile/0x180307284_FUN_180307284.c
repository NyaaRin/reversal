// 0x180307284  FUN_180307284
// size=82 thunk=false
// signature: undefined FUN_180307284()
// status: ok


void FUN_180307284(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x108);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x28);
  puVar2 = *(undefined8 **)(param_2 + 0x40);
  FUN_18023a4a0();
  *(undefined8 *)(param_2 + 0x48) = 0;
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



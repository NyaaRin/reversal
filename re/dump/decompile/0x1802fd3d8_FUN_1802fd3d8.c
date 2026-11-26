// 0x1802fd3d8  FUN_1802fd3d8
// size=82 thunk=false
// signature: undefined FUN_1802fd3d8()
// status: ok


void FUN_1802fd3d8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x108);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x40);
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  FUN_180220bc0();
  *(undefined8 *)(param_2 + 0x48) = 0;
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



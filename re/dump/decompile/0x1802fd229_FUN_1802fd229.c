// 0x1802fd229  FUN_1802fd229
// size=97 thunk=false
// signature: undefined FUN_1802fd229()
// status: ok


void FUN_1802fd229(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x168);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x30);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  FUN_180220190(*(undefined8 *)(param_2 + 0x30),*puVar2);
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_180217fc0();
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



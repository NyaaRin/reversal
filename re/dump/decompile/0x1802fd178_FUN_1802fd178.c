// 0x1802fd178  FUN_1802fd178
// size=152 thunk=false
// signature: undefined FUN_1802fd178()
// status: ok


void FUN_1802fd178(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x168);
  *(longlong *)(param_2 + 0x48) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_2 + 0x58) = lVar3 * 0x98 + lVar1;
  FUN_180220190(lVar3 * 0x98 + lVar1,lVar3 * 0x130 + lVar1,lVar1);
  *(undefined8 *)(param_2 + 0x40) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  FUN_180220200(lVar3 * 0x130 + lVar1,*puVar4,lVar3 * 0x98 + lVar1);
  FUN_180217fc0();
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



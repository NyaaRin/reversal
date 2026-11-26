// 0x1802fd35c  FUN_1802fd35c
// size=111 thunk=false
// signature: undefined FUN_1802fd35c()
// status: ok


void FUN_1802fd35c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x108);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  lVar3 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_2 + 0x60) = lVar3 + lVar1;
  FUN_180220bc0(lVar3 + lVar1,lVar1 + lVar3 * 2,lVar1);
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  FUN_180220c00(lVar1 + lVar3 * 2,*puVar4,lVar3 + lVar1);
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



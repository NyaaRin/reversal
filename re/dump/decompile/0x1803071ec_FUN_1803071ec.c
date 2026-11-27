// 0x1803071ec  FUN_1803071ec
// size=139 thunk=false
// signature: undefined FUN_1803071ec()
// status: ok


void FUN_1803071ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x108);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  lVar3 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_2 + 0x60) = lVar3 * 0x10 + lVar1;
  FUN_18023a4a0(lVar3 * 0x10 + lVar1,lVar3 * 0x20 + lVar1,lVar1);
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x40);
  FUN_180220c00(lVar1 + lVar3 * 0x20,*puVar4,lVar3 * 0x10 + lVar1);
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



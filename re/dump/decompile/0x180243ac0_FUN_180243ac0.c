// 0x180243ac0  FUN_180243ac0
// size=101 thunk=false
// signature: undefined FUN_180243ac0()
// status: ok


void FUN_180243ac0(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = *(ulonglong *)(param_1 + 0x110);
  uVar2 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) * -0x5555555555555555
  ;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    local_10 = 0;
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10 + uVar1 * 0x30);
    FUN_18024fdb0(param_1,&local_18,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}



// 0x180243b30  FUN_180243b30
// size=157 thunk=false
// signature: undefined FUN_180243b30()
// status: ok


void FUN_180243b30(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_18;
  longlong local_10;
  
  uVar3 = *(ulonglong *)(param_1 + 0x110);
  uVar2 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) * -0x5555555555555555
  ;
  if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  local_18 = *(ulonglong *)(*(longlong *)(param_1 + 0xf0) + 0x10 + uVar3 * 0x30);
  uVar3 = (*(longlong *)(param_1 + 0x58) - lVar1 >> 5) * -0x5555555555555555;
  if (local_18 <= uVar3 && uVar3 - local_18 != 0) {
    local_10 = *(longlong *)(local_18 * 0x60 + 8 + lVar1) - *(longlong *)(local_18 * 0x60 + lVar1)
               >> 4;
    FUN_18024fdb0(param_1,&local_18,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}



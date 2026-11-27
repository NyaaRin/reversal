// 0x18020c8a0  FUN_18020c8a0
// size=134 thunk=false
// signature: undefined FUN_18020c8a0()
// status: ok


void FUN_18020c8a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_18022ddb0();
  }
  uVar3 = *(longlong *)(param_1 + 0x10) - 1;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & uVar3;
  uVar4 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20);
  lVar1 = (uVar4 & uVar3) * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 8)) == 0) {
    uVar2 = FUN_1802d8350(0x20);
    *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 8)) = uVar2;
  }
  FUN_18016d4c0(*(undefined8 *)
                 (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar4) * 8),
                param_2);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// 0x180239ad0  FUN_180239ad0
// size=140 thunk=false
// signature: undefined FUN_180239ad0()
// status: ok


void FUN_180239ad0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  param_2 = param_2 & 0xffffffff;
  lVar3 = (longlong)puVar1 - lVar2 >> 3;
  uVar4 = lVar3 * -0x5555555555555555;
  if (param_2 < uVar4) {
    *(ulonglong *)(param_1 + 0x18) = lVar2 + param_2 * 0x18;
    return;
  }
  if (uVar4 < param_2) {
    if ((ulonglong)((*(longlong *)(param_1 + 0x20) - lVar2 >> 3) * -0x5555555555555555) < param_2) {
      FUN_18023e220((longlong *)(param_1 + 0x10),param_2);
      return;
    }
    for (lVar2 = param_2 + lVar3 * 0x5555555555555555; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
    }
    *(undefined8 **)(param_1 + 0x18) = puVar1;
  }
  return;
}



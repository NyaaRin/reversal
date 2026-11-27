// 0x1801fcf20  FUN_1801fcf20
// size=153 thunk=false
// signature: undefined FUN_1801fcf20()
// status: ok


uint FUN_1801fcf20(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *param_1 ^ 0x80000000;
  iVar2 = (param_1[1] ^ 0x80000000) - uVar5;
  if (iVar2 != -1) {
    uVar1 = iVar2 + 1;
    uVar3 = FUN_18021dbf0(param_2);
    lVar4 = (ulonglong)uVar3 * (ulonglong)uVar1;
    uVar3 = (uint)lVar4;
    if (uVar3 < uVar1) {
      while (uVar3 < -uVar1 % uVar1) {
        uVar3 = FUN_18021dbf0(param_2);
        lVar4 = (ulonglong)uVar3 * (ulonglong)uVar1;
        uVar3 = (uint)lVar4;
      }
    }
    return (int)((ulonglong)lVar4 >> 0x20) + uVar5 ^ 0x80000000;
  }
  iVar2 = FUN_18021dbf0(param_2);
  return iVar2 + uVar5 ^ 0x80000000;
}



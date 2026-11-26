// 0x1800b50c0  FUN_1800b50c0
// size=103 thunk=false
// signature: undefined FUN_1800b50c0()
// status: ok


void FUN_1800b50c0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *DAT_18040a5f0;
  if ((lVar2 != 0) && (iVar1 = *DAT_18040a5f8, iVar1 - 1U < 0xfff)) {
    iVar4 = 0;
    while (iVar4 < iVar1) {
      if ((*(byte *)(lVar2 + 8 + (longlong)iVar4 * 0x10) & 1) == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + (longlong)iVar4 * 0x10);
        if (lVar3 == 0) {
          iVar4 = iVar4 + 1;
        }
        else {
          *(undefined8 *)(lVar3 + 0xa0) = param_1;
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  return;
}



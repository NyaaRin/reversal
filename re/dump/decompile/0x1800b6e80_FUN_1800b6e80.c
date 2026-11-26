// 0x1800b6e80  FUN_1800b6e80
// size=290 thunk=false
// signature: undefined FUN_1800b6e80()
// status: ok


void FUN_1800b6e80(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((1 < DAT_1803fb244) && (-1 < DAT_1803db410)) {
    iVar4 = 0;
    iVar5 = DAT_1803fb244 + -1;
    iVar3 = 0;
    if (iVar5 < 0x10) {
      if (iVar5 < 1) {
        return;
      }
    }
    else {
      iVar5 = 0x10;
    }
    do {
      for (uVar1 = DAT_1803db410 - iVar3; (int)uVar1 < 0; uVar1 = uVar1 + 0x100) {
      }
      for (iVar2 = uVar1 - 1; iVar2 < 0; iVar2 = iVar2 + 0x100) {
      }
      if (((((&DAT_1803fb260)[(ulonglong)uVar1 * 0x18] != '\0') &&
           ((&DAT_1803fb260)[(longlong)iVar2 * 0x18] != '\0')) &&
          (DAT_180380b40 <
           *(double *)(&DAT_1803fb250 + (ulonglong)uVar1 * 0x18) -
           *(double *)(&DAT_1803fb250 + (longlong)iVar2 * 0x18))) &&
         (*(double *)(&DAT_1803fb250 + (ulonglong)uVar1 * 0x18) -
          *(double *)(&DAT_1803fb250 + (longlong)iVar2 * 0x18) < DAT_180380c90)) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar5);
    if (iVar4 != 0) {
      return;
    }
  }
  return;
}



// 0x1800b37b0  FUN_1800b37b0
// size=350 thunk=false
// signature: undefined FUN_1800b37b0()
// status: ok


void FUN_1800b37b0(void)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  void *lp;
  
  if ((((DAT_1803fa608 != 0) && (DAT_1803fa668 != (longlong *)0x0)) &&
      (lp = (void *)(**(code **)(*DAT_1803fa668 + 0x240))(), lp != (void *)0x0)) &&
     (BVar3 = IsBadReadPtr(lp,8), BVar3 == 0)) {
    iVar1 = *(int *)(DAT_1803fa608 + 0x20);
    iVar2 = *(int *)((longlong)lp + 0x20);
    if (DAT_1804096dc == '\0') {
      DAT_1804096dc = 1;
      DAT_1803e7b98 = iVar1;
      DAT_1804096c4 = iVar2;
      return;
    }
    iVar4 = FUN_1800b3740();
    if (iVar1 != DAT_1803e7b98) {
      if (0x100 < (uint)(iVar1 - DAT_1803e7b98)) {
        DAT_1803e7b98 = 0xffffffff;
        DAT_1804096c4 = 0;
        DAT_1804096d8 = 0.0;
        DAT_1804096dc = 0;
        return;
      }
      DAT_1804096d8 = DAT_1804096d8 + (float)(iVar1 - DAT_1803e7b98);
      if ((float)iVar4 < DAT_1804096d8) {
        DAT_1804096d8 = (float)iVar4;
      }
      DAT_1803e7b98 = iVar1;
      FUN_1800b3920();
    }
    if ((iVar2 < DAT_1804096c4) &&
       (DAT_1804096d8 = DAT_1804096d8 - (float)(DAT_1804096c4 + 1), DAT_1804096d8 < 0.0)) {
      DAT_1804096d8 = 0.0;
    }
    DAT_1804096c4 = iVar2;
    return;
  }
  DAT_1804096d8 = 0.0;
  DAT_1803e7b98 = 0xffffffff;
  DAT_1804096c4 = 0;
  DAT_1804096dc = 0;
  return;
}



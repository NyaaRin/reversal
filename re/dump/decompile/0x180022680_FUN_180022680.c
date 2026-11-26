// 0x180022680  FUN_180022680
// size=180 thunk=false
// signature: undefined FUN_180022680()
// status: ok


uint FUN_180022680(uint param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_1 < param_2) {
    if ((DAT_18042f170 & 1) == 0) {
      DAT_18042f170 = DAT_18042f170 | 1;
      FUN_1800224b0();
    }
    iVar3 = (param_2 - 1U ^ 0x80000000) - (param_1 ^ 0x80000000);
    if (iVar3 == -1) {
      iVar3 = FUN_18021dbf0(&DAT_180426270);
    }
    else {
      uVar4 = iVar3 + 1;
      uVar1 = FUN_18021dbf0(&DAT_180426270);
      lVar2 = (ulonglong)uVar1 * (ulonglong)uVar4;
      uVar1 = (uint)lVar2;
      if (uVar1 < uVar4) {
        while (uVar1 < -uVar4 % uVar4) {
          uVar1 = FUN_18021dbf0(&DAT_180426270);
          lVar2 = (ulonglong)uVar1 * (ulonglong)uVar4;
          uVar1 = (uint)lVar2;
        }
      }
      iVar3 = (int)((ulonglong)lVar2 >> 0x20);
    }
    return iVar3 + (param_1 ^ 0x80000000) ^ 0x80000000;
  }
  return param_1;
}



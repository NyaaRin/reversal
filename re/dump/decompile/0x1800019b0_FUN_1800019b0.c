// 0x1800019b0  FUN_1800019b0
// size=85 thunk=false
// signature: undefined FUN_1800019b0()
// callers:
// status: ok


void FUN_1800019b0(void)

{
  undefined *_Str;
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  
  _Str = PTR_DAT_1803dde90;
  uVar2 = (ulonglong)DAT_1803dde88;
  DAT_1803dcd84 = DAT_1803dde88;
  *(undefined **)(uVar2 * 0x10 + 0x1803dce90) = PTR_DAT_1803dde90;
  sVar3 = strlen(_Str);
  iVar1 = (int)sVar3;
  *(int *)(&DAT_1803dce88 + uVar2 * 0x10) = iVar1;
  if (DAT_1803dcd80 < iVar1) {
    DAT_1803dcd80 = iVar1;
  }
  PTR_vftable_CUtlCharConversion_1803dcd60 = (undefined *)vftable_CUtlNoEscConversion;
  return;
}



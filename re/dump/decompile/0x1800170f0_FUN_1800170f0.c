// 0x1800170f0  FUN_1800170f0
// size=85 thunk=false
// signature: undefined FUN_1800170f0()
// status: ok


undefined4 FUN_1800170f0(void)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180017070();
  if (lVar3 == 0) {
    return 0;
  }
  _Str1 = *(char **)(lVar3 + 0x18);
  if (_Str1 == (char *)0x0) {
LAB_18001713b:
    uVar2 = 0;
  }
  else {
    iVar1 = _stricmp(_Str1,"sv_cheats");
    if (iVar1 != 0) {
      iVar1 = _stricmp(_Str1,"sv_allowcslua");
      if (iVar1 != 0) goto LAB_18001713b;
    }
    uVar2 = 1;
  }
  return uVar2;
}



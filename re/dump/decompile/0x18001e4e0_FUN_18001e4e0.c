// 0x18001e4e0  FUN_18001e4e0
// size=201 thunk=false
// signature: undefined FUN_18001e4e0()
// status: ok


char * FUN_18001e4e0(longlong *param_1)

{
  int iVar1;
  char *_Str1;
  longlong lVar2;
  
  _Str1 = (char *)FUN_18001e410();
  if (((((_Str1 == (char *)0x0) || (*_Str1 == '\0')) || (_Str1 < (char *)0x10001)) ||
      (iVar1 = strcmp(_Str1,"CWeaponSWEP"), iVar1 == 0)) &&
     (((lVar2 = (**(code **)(*param_1 + 0x78))(param_1), lVar2 == 0 ||
       (_Str1 = *(char **)(lVar2 + 0x10), _Str1 < (char *)0x10001)) ||
      (iVar1 = strcmp(_Str1,"CWeaponSWEP"), iVar1 == 0)))) {
    if ((DAT_1803de128 == 0) || (DAT_1803fa798 != param_1)) {
      if ((lVar2 == 0) ||
         (_Str1 = *(char **)(lVar2 + 0x10), *(char **)(lVar2 + 0x10) < (char *)0x10001)) {
        _Str1 = (char *)0x0;
      }
    }
    else {
      _Str1 = (char *)&DAT_1803de118;
      if (0xf < DAT_1803de130) {
        _Str1 = DAT_1803de118;
      }
    }
  }
  return _Str1;
}



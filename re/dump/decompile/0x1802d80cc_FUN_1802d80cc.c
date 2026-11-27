// 0x1802d80cc  FUN_1802d80cc
// size=261 thunk=false
// signature: undefined FUN_1802d80cc()
// status: ok


ulonglong FUN_1802d80cc(void *param_1,longlong param_2,void *param_3,longlong param_4,UINT *param_5)

{
  UINT _CchDest;
  int iVar1;
  wchar_t **ppwVar2;
  ulonglong _Size;
  _locale_t _Plocinfo;
  int iVar3;
  ulonglong uVar4;
  BOOL unaff_R15D;
  uint in_stack_ffffffffffffffd4;
  
  _Size = param_4 - (longlong)param_3;
  if (param_5 == (UINT *)0x0) {
    ppwVar2 = ___lc_locale_name_func();
    _Plocinfo = (_locale_t)ppwVar2[1];
    _CchDest = ___lc_collate_cp_func();
  }
  else {
    _Plocinfo = *(_locale_t *)(param_5 + 2);
    _CchDest = *param_5;
  }
  if ((_Plocinfo == (_locale_t)0x0) && (_CchDest == 0)) {
    uVar4 = _Size;
    if (_Size <= (ulonglong)(param_2 - (longlong)param_1)) {
      memcpy(param_1,param_3,_Size);
    }
  }
  else {
    iVar1 = __crtLCMapStringA(_Plocinfo,(LPCWSTR)0x30430,(DWORD)param_3,(LPCSTR)(_Size & 0xffffffff)
                              ,0,(LPSTR)((ulonglong)in_stack_ffffffffffffffd4 << 0x20),_CchDest,1,
                              unaff_R15D);
    uVar4 = 0xffffffffffffffff;
    if (iVar1 != 0) {
      iVar3 = (int)(param_2 - (longlong)param_1);
      uVar4 = (longlong)iVar1;
      if (iVar1 <= iVar3) {
        __crtLCMapStringA(_Plocinfo,(LPCWSTR)0x30430,(DWORD)param_3,(LPCSTR)(_Size & 0xffffffff),
                          (int)param_1,(LPSTR)CONCAT44(in_stack_ffffffffffffffd4,iVar3),_CchDest,1,
                          unaff_R15D);
      }
    }
  }
  return uVar4;
}



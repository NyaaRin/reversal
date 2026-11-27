// 0x1802d8284  MSVCP140.DLL::__crtLCMapStringA
// size=6 thunk=true
// signature: int __cdecl __crtLCMapStringA(_locale_t _Plocinfo, LPCWSTR _LocaleName, DWORD _DwMapFlag, LPCSTR _LpSrcStr, int _CchSrc, LPSTR _LpDestStr, int _CchDest, int _Code_page, BOOL _BError)
// status: ok


int __cdecl
__crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                 int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d8284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __crtLCMapStringA(_Plocinfo,_LocaleName,_DwMapFlag,_LpSrcStr,_CchSrc,_LpDestStr,_CchDest,
                            _Code_page,_BError);
  return iVar1;
}



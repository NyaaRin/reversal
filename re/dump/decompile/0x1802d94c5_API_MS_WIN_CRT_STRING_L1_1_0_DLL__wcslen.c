// 0x1802d94c5  API-MS-WIN-CRT-STRING-L1-1-0.DLL::wcslen
// size=6 thunk=true
// signature: size_t __cdecl wcslen(wchar_t * _Str)
// status: ok


size_t __cdecl wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = wcslen(_Str);
  return sVar1;
}



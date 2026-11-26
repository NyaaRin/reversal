// 0x1802d94b3  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strlen
// size=6 thunk=true
// signature: size_t __cdecl strlen(char * _Str)
// status: ok


size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}



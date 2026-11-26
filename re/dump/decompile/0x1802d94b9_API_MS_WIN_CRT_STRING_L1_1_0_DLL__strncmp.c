// 0x1802d94b9  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncmp
// size=6 thunk=true
// signature: int __cdecl strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
// status: ok


int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



// 0x1802d94ad  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strcmp
// size=6 thunk=true
// signature: int __cdecl strcmp(char * _Str1, char * _Str2)
// status: ok


int __cdecl strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



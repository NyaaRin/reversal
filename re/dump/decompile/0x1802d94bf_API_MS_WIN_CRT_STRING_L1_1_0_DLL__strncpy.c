// 0x1802d94bf  API-MS-WIN-CRT-STRING-L1-1-0.DLL::strncpy
// size=6 thunk=true
// signature: char * __cdecl strncpy(char * _Dest, char * _Source, size_t _Count)
// status: ok


char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d94bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strncpy(_Dest,_Source,_Count);
  return pcVar1;
}



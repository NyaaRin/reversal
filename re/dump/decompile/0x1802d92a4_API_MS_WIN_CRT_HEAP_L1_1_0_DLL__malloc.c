// 0x1802d92a4  API-MS-WIN-CRT-HEAP-L1-1-0.DLL::malloc
// size=6 thunk=true
// signature: void * __cdecl malloc(size_t _Size)
// status: ok


void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d92a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



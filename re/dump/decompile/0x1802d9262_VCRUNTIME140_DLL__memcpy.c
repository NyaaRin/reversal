// 0x1802d9262  VCRUNTIME140.DLL::memcpy
// size=6 thunk=true
// signature: void * __cdecl memcpy(void * _Dst, void * _Src, size_t _Size)
// status: ok


void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// 0x1802d927a  VCRUNTIME140.DLL::memset
// size=6 thunk=true
// signature: void * __cdecl memset(void * _Dst, int _Val, size_t _Size)
// status: ok


void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d927a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



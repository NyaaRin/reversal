// 0x1802d9268  VCRUNTIME140.DLL::memcmp
// size=6 thunk=true
// signature: int __cdecl memcmp(void * _Buf1, void * _Buf2, size_t _Size)
// status: ok


int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d9268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



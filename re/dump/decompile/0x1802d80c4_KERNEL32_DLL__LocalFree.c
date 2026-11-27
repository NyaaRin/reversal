// 0x1802d80c4  KERNEL32.DLL::LocalFree
// size=7 thunk=true
// signature: HLOCAL __stdcall LocalFree(HLOCAL hMem)
// status: ok


HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}



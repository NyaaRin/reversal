// 0x1802d90d0  __scrt_is_ucrt_dll_in_use
// size=12 thunk=false
// signature: undefined __scrt_is_ucrt_dll_in_use()
// status: ok


/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1803da530 != 0;
}



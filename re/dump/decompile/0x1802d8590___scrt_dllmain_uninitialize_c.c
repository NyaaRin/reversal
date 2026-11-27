// 0x1802d8590  __scrt_dllmain_uninitialize_c
// size=48 thunk=false
// signature: undefined __scrt_dllmain_uninitialize_c()
// status: ok


/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    _execute_onexit_table(&DAT_1803f8f60);
    return;
  }
  iVar1 = vfunc_shared_1800139e0();
  if (iVar1 == 0) {
    _cexit();
  }
  return;
}



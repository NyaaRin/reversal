// 0x1802d84a4  __scrt_dllmain_after_initialize_c
// size=52 thunk=false
// signature: undefined __scrt_dllmain_after_initialize_c()
// status: ok


/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __scrt_dllmain_after_initialize_c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 == 0) {
    uVar2 = vfunc_shared_1800b0d60();
    iVar1 = _configure_narrow_argv(uVar2);
    if (iVar1 != 0) {
      return 0;
    }
    _initialize_narrow_environment();
  }
  else {
    FUN_1802d8df0();
  }
  return 1;
}



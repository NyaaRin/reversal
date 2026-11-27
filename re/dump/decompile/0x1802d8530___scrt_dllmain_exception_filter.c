// 0x1802d8530  __scrt_dllmain_exception_filter
// size=96 thunk=false
// signature: undefined __scrt_dllmain_exception_filter()
// status: ok


/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



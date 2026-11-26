// 0x1802d83a0  `eh_vector_destructor_iterator'
// size=107 thunk=false
// signature: void __cdecl `eh_vector_destructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4)
// status: ok


/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



// 0x1802d8734  __scrt_release_startup_lock
// size=36 thunk=false
// signature: undefined __scrt_release_startup_lock()
// status: ok


/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1803f8f50 = 0;
    UNLOCK();
  }
  return;
}



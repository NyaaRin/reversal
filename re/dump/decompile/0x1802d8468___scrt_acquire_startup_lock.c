// 0x1802d8468  __scrt_acquire_startup_lock
// size=57 thunk=false
// signature: undefined __scrt_acquire_startup_lock()
// status: ok


/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_acquire_startup_lock(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = __scrt_is_ucrt_dll_in_use();
  if (iVar2 == 0) {
LAB_1802d8496:
    uVar4 = 0;
  }
  else {
    do {
      lVar3 = 0;
      LOCK();
      bVar5 = DAT_1803f8f50 == 0;
      lVar1 = *(longlong *)((longlong)Self + 8);
      if (!bVar5) {
        lVar3 = DAT_1803f8f50;
        lVar1 = DAT_1803f8f50;
      }
      DAT_1803f8f50 = lVar1;
      UNLOCK();
      if (bVar5) goto LAB_1802d8496;
    } while (*(longlong *)((longlong)Self + 8) != lVar3);
    uVar4 = 1;
  }
  return uVar4;
}



// 0x1802d8a08  FUN_1802d8a08
// size=276 thunk=false
// signature: undefined FUN_1802d8a08()
// status: ok


undefined8 FUN_1802d8a08(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  cVar2 = FUN_1802d85d4(0);
  if (cVar2 != '\0') {
    uVar3 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_1803f8f48 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d90dc(7);
    }
    DAT_1803f8f48 = 1;
    cVar2 = FUN_1802d84d8();
    if (cVar2 != '\0') {
      FUN_1802d91d4();
      FUN_1802d9194();
      FUN_1802d91b0();
      iVar4 = _initterm_e(&DAT_18030d2b8,&DAT_18030d2c0);
      if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\0')) {
        _initterm(&DAT_18030ccd0,&DAT_18030d2a0);
        DAT_1803f8f48 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock(uVar3);
    if (!bVar1) {
      plVar5 = (longlong *)FUN_1802d91cc();
      if ((*plVar5 != 0) && (cVar2 = FUN_1802d869c(plVar5), cVar2 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,2,param_2);
      }
      DAT_1803f8f90 = DAT_1803f8f90 + 1;
      return 1;
    }
  }
  return 0;
}



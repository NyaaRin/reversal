// 0x1802d8b20  FUN_1802d8b20
// size=128 thunk=false
// signature: undefined FUN_1802d8b20()
// status: ok


undefined1
FUN_1802d8b20(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (DAT_1803f8f90 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_1803f8f90 = DAT_1803f8f90 + -1;
    uVar1 = __scrt_acquire_startup_lock();
    if (DAT_1803f8f48 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d90dc(7);
    }
    uVar2 = uVar1;
    __scrt_dllmain_uninitialize_c();
    FUN_1802d91a4();
    FUN_1802d9210();
    DAT_1803f8f48 = 0;
    __scrt_release_startup_lock(uVar1);
    uVar1 = __scrt_uninitialize_crt(param_1,0,param_3,param_4,uVar2);
    FUN_1802d85c0();
  }
  return uVar1;
}



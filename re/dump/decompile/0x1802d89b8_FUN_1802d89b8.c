// 0x1802d89b8  FUN_1802d89b8
// size=80 thunk=false
// signature: undefined FUN_1802d89b8()
// status: ok


ulonglong FUN_1802d89b8(undefined1 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1802d8b20(param_3 != 0);
    return uVar2;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_1802d84f0();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_1802d8518();
    }
    return (ulonglong)bVar1;
  }
  uVar2 = FUN_1802d8a08(param_1,param_3);
  return uVar2;
}



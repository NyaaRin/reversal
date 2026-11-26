// 0x1801eb5c0  FUN_1801eb5c0
// size=117 thunk=false
// signature: undefined FUN_1801eb5c0()
// status: ok


undefined8 FUN_1801eb5c0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_1803ff290);
  if ((DAT_1803ff284 == '\0') && (-1 < DAT_1803da6a0)) {
    lVar1 = DAT_1803fa4c8;
    if ((DAT_1803da6a0 != 0) && (lVar1 = 0, DAT_1803da6a0 == 1)) {
      lVar1 = DAT_1803fa500;
    }
    if (((lVar1 != 0) && (DAT_1803fa455 != '\0')) && (DAT_1803fa453 != '\0')) {
      uVar2 = 1;
      goto LAB_1801eb61f;
    }
  }
  uVar2 = 0;
LAB_1801eb61f:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
  return uVar2;
}



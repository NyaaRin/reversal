// 0x180071590  FUN_180071590
// size=262 thunk=false
// signature: undefined FUN_180071590()
// status: ok


undefined8 FUN_180071590(char param_1)

{
  if (DAT_180423600 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423640);
    if (DAT_1803fa660 != 0) {
      if (DAT_1804236b0 + DAT_180423654 == 0) {
        DAT_1804235e8 = *(undefined1 *)(DAT_1803fa660 + 0x90);
        DAT_1804235a8 = *(undefined1 *)(DAT_1803fa660 + 0x91);
        DAT_180423638 = *(undefined1 *)(DAT_1803fa660 + 0x92);
        DAT_1804235d0 = *(undefined1 *)(DAT_1803fa660 + 0x93);
        DAT_180423598 = *(undefined4 *)(DAT_1803fa660 + 0x94);
        DAT_180423688 = *(undefined4 *)(DAT_1803fa660 + 0x98);
        DAT_1804236a8 = *(undefined4 *)(DAT_1803fa660 + 0x9c);
        DAT_180423620 = *(undefined4 *)(DAT_1803fa660 + 0xa0);
        DAT_180423578 = DAT_1803fa660;
LAB_18007165f:
        if (param_1 == '\0') {
          DAT_180423654 = DAT_180423654 + 1;
        }
        else {
          DAT_1804236b0 = DAT_1804236b0 + 1;
        }
        *(undefined4 *)(DAT_1803fa660 + 0x90) = 0;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
        return 1;
      }
      if (DAT_180423578 == DAT_1803fa660) goto LAB_18007165f;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
  }
  return 0;
}



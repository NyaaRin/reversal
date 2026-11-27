// 0x1800fab20  FUN_1800fab20
// size=87 thunk=false
// signature: undefined FUN_1800fab20()
// status: ok


void FUN_1800fab20(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    (&DAT_1804586e0)[uVar2] = 0xffffffff;
    if (0x80 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d8348();
    }
    (&DAT_180458a10)[uVar2] = 0;
    (&DAT_1804588f0)[uVar2] = 0;
    (&DAT_180458650)[uVar2] = 0;
    (&DAT_180458980)[uVar2] = 0;
    uVar1 = (uint)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while ((int)uVar1 < 0x81);
  return;
}



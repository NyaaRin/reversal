// 0x180051cc0  FUN_180051cc0
// size=113 thunk=false
// signature: undefined FUN_180051cc0()
// status: ok


void FUN_180051cc0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_1803eb7a8;
  piVar2 = DAT_1803eb7a0;
  if (DAT_1803eb498 != 0) {
    while (piVar2 != piVar1) {
      if (((*piVar2 < 1) || (piVar2[1] < 1)) || (0x10 < piVar2[1])) {
        piVar2 = piVar2 + 6;
      }
      else {
        memcpy((void *)(*piVar2 + DAT_1803eb498),piVar2 + 2,(longlong)piVar2[1]);
        piVar2 = piVar2 + 6;
      }
    }
  }
  return;
}



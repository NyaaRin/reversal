// 0x180051d40  FUN_180051d40
// size=122 thunk=false
// signature: undefined FUN_180051d40()
// status: ok


void FUN_180051d40(void)

{
  longlong lVar1;
  
  if (DAT_1803eb490 != '\0') {
    DAT_1803eb490 = '\0';
    FUN_180051cc0();
    lVar1 = DAT_1803fa608;
    if ((DAT_1803eb79c != '\0') && (DAT_1803fa608 != 0)) {
      *(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803eb790;
      *(undefined4 *)(lVar1 + 0x18) = DAT_1803eb798;
    }
    DAT_1803eb79c = '\0';
    DAT_1803eb498 = 0;
    DAT_1803eb4a0 = 0;
    if (DAT_1803eb7a0 != DAT_1803eb7a8) {
      DAT_1803eb7a8 = DAT_1803eb7a0;
    }
  }
  return;
}



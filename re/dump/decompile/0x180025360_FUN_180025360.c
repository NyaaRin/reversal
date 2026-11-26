// 0x180025360  FUN_180025360
// size=202 thunk=false
// signature: undefined FUN_180025360()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180025360(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (DAT_1803de066 != '\0') {
    DAT_1803de066 = '\0';
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if ((lVar3 != 0) && (DAT_1803fa658 != (longlong *)0x0)) {
      (**(code **)(*DAT_1803fa658 + 0x18))(DAT_1803fa658,lVar3);
    }
  }
  if ((DAT_1803de064 != '\0') && (DAT_1803de058 != (undefined4 *)0x0)) {
    *DAT_1803de058 = DAT_1803de060;
  }
  lVar3 = DAT_1803fa608;
  DAT_1803de064 = 0;
  if ((DAT_1803de065 != '\0') && (DAT_1803fa608 != 0)) {
    *(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803ddea0;
    *(undefined4 *)(lVar3 + 0x18) = DAT_1803ddea8;
  }
  DAT_1803de065 = 0;
  DAT_1803de067 = 0;
  _DAT_1803de050 = 0;
  return;
}



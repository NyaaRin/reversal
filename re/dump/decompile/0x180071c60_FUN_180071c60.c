// 0x180071c60  FUN_180071c60
// size=167 thunk=false
// signature: undefined FUN_180071c60()
// status: ok


undefined8 FUN_180071c60(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (DAT_180423968 != 0) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = FUN_18001dbf0(lVar3);
    if (lVar3 != DAT_180423968) {
      return 0;
    }
  }
  if ((((DAT_180423986 != '\0') && (0.0 <= DAT_1803e91f8)) && (DAT_1803fa608 != (float *)0x0)) &&
     ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e91f8 &&
      ((double)*DAT_1803fa608 - DAT_1803e91f8 <= DAT_180380c90)))) {
    return 1;
  }
  return 0;
}



// 0x180051c50  FUN_180051c50
// size=111 thunk=false
// signature: undefined FUN_180051c50()
// status: ok


undefined8 FUN_180051c50(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((((DAT_1803f9290 != 0) && (DAT_1803fa658 != 0)) && (DAT_1803fa5a0 != 0)) &&
     (DAT_1803fa608 != 0)) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}



// 0x18002df10  FUN_18002df10
// size=494 thunk=false
// signature: undefined FUN_18002df10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002df10(char param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if ((((param_1 != '\0') && (DAT_1803faf50 != 0)) && (DAT_1803fa678 != (longlong *)0x0)) &&
     (((lVar2 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar2 != 0 &&
       (*(longlong *)(lVar2 + 8) == DAT_1803faf50)) &&
      ((param_2 == 0 || (param_2 == DAT_1803faf50)))))) {
    FUN_18002d8c0(lVar2,DAT_1803db338);
    FUN_18002d8c0(lVar2,DAT_1803db33c);
    FUN_18002d8c0(lVar2,DAT_1803db330);
    lVar1 = DAT_1803fcc58;
    for (lVar3 = DAT_1803fcc50; lVar4 = lVar2, lVar3 != lVar1; lVar3 = lVar3 + 0x98) {
      FUN_18002d8c0(lVar2,*(undefined4 *)(lVar3 + 0x7c));
    }
  }
  FUN_18002d030(lVar4);
  DAT_1803db338 = 0xffffffff;
  DAT_1803db33c = 0xffffffff;
  DAT_1803db330 = 0xffffffff;
  DAT_1803faf00 = 0;
  DAT_1803fac79 = 0;
  _DAT_1803faf9c = 0;
  DAT_1803faf90 = 0;
  if (DAT_1803fcc50 != DAT_1803fcc58) {
    FUN_180218ad0();
    DAT_1803fcc58 = DAT_1803fcc50;
  }
  DAT_1803faf04 = 0;
  FUN_180036b00();
  DAT_1803faf08 = 0;
  DAT_1803faf28 = 0;
  DAT_1803fafe0 = 0;
  DAT_1803fafb0 = 0;
  DAT_1803fafb8 = 0;
  DAT_1803faec0 = 0;
  DAT_1803fb090 = 0;
  DAT_1803faf70 = 0;
  DAT_1803faff0 = 0;
  _DAT_1803fafe8 = 0;
  DAT_1803fb018 = 0;
  DAT_1803fb028 = 0;
  DAT_1803fb060 = 0;
  DAT_1803fafd0 = 0;
  DAT_1803fa807 = 0;
  DAT_1803faf50 = 0;
  DAT_1803fac78 = 0;
  DAT_1803db334 = 1;
  if (DAT_1803fb068 != DAT_1803fb070) {
    DAT_1803fb070 = DAT_1803fb068;
  }
  return;
}



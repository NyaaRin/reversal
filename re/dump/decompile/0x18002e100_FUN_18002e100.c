// 0x18002e100  FUN_18002e100
// size=292 thunk=false
// signature: undefined FUN_18002e100()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18002e100(void)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  if ((DAT_1803fa678 == (longlong *)0x0) ||
     (lVar3 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 8);
  }
  if (((DAT_1803faf50 != 0) && (lVar3 != 0)) && (DAT_1803faf50 != lVar3)) {
    FUN_18002df10(0,0);
  }
  if (DAT_1803fa807 != '\0') {
    return 1;
  }
  DVar2 = GetTickCount();
  if (((DAT_180426218 != lVar3) || (999 < DVar2 - _DAT_180425fb8)) &&
     (_DAT_180425fb8 = DVar2, DAT_180426218 = lVar3, cVar1 = FUN_18002e230(), cVar1 != '\0')) {
    DAT_1803fe9e8 = FUN_18002f460;
    DAT_1803fe548 = FUN_180030a70;
    DAT_1803fed38 = FUN_180030f20;
    DAT_1803fcf68 = FUN_180039180;
    DAT_180426150 = FUN_180038a00;
    DAT_1803fe398 = FUN_180034360;
    DAT_180426020 = FUN_18002ecc0;
    DAT_1804253e0 = FUN_18002efb0;
    DAT_180426010 = &LAB_18002fff0;
    DAT_1803fd0d0 = &LAB_180030010;
    return 1;
  }
  return 0;
}



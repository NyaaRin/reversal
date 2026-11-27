// 0x1801f6d80  FUN_1801f6d80
// size=385 thunk=false
// signature: undefined FUN_1801f6d80()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f6d80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    if (DAT_1803faf50 == param_1) {
      DAT_1803fe9e8 = 0;
      DAT_1803fe548 = 0;
      DAT_1803fed38 = 0;
      DAT_1803fcf68 = 0;
      _DAT_18042bce8 = 0;
      DAT_180426150 = 0;
      DAT_1803fe398 = 0;
      DAT_180426020 = 0;
      DAT_1804253e0 = 0;
      DAT_180426010 = 0;
      DAT_1803fd0d0 = 0;
      FUN_18002df10(1,param_1);
    }
    lVar4 = 0;
    if ((DAT_1803ff988 != 0) && (param_1 == DAT_1803ff988)) {
      lVar1 = FUN_180039770();
      lVar2 = lVar4;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == DAT_1803ff988)) {
        lVar2 = lVar1;
      }
      FUN_180039a50(lVar2);
    }
    lVar3 = FUN_180039770();
    lVar2 = DAT_1803eb3d0;
    lVar1 = DAT_1803eb3c8;
    if ((lVar3 == 0) || (*(longlong *)(lVar3 + 8) != param_1)) {
      lVar3 = lVar4;
    }
    for (; lVar4 = DAT_1803eb3d0, lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
      FUN_18002d8c0(lVar3,*(undefined4 *)(lVar1 + 0x34),param_3,param_4,lVar1);
    }
    lVar2 = DAT_1803eb3c8;
    if (DAT_1803eb3c8 != DAT_1803eb3d0) {
      for (; lVar2 != lVar4; lVar2 = lVar2 + 0x40) {
        FUN_18020e450(lVar2);
      }
      DAT_1803eb3d0 = DAT_1803eb3c8;
    }
    FUN_180023330(param_1);
    if (DAT_1803fa5e8 == param_1) {
      DAT_1803fa5e8 = 0;
    }
    FUN_1800ea2e0();
  }
  return;
}



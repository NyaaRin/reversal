// 0x1801122f0  FUN_1801122f0
// size=133 thunk=false
// signature: undefined FUN_1801122f0()
// status: ok


ulonglong FUN_1801122f0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (lVar3 == 0) {
    uVar5 = (ulonglong)DAT_1803812a4;
  }
  else {
    lVar3 = FUN_18001dbf0(lVar3);
    if (lVar3 == 0) {
      uVar5 = (ulonglong)DAT_1803812a4;
    }
    else {
      plVar4 = (longlong *)FUN_180076750(lVar3);
      if ((plVar4 != (longlong *)0x0) &&
         (uVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,lVar3), 0.0 < (float)uVar5)) {
        return uVar5;
      }
      uVar5 = (ulonglong)DAT_1803812a4;
    }
  }
  return uVar5;
}



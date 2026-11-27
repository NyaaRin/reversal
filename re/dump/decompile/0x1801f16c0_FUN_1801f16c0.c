// 0x1801f16c0  FUN_1801f16c0
// size=88 thunk=false
// signature: undefined FUN_1801f16c0()
// status: ok


undefined8 FUN_1801f16c0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  BOOL BVar3;
  void *lp;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lp = (void *)(*pcVar1)(DAT_1803fa360,uVar2);
  if ((lp != (void *)0x0) && (BVar3 = IsBadReadPtr(lp,8), BVar3 == 0)) {
    uVar4 = FUN_18001d350(lp);
    return uVar4;
  }
  return 0;
}



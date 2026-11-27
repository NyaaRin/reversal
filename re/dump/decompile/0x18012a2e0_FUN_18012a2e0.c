// 0x18012a2e0  FUN_18012a2e0
// size=88 thunk=false
// signature: undefined FUN_18012a2e0()
// status: ok


void FUN_18012a2e0(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((DAT_1803e7cf0 == 4) && (DAT_1803fa640 != (longlong *)0x0)) {
    iVar1 = DAT_180409884 + 1;
    bVar3 = DAT_180409884 == 0;
    DAT_180409884 = iVar1;
    if (bVar3) {
      DAT_18040989a = 0;
      lVar2 = (**(code **)(*DAT_1803fa640 + 0xa8))();
      DAT_1803e7ce8 = *(undefined1 *)(lVar2 + 0x49);
      DAT_18040989a = 1;
      *(undefined1 *)(lVar2 + 0x49) = 0;
    }
  }
  return;
}



// 0x180147650  FUN_180147650
// size=240 thunk=false
// signature: undefined FUN_180147650()
// status: ok


undefined8 * FUN_180147650(longlong param_1)

{
  void *lp;
  BOOL BVar1;
  longlong lVar2;
  undefined8 *lp_00;
  uint uVar3;
  char *pcVar5;
  ulonglong uVar4;
  
  if (DAT_1804009e0 == '\0') {
    DAT_1804009e0 = '\x01';
    lVar2 = FUN_1800b5800();
    uVar4 = 0;
    if (lVar2 != 0) {
      do {
        pcVar5 = (char *)(uVar4 + lVar2);
        if (((*pcVar5 == 'H') && (pcVar5[1] == -0x75)) && (pcVar5[2] == -0x75)) {
          lVar2 = (longlong)*(int *)(pcVar5 + 3);
          if (*(int *)(pcVar5 + 3) - 0x101U < 0xfeff) goto LAB_1801476c6;
          break;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < 0xc0);
    }
    lVar2 = DAT_1803fe4c8;
LAB_1801476c6:
    DAT_1803fe4c8 = lVar2;
    FUN_180014410("[Toolbox] AnimState ptrOff=+0x%zX valid=%d (from UpdateClientSideAnimation %p)\n"
                  ,DAT_1803fe4c8,DAT_1803fe4c8 != 0);
  }
  if ((param_1 == 0) || (DAT_1803fe4c8 == 0)) {
    lp_00 = (undefined8 *)0x0;
  }
  else {
    lp_00 = *(undefined8 **)(DAT_1803fe4c8 + param_1);
    if ((lp_00 == (undefined8 *)0x0) || (BVar1 = IsBadReadPtr(lp_00,0x150), BVar1 != 0)) {
      lp_00 = (undefined8 *)0x0;
    }
    else {
      lp = (void *)*lp_00;
      if ((lp == (void *)0x0) ||
         ((BVar1 = IsBadReadPtr(lp,0x40), BVar1 != 0 || (*(longlong *)((longlong)lp + 8) == 0)))) {
        lp_00 = (undefined8 *)0x0;
      }
    }
  }
  return lp_00;
}



// 0x18020dbc0  FUN_18020dbc0
// size=107 thunk=false
// signature: undefined FUN_18020dbc0()
// status: ok


ulonglong FUN_18020dbc0(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 0x800000000000000) {
    param_2 = param_2 * 0x20;
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 < 0x1000) {
      uVar3 = FUN_1802d8350(param_2);
      return uVar3;
    }
    if (param_2 < param_2 + 0x27) {
      lVar2 = FUN_1802d8350();
      lVar4 = lVar2;
      if (lVar2 == 0) {
        lVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
      }
      uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar4;
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



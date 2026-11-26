// 0x180238b60  FUN_180238b60
// size=135 thunk=false
// signature: undefined FUN_180238b60()
// status: ok


void FUN_180238b60(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 0x333333333333334) {
    param_2 = param_2 * 0x50;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else if (param_2 < 0x1000) {
      uVar3 = FUN_1802d8350(param_2);
    }
    else {
      if (param_2 + 0x27 <= param_2) goto LAB_180238be2;
      lVar2 = FUN_1802d8350();
      lVar4 = lVar2;
      if (lVar2 == 0) {
        lVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
      }
      uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar4;
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + param_2;
    return;
  }
LAB_180238be2:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



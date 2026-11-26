// 0x180240020  FUN_180240020
// size=134 thunk=false
// signature: undefined FUN_180240020()
// status: ok


void FUN_180240020(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 0x1000000000000000) {
    param_2 = param_2 * 0x10;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else if (param_2 < 0x1000) {
      uVar3 = FUN_1802d8350(param_2);
    }
    else {
      if (param_2 + 0x27 <= param_2) goto LAB_1802400a1;
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
LAB_1802400a1:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



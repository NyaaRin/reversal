// 0x18022c880  FUN_18022c880
// size=365 thunk=false
// signature: undefined FUN_18022c880()
// status: ok


void FUN_18022c880(ulonglong *param_1,ulonglong param_2)

{
  void *pvVar1;
  code *pcVar2;
  ulonglong uVar3;
  void *_Memory;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = *param_1;
  uVar5 = ((longlong)(param_1[2] - uVar7) >> 4) * -0x3333333333333333;
  uVar3 = 0x333333333333333 - (uVar5 >> 1);
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar5 + (uVar5 >> 1);
    if (uVar5 < param_2) {
      uVar5 = param_2;
    }
  }
  else {
    uVar5 = 0x333333333333333;
  }
  if (uVar7 == 0) {
LAB_18022c972:
    if (0x333333333333333 < uVar5) {
LAB_18022c9e9:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar7 = uVar5 * 0x50;
    if (uVar7 == 0) {
      uVar5 = 0;
      goto LAB_18022c9c4;
    }
    if (uVar7 < 0x1000) {
      uVar5 = FUN_1802d8350(uVar7);
      goto LAB_18022c9c4;
    }
    if (uVar7 + 0x27 <= uVar7) goto LAB_18022c9e9;
    lVar4 = FUN_1802d8350();
    lVar6 = lVar4;
    if (lVar4 == 0) goto LAB_18022c9a7;
  }
  else {
    uVar3 = param_1[1];
    for (; uVar7 != uVar3; uVar7 = uVar7 + 0x50) {
      FUN_18020e450(uVar7);
    }
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if (((ulonglong)(((longlong)(param_1[2] - (longlong)pvVar1) >> 4) << 4) < 0x1000) ||
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)) < 0x20)) {
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_18022c972;
    }
LAB_18022c9a7:
    lVar6 = 5;
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)();
  }
  uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar6;
LAB_18022c9c4:
  *param_1 = uVar5;
  param_1[1] = uVar5;
  param_1[2] = uVar5 + uVar7;
  return;
}



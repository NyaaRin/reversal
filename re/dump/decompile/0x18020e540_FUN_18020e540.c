// 0x18020e540  FUN_18020e540
// size=294 thunk=false
// signature: undefined FUN_18020e540()
// status: ok


undefined8 * FUN_18020e540(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar7 = auStack_38;
  *param_1 = 0;
  param_1[1] = 0;
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar4 = uVar1 | 7;
  if (uVar4 < 0x7fffffffffffffff) goto LAB_18020e5ee;
  uVar6 = 0xfffffffffffffffe;
  puVar7 = auStack_38;
  uVar4 = 0x7ffffffffffffffe;
  do {
    if (uVar6 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x18020e62d;
      _Dst = (void *)FUN_1802d8350();
      goto LAB_18020e62d;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_18020e662:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_18020e667;
      FUN_180012fe0();
    }
    *(undefined8 *)(puVar7 + -8) = 0x18020e5df;
    lVar5 = FUN_1802d8350(uVar6 + 0x27);
    if (lVar5 != 0) {
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
      goto LAB_18020e62d;
    }
    pcVar2 = (code *)swi(0x29);
    uVar4 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_18020e5ee:
    if (uVar4 < 10) {
      uVar4 = 10;
    }
    if (0x7fffffffffffffff < uVar4 + 1) goto LAB_18020e662;
    uVar6 = (uVar4 + 1) * 2;
    if (uVar6 == 0) {
LAB_18020e62d:
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      *(undefined8 *)(puVar7 + -8) = 0x18020e64b;
      memcpy(_Dst,param_2,uVar1 * 2 + 2);
      return param_1;
    }
  } while( true );
}



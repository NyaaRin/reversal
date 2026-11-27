// 0x18022a480  FUN_18022a480
// size=420 thunk=false
// signature: undefined FUN_18022a480()
// status: ok


void FUN_18022a480(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  size_t _Size;
  longlong lVar6;
  ulonglong uVar7;
  void *_Src;
  undefined1 *puVar8;
  void *unaff_RSI;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar8 = auStack_58;
  lVar3 = param_1[2];
  uVar9 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  _Src = (void *)(lVar3 + param_2);
  uVar4 = param_1[3];
  uVar7 = (ulonglong)_Src | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = uVar4 + (uVar4 >> 1);
    uVar9 = uVar7;
    if (uVar7 < uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffff < uVar9 + 1) goto LAB_18022a61a;
    uVar7 = (uVar9 + 1) * 2;
    if (uVar7 != 0) goto LAB_18022a517;
    unaff_RSI = (void *)0x0;
LAB_18022a554:
    param_1[3] = uVar9;
    _Size = lVar3 * 2;
    param_1[2] = _Src;
    puVar10 = (undefined2 *)(_Size + (longlong)unaff_RSI);
    if (uVar4 < 8) {
      memcpy(unaff_RSI,param_1,_Size);
      lVar6 = param_4;
      if (param_4 != 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined2 *)((longlong)unaff_RSI + (lVar3 + param_4) * 2) = 0;
      goto LAB_18022a5fa;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RSI,_Src,_Size);
    lVar6 = param_4;
    if (param_4 != 0) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)((longlong)unaff_RSI + (lVar3 + param_4) * 2) = 0;
    if (0xfff < uVar4 * 2 + 2) {
      puVar1 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar1));
      if (_Src < (void *)0x20) {
        free((void *)*puVar1);
        goto LAB_18022a5fa;
      }
      goto LAB_18022a5c7;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_18022a517:
    if (uVar7 < 0x1000) {
      unaff_RSI = (void *)FUN_1802d8350();
      goto LAB_18022a554;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_18022a61a:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar6 = FUN_1802d8350(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RSI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RSI - 8) = lVar6;
      goto LAB_18022a554;
    }
LAB_18022a5c7:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_50;
  }
  *(undefined8 *)(puVar8 + -8) = 0x18022a5d6;
  free(_Src);
LAB_18022a5fa:
  *param_1 = unaff_RSI;
  return;
}



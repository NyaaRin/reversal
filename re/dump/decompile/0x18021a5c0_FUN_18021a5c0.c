// 0x18021a5c0  FUN_18021a5c0
// size=490 thunk=false
// signature: undefined FUN_18021a5c0()
// status: ok


void FUN_18021a5c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t _Size;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  void *unaff_RSI;
  void *_Src;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar10 = auStack_58;
  lVar3 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (lVar3 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  _Src = (void *)(lVar3 + 1);
  uVar4 = param_1[3];
  uVar7 = (ulonglong)_Src | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = uVar4 + (uVar4 >> 1);
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18021a7a0;
    uVar7 = (uVar8 + 1) * 2;
    if (uVar7 != 0) goto LAB_18021a65d;
    unaff_RSI = (void *)0x0;
LAB_18021a69a:
    param_1[3] = uVar8;
    _Size = param_4 * 2;
    param_1[2] = _Src;
    puVar9 = (undefined2 *)(_Size + (longlong)unaff_RSI);
    if (uVar4 < 8) {
      memcpy(unaff_RSI,param_1,_Size);
      lVar6 = 1;
      do {
        *puVar9 = 0x27;
        puVar9 = puVar9 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      memcpy((void *)((longlong)unaff_RSI + (param_4 + 1) * 2),(void *)(_Size + (longlong)param_1),
             (lVar3 - param_4) * 2 + 2);
      goto LAB_18021a77b;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RSI,_Src,_Size);
    lVar6 = 1;
    do {
      *puVar9 = 0x27;
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    memcpy((void *)((longlong)unaff_RSI + (param_4 + 1) * 2),(void *)(_Size + (longlong)_Src),
           (lVar3 - param_4) * 2 + 2);
    if (0xfff < uVar4 * 2 + 2) {
      puVar1 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar1));
      if (_Src < (void *)0x20) {
        free((void *)*puVar1);
        goto LAB_18021a77b;
      }
      goto LAB_18021a728;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_18021a65d:
    if (uVar7 < 0x1000) {
      unaff_RSI = (void *)FUN_1802d8350();
      goto LAB_18021a69a;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_18021a7a0:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar6 = FUN_1802d8350(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RSI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RSI - 8) = lVar6;
      goto LAB_18021a69a;
    }
LAB_18021a728:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar10 = auStack_50;
  }
  *(undefined8 *)(puVar10 + -8) = 0x18021a737;
  free(_Src);
LAB_18021a77b:
  *param_1 = unaff_RSI;
  return;
}



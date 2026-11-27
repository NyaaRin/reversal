// 0x18021a2e0  FUN_18021a2e0
// size=349 thunk=false
// signature: undefined FUN_18021a2e0()
// status: ok


void FUN_18021a2e0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t _Size;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *_Src;
  undefined1 *puVar9;
  void *unaff_RSI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  lVar3 = param_1[2];
  _Src = (void *)0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar4 = param_1[3];
  pvVar7 = (void *)(lVar3 + param_2 | 7);
  if ((pvVar7 < (void *)0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    pvVar2 = (void *)(uVar4 + (uVar4 >> 1));
    _Src = pvVar7;
    if (pvVar7 < pvVar2) {
      _Src = pvVar2;
    }
    if (0x7fffffffffffffff < (longlong)_Src + 1U) goto LAB_18021a433;
    uVar8 = ((longlong)_Src + 1U) * 2;
    if (uVar8 != 0) goto LAB_18021a372;
    unaff_RSI = (void *)0x0;
LAB_18021a3ab:
    param_1[2] = lVar3 + param_2;
    _Size = lVar3 * 2 + 2;
    param_1[3] = _Src;
    if (uVar4 < 8) {
      memcpy(unaff_RSI,param_1,_Size);
      goto LAB_18021a415;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RSI,_Src,_Size);
    if (0xfff < uVar4 * 2 + 2) {
      puVar1 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar1));
      if (_Src < (void *)0x20) {
        free((void *)*puVar1);
        goto LAB_18021a415;
      }
      goto LAB_18021a3fc;
    }
  }
  else {
    uVar8 = 0xfffffffffffffffe;
LAB_18021a372:
    if (uVar8 < 0x1000) {
      unaff_RSI = (void *)FUN_1802d8350();
      goto LAB_18021a3ab;
    }
    if (uVar8 + 0x27 <= uVar8) {
LAB_18021a433:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar6 = FUN_1802d8350(uVar8 + 0x27);
    if (lVar6 != 0) {
      unaff_RSI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RSI - 8) = lVar6;
      goto LAB_18021a3ab;
    }
LAB_18021a3fc:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18021a40b;
  free(_Src);
LAB_18021a415:
  *param_1 = unaff_RSI;
  return;
}



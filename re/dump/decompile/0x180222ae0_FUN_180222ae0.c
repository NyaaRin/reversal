// 0x180222ae0  FUN_180222ae0
// size=417 thunk=false
// signature: undefined FUN_180222ae0()
// status: ok


undefined1 * FUN_180222ae0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 *_Dst;
  void *_Memory;
  ulonglong uVar6;
  undefined1 *_Dst_00;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  size_t _Size;
  undefined1 *puVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [80];
  
  puVar9 = auStack_88;
  lVar2 = *param_1;
  uVar8 = 0x7fffffffffffffff;
  if (param_1[1] - lVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = (param_1[1] - lVar2) + 1;
  uVar6 = param_1[2] - lVar2;
  uVar7 = uVar6 >> 1;
  if (uVar6 <= 0x7fffffffffffffff - uVar7) goto LAB_180222b51;
  uVar6 = 0x8000000000000026;
  puVar9 = auStack_88;
  do {
    *(undefined8 *)(puVar9 + -8) = 0x180222b45;
    lVar5 = FUN_1802d8350(uVar6);
    if (lVar5 != 0) {
      _Dst = (undefined1 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(_Dst + -8) = lVar5;
LAB_180222b99:
      puVar10 = _Dst + ((longlong)param_2 - lVar2);
      _Dst_00 = puVar10 + 1;
      *(longlong **)(puVar9 + 0x20) = param_1;
      *(undefined1 **)(puVar9 + 0x28) = _Dst;
      *(ulonglong *)(puVar9 + 0x30) = uVar8;
      *(undefined1 **)(puVar9 + 0x38) = _Dst_00;
      *(undefined1 **)(puVar9 + 0x40) = _Dst_00;
      *puVar10 = *param_3;
      *(undefined1 **)(puVar9 + 0x38) = puVar10;
      pvVar3 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar3;
        _Dst_00 = _Dst;
        param_2 = pvVar3;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x180222beb;
        memmove(_Dst,pvVar3,(longlong)param_2 - (longlong)pvVar3);
        *(undefined1 **)(puVar9 + 0x38) = _Dst;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x180222c02;
      memmove(_Dst_00,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x28) = 0;
      pvVar3 = (void *)*param_1;
      if (pvVar3 != (void *)0x0) {
        _Memory = pvVar3;
        if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar3)) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
          pcVar4 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar4)(5);
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x180222c49;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst;
      param_1[1] = (longlong)(_Dst + uVar1);
      param_1[2] = (longlong)(_Dst + uVar8);
      return puVar10;
    }
    uVar6 = 5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
    puVar9 = puVar9 + 8;
LAB_180222b51:
    uVar8 = uVar1;
    if (uVar1 <= uVar6 + uVar7) {
      uVar8 = uVar6 + uVar7;
    }
    if (uVar8 == 0) {
      _Dst = (undefined1 *)0x0;
      goto LAB_180222b99;
    }
    if (uVar8 < 0x1000) {
      *(undefined8 *)(puVar9 + -8) = 0x180222b96;
      _Dst = (undefined1 *)FUN_1802d8350(uVar8);
      goto LAB_180222b99;
    }
    uVar6 = uVar8 + 0x27;
    if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar9 + -8) = &UNK_180222c82;
      FUN_180012fe0();
    }
  } while( true );
}



// 0x1802281d0  FUN_1802281d0
// size=354 thunk=false
// signature: undefined FUN_1802281d0()
// status: ok


undefined1 * FUN_1802281d0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  longlong lVar4;
  undefined1 *_Dst;
  ulonglong uVar5;
  undefined1 *_Dst_00;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  size_t _Size;
  undefined1 *puVar9;
  undefined8 uStack_90;
  undefined1 auStack_88 [80];
  
  puVar8 = auStack_88;
  lVar2 = *param_1;
  uVar7 = 0x7fffffffffffffff;
  if (param_1[1] - lVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = (param_1[1] - lVar2) + 1;
  uVar5 = param_1[2] - lVar2;
  uVar6 = uVar5 >> 1;
  if (uVar5 <= 0x7fffffffffffffff - uVar6) goto LAB_180228241;
  uVar5 = 0x8000000000000026;
  puVar8 = auStack_88;
  do {
    *(undefined8 *)(puVar8 + -8) = 0x180228235;
    lVar4 = FUN_1802d8350(uVar5);
    if (lVar4 != 0) {
      _Dst = (undefined1 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(_Dst + -8) = lVar4;
LAB_180228289:
      puVar9 = _Dst + ((longlong)param_2 - lVar2);
      _Dst_00 = puVar9 + 1;
      *(longlong **)(puVar8 + 0x20) = param_1;
      *(undefined1 **)(puVar8 + 0x28) = _Dst;
      *(ulonglong *)(puVar8 + 0x30) = uVar7;
      *(undefined1 **)(puVar8 + 0x38) = _Dst_00;
      *(undefined1 **)(puVar8 + 0x40) = _Dst_00;
      *puVar9 = *param_3;
      *(undefined1 **)(puVar8 + 0x38) = puVar9;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst_00 = _Dst;
        param_2 = _Src;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x1802282db;
        memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
        *(undefined1 **)(puVar8 + 0x38) = _Dst;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x1802282f2;
      memmove(_Dst_00,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x18022830c;
      FUN_18022c3f0(param_1,_Dst,uVar1,uVar7);
      return puVar9;
    }
    uVar5 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar8 = puVar8 + 8;
LAB_180228241:
    uVar7 = uVar1;
    if (uVar1 <= uVar5 + uVar6) {
      uVar7 = uVar5 + uVar6;
    }
    if (uVar7 == 0) {
      _Dst = (undefined1 *)0x0;
      goto LAB_180228289;
    }
    if (uVar7 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x180228286;
      _Dst = (undefined1 *)FUN_1802d8350(uVar7);
      goto LAB_180228289;
    }
    uVar5 = uVar7 + 0x27;
    if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_180228333;
      FUN_180012fe0();
    }
  } while( true );
}



// 0x1802220f0  FUN_1802220f0
// size=484 thunk=false
// signature: undefined FUN_1802220f0()
// status: ok


undefined8 * FUN_1802220f0(undefined8 param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  void *pvVar5;
  longlong lVar6;
  undefined8 *_Dst_00;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  pvVar5 = DAT_1803fcf88;
  puVar7 = auStack_98;
  puVar8 = auStack_98;
  lVar6 = (longlong)DAT_1803fcf90 - (longlong)DAT_1803fcf88 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = (longlong)DAT_1803fcf98 - (longlong)DAT_1803fcf88 >> 3;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar1;
    if (uVar1 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x2000000000000000) {
      uVar4 = uVar9 * 8;
      if (uVar4 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar8 = auStack_98;
      }
      else if (uVar4 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1802222d0;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar7 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar6;
        puVar8 = puVar7;
      }
      puVar2 = _Dst_00 + ((longlong)param_2 - (longlong)pvVar5 >> 3);
      _Dst = puVar2 + 1;
      *(undefined8 ***)(puVar8 + 0x20) = &DAT_1803fcf88;
      *(undefined8 **)(puVar8 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      *(undefined8 **)(puVar8 + 0x38) = _Dst;
      *(undefined8 **)(puVar8 + 0x40) = _Dst;
      *puVar2 = *param_3;
      *(undefined8 **)(puVar8 + 0x38) = puVar2;
      if (param_2 == DAT_1803fcf90) {
        _Size = (longlong)DAT_1803fcf90 - (longlong)DAT_1803fcf88;
        _Dst = _Dst_00;
        param_2 = DAT_1803fcf88;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x180222222;
        memmove(_Dst_00,DAT_1803fcf88,(longlong)param_2 - (longlong)DAT_1803fcf88);
        *(undefined8 **)(puVar8 + 0x38) = _Dst_00;
        _Size = (longlong)DAT_1803fcf90 - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x18022223c;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      if (DAT_1803fcf88 != (void *)0x0) {
        pvVar5 = DAT_1803fcf88;
        if ((0xfff < (ulonglong)(((longlong)DAT_1803fcf98 - (longlong)DAT_1803fcf88 >> 3) * 8)) &&
           (pvVar5 = *(void **)((longlong)DAT_1803fcf88 + -8),
           0x1f < (ulonglong)((longlong)DAT_1803fcf88 + (-8 - (longlong)pvVar5)))) {
          pvVar5 = (void *)0x5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x180222299;
        free(pvVar5);
      }
      DAT_1803fcf88 = _Dst_00;
      DAT_1803fcf90 = _Dst_00 + uVar1;
      DAT_1803fcf98 = _Dst_00 + uVar9;
      return puVar2;
    }
  }
LAB_1802222d0:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



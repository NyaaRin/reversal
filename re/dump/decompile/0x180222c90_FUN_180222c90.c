// 0x180222c90  FUN_180222c90
// size=476 thunk=false
// signature: undefined FUN_180222c90()
// status: ok


undefined8 * FUN_180222c90(undefined8 param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  pvVar4 = DAT_1803ea278;
  puVar6 = auStack_98;
  puVar7 = auStack_98;
  lVar9 = (longlong)DAT_1803ea280 - (longlong)DAT_1803ea278 >> 4;
  if (lVar9 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = (longlong)DAT_1803ea288 - (longlong)DAT_1803ea278 >> 4;
  if (uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) {
    uVar10 = lVar9 + 1;
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar8 = uVar10;
    if (uVar10 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 < 0x1000000000000000) {
      uVar5 = uVar8 * 0x10;
      if (uVar5 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar7 = auStack_98;
      }
      else if (uVar5 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_180222e68;
        lVar9 = FUN_1802d8350();
        if (lVar9 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar9 = (*pcVar2)(5);
          puVar6 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar9;
        puVar7 = puVar6;
      }
      puVar1 = (undefined8 *)
               (((longlong)param_2 - (longlong)pvVar4 & 0xfffffffffffffff0U) + (longlong)_Dst_00);
      _Dst = puVar1 + 2;
      *(undefined8 ***)(puVar7 + 0x20) = &DAT_1803ea278;
      *(undefined8 **)(puVar7 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar7 + 0x30) = uVar8;
      *(undefined8 **)(puVar7 + 0x38) = _Dst;
      *(undefined8 **)(puVar7 + 0x40) = _Dst;
      uVar3 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar3;
      *(undefined8 **)(puVar7 + 0x38) = puVar1;
      if (param_2 == DAT_1803ea280) {
        _Size = (longlong)DAT_1803ea280 - (longlong)DAT_1803ea278;
        _Dst = _Dst_00;
        param_2 = DAT_1803ea278;
      }
      else {
        *(undefined8 *)(puVar7 + -8) = 0x180222dc2;
        memmove(_Dst_00,DAT_1803ea278,(longlong)param_2 - (longlong)DAT_1803ea278);
        *(undefined8 **)(puVar7 + 0x38) = _Dst_00;
        _Size = (longlong)DAT_1803ea280 - (longlong)param_2;
      }
      *(undefined8 *)(puVar7 + -8) = 0x180222ddc;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar7 + 0x28) = 0;
      if (DAT_1803ea278 != (void *)0x0) {
        pvVar4 = DAT_1803ea278;
        if ((0xfff < ((longlong)DAT_1803ea288 - (longlong)DAT_1803ea278 & 0xfffffffffffffff0U)) &&
           (pvVar4 = *(void **)((longlong)DAT_1803ea278 + -8),
           0x1f < (ulonglong)((longlong)DAT_1803ea278 + (-8 - (longlong)pvVar4)))) {
          pcVar2 = (code *)swi(0x29);
          pvVar4 = (void *)(*pcVar2)(5);
          puVar7 = puVar7 + 8;
        }
        *(undefined8 *)(puVar7 + -8) = 0x180222e2e;
        free(pvVar4);
      }
      DAT_1803ea278 = _Dst_00;
      DAT_1803ea280 = _Dst_00 + uVar10 * 2;
      DAT_1803ea288 = _Dst_00 + uVar8 * 2;
      return puVar1;
    }
  }
LAB_180222e68:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



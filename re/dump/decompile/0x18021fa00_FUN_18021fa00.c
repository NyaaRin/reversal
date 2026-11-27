// 0x18021fa00  FUN_18021fa00
// size=449 thunk=false
// signature: undefined FUN_18021fa00()
// status: ok


undefined8 * FUN_18021fa00(longlong *param_1,void *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  void *_Memory;
  ulonglong uVar6;
  undefined8 *_Dst;
  longlong lVar7;
  undefined8 *_Dst_00;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = param_1[2] - lVar3 >> 4;
  if (uVar6 <= 0xfffffffffffffff - (uVar6 >> 1)) {
    uVar1 = lVar7 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 < 0x1000000000000000) {
      uVar6 = uVar10 * 0x10;
      if (uVar6 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar9 = auStack_88;
      }
      else if (uVar6 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar6);
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_18021fbbd;
        lVar7 = FUN_1802d8350();
        if (lVar7 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar7 = (*pcVar5)(5);
          puVar8 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar7;
        puVar9 = puVar8;
      }
      puVar2 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xfffffffffffffff0U) + (longlong)_Dst_00)
      ;
      _Dst = puVar2 + 2;
      *(longlong **)(puVar9 + 0x20) = param_1;
      *(undefined8 **)(puVar9 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar9 + 0x30) = uVar10;
      *(undefined8 **)(puVar9 + 0x38) = _Dst;
      *(undefined8 **)(puVar9 + 0x40) = _Dst;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 **)(puVar9 + 0x38) = puVar2;
      pvVar4 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar4;
        _Dst = _Dst_00;
        param_2 = pvVar4;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x18021fb24;
        memmove(_Dst_00,pvVar4,(longlong)param_2 - (longlong)pvVar4);
        *(undefined8 **)(puVar9 + 0x38) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x18021fb3b;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x28) = 0;
      pvVar4 = (void *)*param_1;
      if (pvVar4 != (void *)0x0) {
        _Memory = pvVar4;
        if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xfffffffffffffff0U)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          pcVar5 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar5)(5);
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x18021fb86;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar1 * 2);
      param_1[2] = (longlong)(_Dst_00 + uVar10 * 2);
      return puVar2;
    }
  }
LAB_18021fbbd:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



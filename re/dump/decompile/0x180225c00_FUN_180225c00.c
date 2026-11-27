// 0x180225c00  FUN_180225c00
// size=459 thunk=false
// signature: undefined FUN_180225c00()
// status: ok


undefined8 * FUN_180225c00(longlong *param_1,void *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *_Memory;
  ulonglong uVar7;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  size_t _Size;
  ulonglong uVar12;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_68 = param_3;
  lVar2 = *param_1;
  lVar10 = param_1[1] - lVar2 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = param_1[2] - lVar2 >> 5;
  if (uVar7 <= 0x7ffffffffffffff - (uVar7 >> 1)) {
    uVar11 = lVar10 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar12 = uVar11;
    if (uVar11 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 < 0x800000000000000) {
      uVar7 = uVar12 * 0x20;
      if (uVar7 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar9 = auStack_88;
      }
      else if (uVar7 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar7);
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_180225dc7;
        lVar10 = FUN_1802d8350();
        if (lVar10 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar10 = (*pcVar5)(5);
          puVar8 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar10;
        puVar9 = puVar8;
      }
      puVar1 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)_Dst_00)
      ;
      _Dst = puVar1 + 4;
      *(longlong **)(puVar9 + 0x28) = param_1;
      *(undefined8 **)(puVar9 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar9 + 0x38) = uVar12;
      *(undefined8 **)(puVar9 + 0x40) = _Dst;
      *(undefined8 **)(puVar9 + 0x48) = _Dst;
      puVar3 = *(undefined8 **)(puVar9 + 0x20);
      uVar6 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar6;
      uVar6 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar6;
      *(undefined8 **)(puVar9 + 0x40) = puVar1;
      pvVar4 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar4;
        _Dst = _Dst_00;
        param_2 = pvVar4;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x180225d2e;
        memmove(_Dst_00,pvVar4,(longlong)param_2 - (longlong)pvVar4);
        *(undefined8 **)(puVar9 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x180225d45;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x30) = 0;
      pvVar4 = (void *)*param_1;
      if (pvVar4 != (void *)0x0) {
        _Memory = pvVar4;
        if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xffffffffffffffe0U)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          pcVar5 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar5)(5);
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x180225d90;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar11 * 4);
      param_1[2] = (longlong)(_Dst_00 + uVar12 * 4);
      return puVar1;
    }
  }
LAB_180225dc7:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



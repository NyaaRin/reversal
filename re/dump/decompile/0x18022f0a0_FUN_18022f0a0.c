// 0x18022f0a0  FUN_18022f0a0
// size=450 thunk=false
// signature: undefined FUN_18022f0a0()
// status: ok


undefined8 * FUN_18022f0a0(longlong *param_1,void *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *_Memory;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  size_t _Size;
  ulonglong uVar11;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar7 = auStack_88;
  puVar8 = auStack_88;
  local_68 = param_3;
  lVar2 = *param_1;
  lVar9 = param_1[1] - lVar2 >> 4;
  if (lVar9 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = param_1[2] - lVar2 >> 4;
  if (uVar6 <= 0xfffffffffffffff - (uVar6 >> 1)) {
    uVar10 = lVar9 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar11 = uVar10;
    if (uVar10 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 < 0x1000000000000000) {
      uVar6 = uVar11 * 0x10;
      if (uVar6 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar8 = auStack_88;
      }
      else if (uVar6 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar6);
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_18022f25e;
        lVar9 = FUN_1802d8350();
        if (lVar9 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar9 = (*pcVar4)(5);
          puVar7 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar9;
        puVar8 = puVar7;
      }
      puVar1 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xfffffffffffffff0U) + (longlong)_Dst_00)
      ;
      _Dst = puVar1 + 2;
      *(longlong **)(puVar8 + 0x28) = param_1;
      *(undefined8 **)(puVar8 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar8 + 0x38) = uVar11;
      *(undefined8 **)(puVar8 + 0x40) = _Dst;
      *(undefined8 **)(puVar8 + 0x48) = _Dst;
      uVar5 = (*(undefined8 **)(puVar8 + 0x20))[1];
      *puVar1 = **(undefined8 **)(puVar8 + 0x20);
      puVar1[1] = uVar5;
      *(undefined8 **)(puVar8 + 0x40) = puVar1;
      pvVar3 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar3;
        _Dst = _Dst_00;
        param_2 = pvVar3;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x18022f1c5;
        memmove(_Dst_00,pvVar3,(longlong)param_2 - (longlong)pvVar3);
        *(undefined8 **)(puVar8 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x18022f1dc;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x30) = 0;
      pvVar3 = (void *)*param_1;
      if (pvVar3 != (void *)0x0) {
        _Memory = pvVar3;
        if ((0xfff < (param_1[2] - (longlong)pvVar3 & 0xfffffffffffffff0U)) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
          pcVar4 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar4)(5);
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18022f227;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar10 * 2);
      param_1[2] = (longlong)(_Dst_00 + uVar11 * 2);
      return puVar1;
    }
  }
LAB_18022f25e:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



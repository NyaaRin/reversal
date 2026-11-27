// 0x18021fbd0  FUN_18021fbd0
// size=466 thunk=false
// signature: undefined FUN_18021fbd0()
// status: ok


undefined8 * FUN_18021fbd0(longlong *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  code *pcVar5;
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
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar7 = auStack_98;
  puVar8 = auStack_98;
  local_78 = param_4;
  local_70 = param_3;
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
        puVar8 = auStack_98;
      }
      else if (uVar6 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar6);
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_18021fd9e;
        lVar9 = FUN_1802d8350();
        if (lVar9 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar9 = (*pcVar5)(5);
          puVar7 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar9;
        puVar8 = puVar7;
      }
      puVar1 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xfffffffffffffff0U) + (longlong)_Dst_00)
      ;
      _Dst = puVar1 + 2;
      *(longlong **)(puVar8 + 0x30) = param_1;
      *(undefined8 **)(puVar8 + 0x38) = _Dst_00;
      *(ulonglong *)(puVar8 + 0x40) = uVar11;
      *(undefined8 **)(puVar8 + 0x48) = _Dst;
      *(undefined8 **)(puVar8 + 0x50) = _Dst;
      uVar3 = **(undefined8 **)(puVar8 + 0x20);
      *puVar1 = **(undefined8 **)(puVar8 + 0x28);
      puVar1[1] = uVar3;
      *(undefined8 **)(puVar8 + 0x48) = puVar1;
      pvVar4 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar4;
        _Dst = _Dst_00;
        param_2 = pvVar4;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x18021fd05;
        memmove(_Dst_00,pvVar4,(longlong)param_2 - (longlong)pvVar4);
        *(undefined8 **)(puVar8 + 0x48) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x18021fd1c;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x38) = 0;
      pvVar4 = (void *)*param_1;
      if (pvVar4 != (void *)0x0) {
        _Memory = pvVar4;
        if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xfffffffffffffff0U)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          pcVar5 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar5)(5);
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18021fd67;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar10 * 2);
      param_1[2] = (longlong)(_Dst_00 + uVar11 * 2);
      return puVar1;
    }
  }
LAB_18021fd9e:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



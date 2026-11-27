// 0x180263f60  FUN_180263f60
// size=496 thunk=false
// signature: undefined FUN_180263f60()
// status: ok


undefined8 * FUN_180263f60(longlong *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  void *_Memory;
  ulonglong uVar8;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  size_t _Size;
  ulonglong uVar13;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  local_78 = param_4;
  local_70 = param_3;
  lVar2 = *param_1;
  lVar11 = param_1[1] - lVar2 >> 5;
  if (lVar11 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar8 = param_1[2] - lVar2 >> 5;
  if (uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) {
    uVar12 = lVar11 + 1;
    uVar8 = uVar8 + (uVar8 >> 1);
    uVar13 = uVar12;
    if (uVar12 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 < 0x800000000000000) {
      uVar8 = uVar13 * 0x20;
      if (uVar8 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar10 = auStack_98;
      }
      else if (uVar8 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar8);
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto LAB_18026414c;
        lVar11 = FUN_1802d8350();
        if (lVar11 == 0) {
          pcVar7 = (code *)swi(0x29);
          lVar11 = (*pcVar7)(5);
          puVar9 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar11;
        puVar10 = puVar9;
      }
      puVar1 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)_Dst_00)
      ;
      _Dst = puVar1 + 4;
      *(longlong **)(puVar10 + 0x30) = param_1;
      *(undefined8 **)(puVar10 + 0x38) = _Dst_00;
      *(ulonglong *)(puVar10 + 0x40) = uVar13;
      *(undefined8 **)(puVar10 + 0x48) = _Dst;
      *(undefined8 **)(puVar10 + 0x50) = _Dst;
      uVar3 = **(undefined8 **)(puVar10 + 200);
      uVar4 = **(undefined8 **)(puVar10 + 0xc0);
      uVar5 = **(undefined8 **)(puVar10 + 0x20);
      *puVar1 = **(undefined8 **)(puVar10 + 0x28);
      puVar1[1] = uVar5;
      puVar1[2] = uVar4;
      puVar1[3] = uVar3;
      *(undefined8 **)(puVar10 + 0x48) = puVar1;
      pvVar6 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar6;
        _Dst = _Dst_00;
        param_2 = pvVar6;
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x1802640b3;
        memmove(_Dst_00,pvVar6,(longlong)param_2 - (longlong)pvVar6);
        *(undefined8 **)(puVar10 + 0x48) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar10 + -8) = 0x1802640ca;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar10 + 0x38) = 0;
      pvVar6 = (void *)*param_1;
      if (pvVar6 != (void *)0x0) {
        _Memory = pvVar6;
        if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xffffffffffffffe0U)) &&
           (_Memory = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)_Memory)))) {
          pcVar7 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar7)(5);
          puVar10 = puVar10 + 8;
        }
        *(undefined8 *)(puVar10 + -8) = 0x180264115;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar12 * 4);
      param_1[2] = (longlong)(_Dst_00 + uVar13 * 4);
      return puVar1;
    }
  }
LAB_18026414c:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



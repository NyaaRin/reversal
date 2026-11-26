// 0x180223f60  FUN_180223f60
// size=448 thunk=false
// signature: undefined FUN_180223f60()
// status: ok


undefined2 * FUN_180223f60(longlong *param_1,void *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined2 *_Dst;
  void *_Memory;
  longlong lVar7;
  undefined2 *_Dst_00;
  undefined1 *puVar8;
  undefined1 *puVar9;
  size_t _Size;
  ulonglong uVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_68 = param_3;
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 1;
  if (lVar7 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = param_1[2] - lVar3 >> 1;
  if (uVar6 <= 0x7fffffffffffffff - (uVar6 >> 1)) {
    uVar1 = lVar7 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 < 0x8000000000000000) {
      uVar6 = uVar10 * 2;
      if (uVar6 == 0) {
        _Dst_00 = (undefined2 *)0x0;
        puVar9 = auStack_88;
      }
      else if (uVar6 < 0x1000) {
        _Dst_00 = (undefined2 *)FUN_1802d8350(uVar6);
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_18022411c;
        lVar7 = FUN_1802d8350();
        if (lVar7 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar7 = (*pcVar5)(5);
          puVar8 = auStack_80;
        }
        _Dst_00 = (undefined2 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(_Dst_00 + -4) = lVar7;
        puVar9 = puVar8;
      }
      puVar2 = _Dst_00 + ((longlong)param_2 - lVar3 >> 1);
      _Dst = puVar2 + 1;
      *(longlong **)(puVar9 + 0x28) = param_1;
      *(undefined2 **)(puVar9 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar9 + 0x38) = uVar10;
      *(undefined2 **)(puVar9 + 0x40) = _Dst;
      *(undefined2 **)(puVar9 + 0x48) = _Dst;
      *puVar2 = **(undefined2 **)(puVar9 + 0x20);
      *(undefined2 **)(puVar9 + 0x40) = puVar2;
      pvVar4 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar4;
        _Dst = _Dst_00;
        param_2 = pvVar4;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x180224080;
        memmove(_Dst_00,pvVar4,(longlong)param_2 - (longlong)pvVar4);
        *(undefined2 **)(puVar9 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x180224097;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x30) = 0;
      pvVar4 = (void *)*param_1;
      if (pvVar4 != (void *)0x0) {
        _Memory = pvVar4;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar4 >> 1) * 2)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)();
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x1802240e8;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar1);
      param_1[2] = (longlong)(_Dst_00 + uVar10);
      return puVar2;
    }
  }
LAB_18022411c:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



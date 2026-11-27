// 0x180263910  FUN_180263910
// size=510 thunk=false
// signature: undefined FUN_180263910()
// status: ok


undefined2 * FUN_180263910(longlong *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Memory;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *_Dst;
  undefined2 *_Dst_00;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  size_t _Size;
  ulonglong uVar15;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar11 = auStack_98;
  puVar12 = auStack_98;
  local_78 = param_4;
  local_70 = param_3;
  lVar2 = *param_1;
  lVar13 = param_1[1] - lVar2 >> 6;
  uVar15 = 0x3ffffffffffffff;
  if (lVar13 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar14 = lVar13 + 1;
  uVar9 = param_1[2] - lVar2 >> 6;
  if (0x3ffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar9 = 0xffffffffffffffc0;
    uVar10 = 0xffffffffffffffe7;
  }
  else {
    uVar9 = uVar9 + (uVar9 >> 1);
    uVar15 = uVar14;
    if (uVar14 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x3ffffffffffffff < uVar15) {
LAB_180263b0a:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar9 = uVar15 * 0x40;
    if (uVar9 == 0) {
      _Dst_00 = (undefined2 *)0x0;
      puVar12 = auStack_98;
      goto LAB_1802639ee;
    }
    if (uVar9 < 0x1000) {
      _Dst_00 = (undefined2 *)FUN_1802d8350(uVar9);
      goto LAB_1802639ee;
    }
    uVar10 = uVar9 + 0x27;
    if (uVar10 <= uVar9) goto LAB_180263b0a;
  }
  lVar13 = FUN_1802d8350(uVar10);
  if (lVar13 == 0) {
    pcVar4 = (code *)swi(0x29);
    lVar13 = (*pcVar4)(5);
    puVar11 = auStack_90;
  }
  _Dst_00 = (undefined2 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(_Dst_00 + -4) = lVar13;
  puVar12 = puVar11;
LAB_1802639ee:
  puVar1 = (undefined2 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffc0U) + (longlong)_Dst_00);
  _Dst = puVar1 + 0x20;
  *(longlong **)(puVar12 + 0x30) = param_1;
  *(undefined2 **)(puVar12 + 0x38) = _Dst_00;
  *(ulonglong *)(puVar12 + 0x40) = uVar15;
  *(undefined2 **)(puVar12 + 0x48) = _Dst;
  *(undefined2 **)(puVar12 + 0x50) = _Dst;
  uVar5 = **(undefined8 **)(puVar12 + 0x20);
  uVar6 = (*(undefined8 **)(puVar12 + 0x20))[1];
  uVar7 = **(undefined8 **)(puVar12 + 0x28);
  uVar8 = (*(undefined8 **)(puVar12 + 0x28))[1];
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 4) = uVar7;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  puVar1[0xc] = 0;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x14) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  *(undefined2 **)(puVar12 + 0x48) = puVar1;
  pvVar3 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar3;
    _Dst = _Dst_00;
    param_2 = pvVar3;
  }
  else {
    *(undefined8 *)(puVar12 + -8) = 0x180263a71;
    memmove(_Dst_00,pvVar3,(longlong)param_2 - (longlong)pvVar3);
    *(undefined2 **)(puVar12 + 0x48) = _Dst_00;
    _Size = param_1[1] - (longlong)param_2;
  }
  *(undefined8 *)(puVar12 + -8) = 0x180263a88;
  memmove(_Dst,param_2,_Size);
  *(undefined8 *)(puVar12 + 0x38) = 0;
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    _Memory = pvVar3;
    if ((0xfff < (param_1[2] - (longlong)pvVar3 & 0xffffffffffffffc0U)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
      pcVar4 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar4)(5);
      puVar12 = puVar12 + 8;
    }
    *(undefined8 *)(puVar12 + -8) = 0x180263ad3;
    free(_Memory);
  }
  *param_1 = (longlong)_Dst_00;
  param_1[1] = (longlong)(_Dst_00 + uVar14 * 0x20);
  param_1[2] = uVar9 + (longlong)_Dst_00;
  return puVar1;
}



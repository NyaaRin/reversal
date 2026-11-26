// 0x1802636e0  FUN_1802636e0
// size=553 thunk=false
// signature: undefined FUN_1802636e0()
// status: ok


undefined2 * FUN_1802636e0(longlong *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *_Memory;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *_Dst;
  undefined2 *_Dst_00;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  size_t _Size;
  ulonglong uVar18;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar14 = auStack_98;
  puVar15 = auStack_98;
  local_78 = param_4;
  local_70 = param_3;
  lVar4 = *param_1;
  lVar16 = param_1[1] - lVar4 >> 6;
  uVar18 = 0x3ffffffffffffff;
  if (lVar16 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar17 = lVar16 + 1;
  uVar12 = param_1[2] - lVar4 >> 6;
  if (0x3ffffffffffffff - (uVar12 >> 1) < uVar12) {
    uVar12 = 0xffffffffffffffc0;
    uVar13 = 0xffffffffffffffe7;
  }
  else {
    uVar12 = uVar12 + (uVar12 >> 1);
    uVar18 = uVar17;
    if (uVar17 <= uVar12) {
      uVar18 = uVar12;
    }
    if (0x3ffffffffffffff < uVar18) {
LAB_180263905:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar12 = uVar18 * 0x40;
    if (uVar12 == 0) {
      _Dst_00 = (undefined2 *)0x0;
      puVar15 = auStack_98;
      goto LAB_1802637be;
    }
    if (uVar12 < 0x1000) {
      _Dst_00 = (undefined2 *)FUN_1802d8350(uVar12);
      goto LAB_1802637be;
    }
    uVar13 = uVar12 + 0x27;
    if (uVar13 <= uVar12) goto LAB_180263905;
  }
  lVar16 = FUN_1802d8350(uVar13);
  if (lVar16 == 0) {
    pcVar7 = (code *)swi(0x29);
    lVar16 = (*pcVar7)(5);
    puVar14 = auStack_90;
  }
  _Dst_00 = (undefined2 *)(lVar16 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(_Dst_00 + -4) = lVar16;
  puVar15 = puVar14;
LAB_1802637be:
  puVar1 = (undefined2 *)(((longlong)param_2 - lVar4 & 0xffffffffffffffc0U) + (longlong)_Dst_00);
  _Dst = puVar1 + 0x20;
  *(longlong **)(puVar15 + 0x30) = param_1;
  *(undefined2 **)(puVar15 + 0x38) = _Dst_00;
  *(ulonglong *)(puVar15 + 0x40) = uVar18;
  *(undefined2 **)(puVar15 + 0x48) = _Dst;
  *(undefined2 **)(puVar15 + 0x50) = _Dst;
  uVar8 = **(undefined8 **)(puVar15 + 200);
  uVar9 = (*(undefined8 **)(puVar15 + 200))[1];
  uVar10 = **(undefined8 **)(puVar15 + 0x20);
  uVar11 = (*(undefined8 **)(puVar15 + 0x20))[1];
  uVar2 = **(undefined1 **)(puVar15 + 0xd8);
  uVar5 = **(undefined8 **)(puVar15 + 0xd0);
  uVar3 = **(undefined2 **)(puVar15 + 0xc0);
  *puVar1 = **(undefined2 **)(puVar15 + 0x28);
  *(undefined8 *)(puVar1 + 4) = uVar10;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  puVar1[0xc] = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x14) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  *(undefined1 *)(puVar1 + 0x1c) = uVar2;
  *(undefined2 **)(puVar15 + 0x48) = puVar1;
  pvVar6 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar6;
    _Dst = _Dst_00;
    param_2 = pvVar6;
  }
  else {
    *(undefined8 *)(puVar15 + -8) = 0x18026386c;
    memmove(_Dst_00,pvVar6,(longlong)param_2 - (longlong)pvVar6);
    *(undefined2 **)(puVar15 + 0x48) = _Dst_00;
    _Size = param_1[1] - (longlong)param_2;
  }
  *(undefined8 *)(puVar15 + -8) = 0x180263883;
  memmove(_Dst,param_2,_Size);
  *(undefined8 *)(puVar15 + 0x38) = 0;
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    _Memory = pvVar6;
    if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xffffffffffffffc0U)) &&
       (_Memory = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)_Memory)))) {
      pcVar7 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar7)(5);
      puVar15 = puVar15 + 8;
    }
    *(undefined8 *)(puVar15 + -8) = 0x1802638ce;
    free(_Memory);
  }
  *param_1 = (longlong)_Dst_00;
  param_1[1] = (longlong)(_Dst_00 + uVar17 * 0x20);
  param_1[2] = uVar12 + (longlong)_Dst_00;
  return puVar1;
}



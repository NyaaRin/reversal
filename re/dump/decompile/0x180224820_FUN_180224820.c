// 0x180224820  FUN_180224820
// size=543 thunk=false
// signature: undefined FUN_180224820()
// status: ok


undefined8 * FUN_180224820(longlong *param_1,void *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *_Dst;
  void *_Memory;
  longlong lVar9;
  undefined8 *_Dst_00;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  size_t _Size;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar10 = auStack_88;
  puVar11 = auStack_88;
  local_68 = param_3;
  lVar2 = *param_1;
  lVar9 = (param_1[1] - lVar2 >> 3) * -0x5555555555555555;
  if (lVar9 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar8 = (param_1[2] - lVar2 >> 3) * -0x5555555555555555;
  uVar7 = 0xaaaaaaaaaaaaaaa - (uVar8 >> 1);
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar7 = lVar9 + 1;
    uVar8 = uVar8 + (uVar8 >> 1);
    uVar12 = uVar7;
    if (uVar7 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 < 0xaaaaaaaaaaaaaab) {
      uVar8 = uVar12 * 0x18;
      if (uVar8 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar11 = auStack_88;
      }
      else if (uVar8 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar8);
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto LAB_180224a3b;
        lVar9 = FUN_1802d8350();
        if (lVar9 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar9 = (*pcVar5)(5);
          puVar10 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar9;
        puVar11 = puVar10;
      }
      puVar1 = _Dst_00 + (((longlong)param_2 - lVar2) / 0x18) * 3;
      _Dst = puVar1 + 3;
      *(longlong **)(puVar11 + 0x28) = param_1;
      *(undefined8 **)(puVar11 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar11 + 0x38) = uVar12;
      *(undefined8 **)(puVar11 + 0x40) = _Dst;
      *(undefined8 **)(puVar11 + 0x48) = _Dst;
      puVar3 = *(undefined8 **)(puVar11 + 0x20);
      uVar6 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar6;
      puVar1[2] = puVar3[2];
      *(undefined8 **)(puVar11 + 0x40) = puVar1;
      pvVar4 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar4;
        _Dst = _Dst_00;
        param_2 = pvVar4;
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x180224984;
        memmove(_Dst_00,pvVar4,(longlong)param_2 - (longlong)pvVar4);
        *(undefined8 **)(puVar11 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar11 + -8) = 0x18022499b;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar11 + 0x30) = 0;
      pvVar4 = (void *)*param_1;
      if (pvVar4 != (void *)0x0) {
        _Memory = pvVar4;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar4 >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)();
          puVar11 = puVar11 + 8;
        }
        *(undefined8 *)(puVar11 + -8) = 0x180224a03;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar7 * 3);
      param_1[2] = (longlong)(_Dst_00 + uVar12 * 3);
      return puVar1;
    }
  }
LAB_180224a3b:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



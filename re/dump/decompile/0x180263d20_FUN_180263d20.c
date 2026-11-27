// 0x180263d20  FUN_180263d20
// size=566 thunk=false
// signature: undefined FUN_180263d20()
// status: ok


undefined8 * FUN_180263d20(longlong *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *_Dst;
  void *_Memory;
  longlong lVar8;
  undefined8 *_Dst_00;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  size_t _Size;
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
  lVar8 = (param_1[1] - lVar2 >> 3) * -0x5555555555555555;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (param_1[2] - lVar2 >> 3) * -0x5555555555555555;
  uVar6 = 0xaaaaaaaaaaaaaaa - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    uVar6 = lVar8 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar11 = uVar6;
    if (uVar6 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 < 0xaaaaaaaaaaaaaab) {
      uVar7 = uVar11 * 0x18;
      if (uVar7 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar10 = auStack_98;
      }
      else if (uVar7 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar7);
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_180263f52;
        lVar8 = FUN_1802d8350();
        if (lVar8 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar8 = (*pcVar5)(5);
          puVar9 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar8;
        puVar10 = puVar9;
      }
      puVar1 = _Dst_00 + (((longlong)param_2 - lVar2) / 0x18) * 3;
      _Dst = puVar1 + 3;
      *(longlong **)(puVar10 + 0x30) = param_1;
      *(undefined8 **)(puVar10 + 0x38) = _Dst_00;
      *(ulonglong *)(puVar10 + 0x40) = uVar11;
      *(undefined8 **)(puVar10 + 0x48) = _Dst;
      *(undefined8 **)(puVar10 + 0x50) = _Dst;
      uVar3 = **(undefined8 **)(puVar10 + 0x20);
      *puVar1 = **(undefined8 **)(puVar10 + 0x28);
      puVar1[1] = uVar3;
      *(undefined1 *)(puVar1 + 2) = **(undefined1 **)(puVar10 + 0xc0);
      *(undefined8 **)(puVar10 + 0x48) = puVar1;
      pvVar4 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar4;
        _Dst = _Dst_00;
        param_2 = pvVar4;
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x180263e9b;
        memmove(_Dst_00,pvVar4,(longlong)param_2 - (longlong)pvVar4);
        *(undefined8 **)(puVar10 + 0x48) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar10 + -8) = 0x180263eb2;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar10 + 0x38) = 0;
      pvVar4 = (void *)*param_1;
      if (pvVar4 != (void *)0x0) {
        _Memory = pvVar4;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar4 >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)();
          puVar10 = puVar10 + 8;
        }
        *(undefined8 *)(puVar10 + -8) = 0x180263f1a;
        free(_Memory);
      }
      *param_1 = (longlong)_Dst_00;
      param_1[1] = (longlong)(_Dst_00 + uVar6 * 3);
      param_1[2] = (longlong)(_Dst_00 + uVar11 * 3);
      return puVar1;
    }
  }
LAB_180263f52:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



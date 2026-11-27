// 0x180225500  FUN_180225500
// size=569 thunk=false
// signature: undefined FUN_180225500()
// status: ok


undefined8 * FUN_180225500(undefined8 param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *_Dst;
  void *pvVar6;
  longlong lVar7;
  undefined8 *_Dst_00;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  pvVar6 = DAT_1803ea290;
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  lVar7 = ((longlong)DAT_1803ea298 - (longlong)DAT_1803ea290 >> 3) * -0x5555555555555555;
  if (lVar7 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = ((longlong)DAT_1803ea2a0 - (longlong)DAT_1803ea290 >> 3) * -0x5555555555555555;
  uVar4 = 0xaaaaaaaaaaaaaaa - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar4 = lVar7 + 1;
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar4;
    if (uVar4 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      uVar5 = uVar10 * 0x18;
      if (uVar5 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar9 = auStack_98;
      }
      else if (uVar5 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_180225735;
        lVar7 = FUN_1802d8350();
        if (lVar7 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar7 = (*pcVar2)(5);
          puVar8 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar7;
        puVar9 = puVar8;
      }
      puVar1 = _Dst_00 + (((longlong)param_2 - (longlong)pvVar6) / 0x18) * 3;
      _Dst = puVar1 + 3;
      *(undefined8 ***)(puVar9 + 0x20) = &DAT_1803ea290;
      *(undefined8 **)(puVar9 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar9 + 0x30) = uVar10;
      *(undefined8 **)(puVar9 + 0x38) = _Dst;
      *(undefined8 **)(puVar9 + 0x40) = _Dst;
      uVar3 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar3;
      puVar1[2] = param_3[2];
      *(undefined8 **)(puVar9 + 0x38) = puVar1;
      if (param_2 == DAT_1803ea298) {
        _Size = (longlong)DAT_1803ea298 - (longlong)DAT_1803ea290;
        _Dst = _Dst_00;
        param_2 = DAT_1803ea290;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x180225671;
        memmove(_Dst_00,DAT_1803ea290,(longlong)param_2 - (longlong)DAT_1803ea290);
        *(undefined8 **)(puVar9 + 0x38) = _Dst_00;
        _Size = (longlong)DAT_1803ea298 - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x18022568b;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x28) = 0;
      if (DAT_1803ea290 != (void *)0x0) {
        pvVar6 = DAT_1803ea290;
        if ((0xfff < (ulonglong)(((longlong)DAT_1803ea2a0 - (longlong)DAT_1803ea290 >> 3) * 8)) &&
           (pvVar6 = *(void **)((longlong)DAT_1803ea290 + -8),
           0x1f < (ulonglong)((longlong)DAT_1803ea290 + (-8 - (longlong)pvVar6)))) {
          pvVar6 = (void *)0x5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x1802256fa;
        free(pvVar6);
      }
      DAT_1803ea290 = _Dst_00;
      DAT_1803ea298 = _Dst_00 + uVar4 * 3;
      DAT_1803ea2a0 = _Dst_00 + uVar10 * 3;
      return puVar1;
    }
  }
LAB_180225735:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



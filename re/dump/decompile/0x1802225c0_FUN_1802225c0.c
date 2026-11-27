// 0x1802225c0  FUN_1802225c0
// size=571 thunk=false
// signature: undefined FUN_1802225c0()
// status: ok


undefined8 * FUN_1802225c0(undefined8 param_1,void *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  void *pvVar5;
  longlong lVar6;
  undefined8 *_Dst_00;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined8 *puVar10;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  pvVar5 = DAT_1803edce0;
  puVar7 = auStack_98;
  puVar8 = auStack_98;
  lVar6 = ((longlong)DAT_1803edce8 - (longlong)DAT_1803edce0 >> 3) * 0x6db6db6db6db6db7;
  if (lVar6 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = ((longlong)DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 0x6db6db6db6db6db7;
  uVar3 = 0x492492492492492 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar3;
    if (uVar3 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x492492492492493) {
      uVar4 = uVar9 * 0x38;
      if (uVar4 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar8 = auStack_98;
      }
      else if (uVar4 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1802227f7;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar6 = (*pcVar1)(5);
          puVar7 = auStack_90;
        }
        _Dst_00 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar6;
        puVar8 = puVar7;
      }
      puVar10 = _Dst_00 + (((longlong)param_2 - (longlong)pvVar5) / 0x38) * 7;
      _Dst = puVar10 + 7;
      *(undefined8 ***)(puVar8 + 0x20) = &DAT_1803edce0;
      *(undefined8 **)(puVar8 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      *(undefined8 **)(puVar8 + 0x38) = _Dst;
      *(undefined8 **)(puVar8 + 0x40) = _Dst;
      uVar2 = param_3[1];
      *puVar10 = *param_3;
      puVar10[1] = uVar2;
      uVar2 = param_3[3];
      puVar10[2] = param_3[2];
      puVar10[3] = uVar2;
      uVar2 = param_3[5];
      puVar10[4] = param_3[4];
      puVar10[5] = uVar2;
      puVar10[6] = param_3[6];
      *(undefined8 **)(puVar8 + 0x38) = puVar10;
      if (param_2 == DAT_1803edce8) {
        _Size = (longlong)DAT_1803edce8 - (longlong)DAT_1803edce0;
        _Dst = _Dst_00;
        param_2 = DAT_1803edce0;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x18022273c;
        memmove(_Dst_00,DAT_1803edce0,(longlong)param_2 - (longlong)DAT_1803edce0);
        *(undefined8 **)(puVar8 + 0x38) = _Dst_00;
        _Size = (longlong)DAT_1803edce8 - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x180222756;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      if (DAT_1803edce0 != (void *)0x0) {
        pvVar5 = DAT_1803edce0;
        if ((0xfff < (ulonglong)(((longlong)DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 8)) &&
           (pvVar5 = *(void **)((longlong)DAT_1803edce0 + -8),
           0x1f < (ulonglong)((longlong)DAT_1803edce0 + (-8 - (longlong)pvVar5)))) {
          pvVar5 = (void *)0x5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1802227bd;
        free(pvVar5);
      }
      DAT_1803edce0 = _Dst_00;
      DAT_1803edce8 = _Dst_00 + uVar3 * 7;
      DAT_1803edcf0 = _Dst_00 + uVar9 * 7;
      return puVar10;
    }
  }
LAB_1802227f7:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



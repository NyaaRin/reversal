// 0x180229d20  FUN_180229d20
// size=375 thunk=false
// signature: undefined FUN_180229d20()
// status: ok


undefined4 * FUN_180229d20(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 *_Dst;
  longlong lVar6;
  undefined4 *_Dst_00;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar7 = auStack_88;
  puVar8 = auStack_88;
  lVar3 = *param_1;
  lVar6 = param_1[1] - lVar3 >> 2;
  if (lVar6 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = param_1[2] - lVar3 >> 2;
  if (uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 < 0x4000000000000000) {
      uVar5 = uVar9 * 4;
      if (uVar5 == 0) {
        _Dst_00 = (undefined4 *)0x0;
        puVar8 = auStack_88;
      }
      else if (uVar5 < 0x1000) {
        _Dst_00 = (undefined4 *)FUN_1802d8350();
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_180229e93;
        lVar6 = FUN_1802d8350(uVar5 + 0x27);
        if (lVar6 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar6 = (*pcVar4)(5);
          puVar7 = auStack_80;
        }
        _Dst_00 = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(_Dst_00 + -2) = lVar6;
        puVar8 = puVar7;
      }
      puVar2 = _Dst_00 + ((longlong)param_2 - lVar3 >> 2);
      _Dst = puVar2 + 1;
      *(longlong **)(puVar8 + 0x20) = param_1;
      *(undefined4 **)(puVar8 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      *(undefined4 **)(puVar8 + 0x38) = _Dst;
      *(undefined4 **)(puVar8 + 0x40) = _Dst;
      *puVar2 = *param_3;
      *(undefined4 **)(puVar8 + 0x38) = puVar2;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst = _Dst_00;
        param_2 = _Src;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x180229e40;
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        *(undefined4 **)(puVar8 + 0x38) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x180229e57;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x180229e71;
      FUN_180239a50(param_1,_Dst_00,uVar1,uVar9);
      return puVar2;
    }
  }
LAB_180229e93:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



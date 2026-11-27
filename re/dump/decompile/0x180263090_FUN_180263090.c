// 0x180263090  FUN_180263090
// size=445 thunk=false
// signature: undefined FUN_180263090()
// status: ok


undefined8 * FUN_180263090(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  longlong lVar7;
  undefined8 *_Dst_00;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined8 *puVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  lVar1 = *param_1;
  lVar7 = (param_1[1] - lVar1 >> 4) * -0x5555555555555555;
  if (lVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = (param_1[2] - lVar1 >> 4) * -0x5555555555555555;
  uVar5 = 0x555555555555555 - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar5 = lVar7 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar10 = uVar5;
    if (uVar5 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 < 0x555555555555556) {
      uVar6 = uVar10 * 0x30;
      if (uVar6 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar9 = auStack_88;
      }
      else if (uVar6 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350();
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_180263249;
        lVar7 = FUN_1802d8350(uVar6 + 0x27);
        if (lVar7 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar7 = (*pcVar2)(5);
          puVar8 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar7;
        puVar9 = puVar8;
      }
      puVar11 = _Dst_00 + (((longlong)param_2 - lVar1) / 0x30) * 6;
      _Dst = puVar11 + 6;
      *(longlong **)(puVar9 + 0x20) = param_1;
      *(undefined8 **)(puVar9 + 0x28) = _Dst_00;
      *(ulonglong *)(puVar9 + 0x30) = uVar10;
      *(undefined8 **)(puVar9 + 0x38) = _Dst;
      *(undefined8 **)(puVar9 + 0x40) = _Dst;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *puVar11 = uVar3;
      puVar11[1] = uVar4;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      *(undefined2 *)(puVar11 + 4) = 0x100;
      *(undefined1 *)((longlong)puVar11 + 0x22) = 1;
      puVar11[5] = 0;
      *(undefined8 **)(puVar9 + 0x38) = puVar11;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst = _Dst_00;
        param_2 = _Src;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x1802631fa;
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        *(undefined8 **)(puVar9 + 0x38) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x180263211;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x28) = 0;
      *(undefined8 *)(puVar9 + -8) = 0x180263227;
      FUN_1802665e0(param_1,_Dst_00,uVar5,uVar10);
      return puVar11;
    }
  }
LAB_180263249:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



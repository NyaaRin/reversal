// 0x180264160  FUN_180264160
// size=456 thunk=false
// signature: undefined FUN_180264160()
// status: ok


undefined8 * FUN_180264160(longlong *param_1,void *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Src;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  longlong lVar7;
  undefined8 *_Dst_00;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_68 = param_3;
  lVar2 = *param_1;
  lVar7 = (param_1[1] - lVar2 >> 3) * -0x5555555555555555;
  if (lVar7 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = (param_1[2] - lVar2 >> 3) * -0x5555555555555555;
  uVar5 = 0xaaaaaaaaaaaaaaa - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar5 = lVar7 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar10 = uVar5;
    if (uVar5 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      uVar6 = uVar10 * 0x18;
      if (uVar6 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar9 = auStack_88;
      }
      else if (uVar6 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350();
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_180264324;
        lVar7 = FUN_1802d8350(uVar6 + 0x27);
        if (lVar7 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar7 = (*pcVar4)(5);
          puVar8 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar7;
        puVar9 = puVar8;
      }
      puVar1 = _Dst_00 + (((longlong)param_2 - lVar2) / 0x18) * 3;
      _Dst = puVar1 + 3;
      *(longlong **)(puVar9 + 0x28) = param_1;
      *(undefined8 **)(puVar9 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar9 + 0x38) = uVar10;
      *(undefined8 **)(puVar9 + 0x40) = _Dst;
      *(undefined8 **)(puVar9 + 0x48) = _Dst;
      uVar3 = **(undefined8 **)(puVar9 + 0xb0);
      *puVar1 = **(undefined8 **)(puVar9 + 0x20);
      puVar1[1] = *param_4;
      puVar1[2] = uVar3;
      *(undefined8 **)(puVar9 + 0x40) = puVar1;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst = _Dst_00;
        param_2 = _Src;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x1802642d1;
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        *(undefined8 **)(puVar9 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x1802642e8;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar9 + 0x30) = 0;
      *(undefined8 *)(puVar9 + -8) = 0x180264302;
      FUN_180266240(param_1,_Dst_00,uVar5,uVar10);
      return puVar1;
    }
  }
LAB_180264324:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



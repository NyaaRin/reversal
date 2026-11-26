// 0x180264330  FUN_180264330
// size=456 thunk=false
// signature: undefined FUN_180264330()
// status: ok


undefined8 * FUN_180264330(longlong *param_1,void *param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Src;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *_Dst;
  longlong lVar8;
  undefined8 *_Dst_00;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  size_t _Size;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  local_68 = param_3;
  lVar3 = *param_1;
  lVar8 = (param_1[1] - lVar3 >> 3) * -0x5555555555555555;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (param_1[2] - lVar3 >> 3) * -0x5555555555555555;
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
        puVar10 = auStack_88;
      }
      else if (uVar7 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_1802644f4;
        lVar8 = FUN_1802d8350(uVar7 + 0x27);
        if (lVar8 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar8 = (*pcVar5)(5);
          puVar9 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar8;
        puVar10 = puVar9;
      }
      puVar1 = _Dst_00 + (((longlong)param_2 - lVar3) / 0x18) * 3;
      _Dst = puVar1 + 3;
      *(longlong **)(puVar10 + 0x28) = param_1;
      *(undefined8 **)(puVar10 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar10 + 0x38) = uVar11;
      *(undefined8 **)(puVar10 + 0x40) = _Dst;
      *(undefined8 **)(puVar10 + 0x48) = _Dst;
      uVar4 = **(undefined8 **)(puVar10 + 0xb0);
      iVar2 = *param_4;
      *puVar1 = **(undefined8 **)(puVar10 + 0x20);
      puVar1[1] = (longlong)iVar2;
      puVar1[2] = uVar4;
      *(undefined8 **)(puVar10 + 0x40) = puVar1;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst = _Dst_00;
        param_2 = _Src;
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x1802644a1;
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        *(undefined8 **)(puVar10 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar10 + -8) = 0x1802644b8;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar10 + 0x30) = 0;
      *(undefined8 *)(puVar10 + -8) = 0x1802644d2;
      FUN_180266240(param_1,_Dst_00,uVar6,uVar11);
      return puVar1;
    }
  }
LAB_1802644f4:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}



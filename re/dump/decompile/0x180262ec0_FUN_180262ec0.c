// 0x180262ec0  FUN_180262ec0
// size=458 thunk=false
// signature: undefined FUN_180262ec0()
// status: ok


undefined8 * FUN_180262ec0(longlong *param_1,void *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  void *_Src;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *_Dst;
  longlong lVar8;
  undefined8 *_Dst_00;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  size_t _Size;
  undefined8 *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  local_68 = param_3;
  lVar1 = *param_1;
  lVar8 = (param_1[1] - lVar1 >> 4) * -0x5555555555555555;
  if (lVar8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (param_1[2] - lVar1 >> 4) * -0x5555555555555555;
  uVar6 = 0x555555555555555 - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    uVar6 = lVar8 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar11 = uVar6;
    if (uVar6 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 < 0x555555555555556) {
      uVar7 = uVar11 * 0x30;
      if (uVar7 == 0) {
        _Dst_00 = (undefined8 *)0x0;
        puVar10 = auStack_88;
      }
      else if (uVar7 < 0x1000) {
        _Dst_00 = (undefined8 *)FUN_1802d8350();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_180263086;
        lVar8 = FUN_1802d8350(uVar7 + 0x27);
        if (lVar8 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar8 = (*pcVar2)(5);
          puVar9 = auStack_80;
        }
        _Dst_00 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
        _Dst_00[-1] = lVar8;
        puVar10 = puVar9;
      }
      puVar12 = _Dst_00 + (((longlong)param_2 - lVar1) / 0x30) * 6;
      _Dst = puVar12 + 6;
      *(longlong **)(puVar10 + 0x28) = param_1;
      *(undefined8 **)(puVar10 + 0x30) = _Dst_00;
      *(ulonglong *)(puVar10 + 0x38) = uVar11;
      *(undefined8 **)(puVar10 + 0x40) = _Dst;
      *(undefined8 **)(puVar10 + 0x48) = _Dst;
      uVar3 = *param_4;
      uVar4 = param_4[1];
      uVar5 = (*(undefined8 **)(puVar10 + 0x20))[1];
      *puVar12 = **(undefined8 **)(puVar10 + 0x20);
      puVar12[1] = uVar5;
      puVar12[2] = uVar3;
      puVar12[3] = uVar4;
      *(undefined2 *)(puVar12 + 4) = 0x100;
      *(undefined1 *)((longlong)puVar12 + 0x22) = 1;
      puVar12[5] = 0;
      *(undefined8 **)(puVar10 + 0x40) = puVar12;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst = _Dst_00;
        param_2 = _Src;
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x180263037;
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        *(undefined8 **)(puVar10 + 0x40) = _Dst_00;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18026304e;
      memmove(_Dst,param_2,_Size);
      *(undefined8 *)(puVar10 + 0x30) = 0;
      *(undefined8 *)(puVar10 + -8) = 0x180263064;
      FUN_1802665e0(param_1,_Dst_00,uVar6,uVar11);
      return puVar12;
    }
  }
LAB_180263086:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


